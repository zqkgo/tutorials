package main

import (
	"net/http"
	"log"
	"encoding/json"
	"fmt"
)

type Result struct {
	Message string `json:"message"`
	DocUrl string `json:"documentation_url"`
}

func main() {
	var r Result
	r.Message = "world"
	ChangeStruct(r)
	fmt.Println(r.Message)

	resp, err := http.Get("https://api.github.com/users/tater/events")
	if err != nil {
		log.Fatal("error: " + err.Error())
	}
	decoder := json.NewDecoder(resp.Body)
	var result Result
	// struct非引用类型，所以需要取地址
	decoder.Decode(&result)
	fmt.Println(result.Message, result.DocUrl)
}

func ChangeStruct(r Result) {
	r.Message = "Hello"
}
