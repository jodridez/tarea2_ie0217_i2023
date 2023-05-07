#include <iostream>
#include <time.h>
#include "headerSort.hpp"

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void llenarArreglo(int arr[], int n){
     for (int i = 0; i < n; i++)
   {
     arr[i]=rand()%101;
   }
}
   

   


int main(){
    int n = 15;
    int arr[n];
    srand(time(NULL));

    llenarArreglo(arr,n);
    cout<<"Arreglo antes del bubbleSort"<<endl;
    printArray(arr,n);
    bubbleSort(arr,n);
    cout<<"Arreglo despues del bubbleSort"<<endl;
    printArray(arr,n);

    cout << endl;

    llenarArreglo(arr,n);
    cout<<"Arreglo antes del selectionSort"<<endl;
    printArray(arr,n);
    selectionSort(arr,n);
    cout<<"Arreglo despues del selectionSort"<<endl;
    printArray(arr,n);

    cout << endl;

    llenarArreglo(arr,n);
    cout<<"Arreglo antes del insertionSort"<<endl;
    printArray(arr,n);
    insertionSort(arr,n);
    cout<<"Arreglo despues del insertionSort"<<endl;
    printArray(arr,n);

    cout << endl;

    
    


    return 0;
}