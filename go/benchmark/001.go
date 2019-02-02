package main

import (
	"io/ioutil"
	"log"
	"net/http"
	"sync"
	"time"
)

const TIMES = 500

func main() {
	seq()
	async()
}

func seq() {
	log.Println("sequence start: ")
	start := time.Now()
	defer elapsed(start, "顺序执行:")
	for i := 0; i < TIMES; i++ {
		req()
	}
}

func async() {
	log.Println("async start: ")
	start := time.Now()
	defer elapsed(start, "异步执行:")
	var wg sync.WaitGroup
	for i := 0; i < TIMES; i++ {
		wg.Add(1)
		go func() {
			defer wg.Done()
			req()
		}()
	}
	wg.Wait()
}

func elapsed(start time.Time, name string) {
	elapsed := time.Since(start)
	log.Printf("%s took %s", name, elapsed)
}

func req() {
	resp, err := http.Get("https://api.weixin.qq.com/sns/oauth2/access_token?appid=APPID&secret=SECRET&code=CODE&grant_type=authorization_code")
	if err != nil {
		log.Println(err)
		panic(err.Error)
	} else {
		defer resp.Body.Close()
		bytes, _ := ioutil.ReadAll(resp.Body)
		log.Println("字节数：", len(bytes))
	}
}
