#include "headerSort.hpp"
using namespace std;


//Implementacion del algoritmo de ordenamiento bubble sort.
void bubbleSort(int arr[], int n) {
  int temp = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}


//Implementacion del algoritmo de ordenamiento selection sort.
void selectionSort(int arr[], int n) {
  int minIndex, temp;
  for (int i = 0; i < n - 1; i++) {
    minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
  
    temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
  }
}




//Implementacion del algoritmo de ordenamiento insertion sort.
void insertionSort(int arr[], int n){
  for (int i = 1; i < n ; i++)
  {
    
    int actual = arr[i];
    int j = i-1;
    while (j>=0 && actual<arr[j])
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = actual;
  }
}



//Implementacion del algoritmo de ordenamiento quick sort.
void quickSort(int arr[], int low, int high){  
}