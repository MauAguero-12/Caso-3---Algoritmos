#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

bool findNumber(int pNumber, int pArray[], int pArraySize);
void generateArray(int pArray[], int pSize);
static int array[10000000];
int main(){
    cout << "empieza" << endl;
    //se genera un array del tamaño indicado con valores aleatorios entre 1 y 100
    int size = 10000000;
    generateArray(array, size);

    //se toma el tiempo de inicio
    auto start = high_resolution_clock::now();
    //se busca un -1 en el array
    cout << "Resultado: " << findNumber(-1, array, size) << endl;
    //se toma el tiempo de final
    auto stop = high_resolution_clock::now();
    //se calcula la duración en microsegundos
    auto duration = duration_cast<microseconds>(stop - start);
    //se imprime el tiempo
    cout << "Tiempo: " << duration.count() << endl;
}

bool findNumber(int pNumber, int pArray[], int pArraySize){
    for (int index = 0; index < pArraySize; index++){
        if (pArray[index] == pNumber){
            return true;
        }
    }
    return false;
}

void generateArray(int pArray[], int pSize){
    for (int index = 0; index < pSize; index++){
        pArray[index] = rand()%100;
    }
}