package main

import (
	"math/rand"
	"fmt"
	"time"
)

func main(){
	size := 100
	array := []int{}
	array = generateArray(array, size)
	
	start := time.Now()
	fmt.Println(findNumber(-1, array, size))
	elapsed := time.Since(start)
	fmt.Println("Tiempo:", elapsed.Microseconds())
}

func generateArray(pArray []int, pSize int) []int{
	seed := rand.NewSource(time.Now().UnixNano())
	rand1 := rand.New(seed)
	for index := 0; index < pSize; index++{
		pArray = append(pArray, rand1.Intn(100))
	}
	return pArray
}

func findNumber(pNumber int, pArray []int, pSize int) bool{
	for index := 0; index < pSize; index++{
		if pArray[index] == pNumber{
			return true
		}
	}
	return false
}