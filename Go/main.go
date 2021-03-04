package main

import (
	"math/rand"
	"fmt"
	"time"
)

func main(){
	//se genera un array del tamaño indicado con valores aleatorios entre 1 y 100
	size := 100
	array := []int{}
	array = generateArray(array, size)
	
	//se toma el tiempo de inicio
	start := time.Now()
	//se busca un -1 en el array
	fmt.Println(findNumber(-1, array, size))
	//se calcula la duración en microsegundos
	elapsed := time.Since(start)
	//se imprime el tiempo
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