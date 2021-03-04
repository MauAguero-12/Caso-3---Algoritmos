package main

import(
	"fmt"
)

func main(){
	array := []int{}
	array = generateArray(array, 10)
	fmt.Println(array)
	fmt.Println("go funciona")
}

func generateArray(pArray []int, pSize int) []int{
	for index := 0; index < pSize; index++{
		pArray = append(pArray, index)
	}
	return pArray
}