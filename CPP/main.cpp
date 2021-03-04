#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

bool findNumber(int pNumber, int pArray[], int pArraySize);
void generateArray(int pArray[], int pSize);

int main(){
    int size = 100;

    int array[size];
    generateArray(array, size);

    auto start = high_resolution_clock::now();
    cout << "Resultado: " << findNumber(-1, array, size) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
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