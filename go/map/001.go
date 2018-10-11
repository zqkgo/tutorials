package main

import (
	"fmt"
)

type Person struct {
	Name string
}

func main() {
	m := make(map[string]string)
	m["hello"] = "world"
	fmt.Printf("原始map类型m地址：%p\n", m)
	fmt.Println("修改前的m:")
	for key, val := range m {
		fmt.Println(key, val)
	}
	ChangeMap(m)
	fmt.Println("修改后的m:")
	for key, val := range m {
		fmt.Println(key, val)
	}

	p := Person{Name: "Will"}
	fmt.Printf("原始struct类型p地址：%p\n", &p)
	fmt.Printf("修改前的p.Name: %s\n", p.Name)
	ChangeStruct(p)
	fmt.Printf("修改后的p.Name: %s\n", p.Name)

}

// map为引用类型，参数传递的是原始map的地址
func ChangeMap(m map[string]string) {
	fmt.Printf("参数map类型的m地址：%p\n", m)
	m["foo"] = "bar"
}

// struct非引用类型，参数传递的是副本
// 如果需要修改p，则需传原始地址&p, 对应指针类型*Person
func ChangeStruct(p Person) {
	fmt.Printf("参数struct类型p地址：%p\n", &p)
	p.Name = "Jack"
}
