#include <cmath>
#include <cstdio>
#include <time.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <iostream>

using namespace std;

int* getRandomArray(int* arr,int size){
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
    }
    return arr;
}

int main ()
{
    srand (time(NULL));
    //arrsize is the "n" defined in the problem
    int arrsize = 10;
    printf ("Input array size (n): \n");
    scanf ("%d",&arrsize);
    int arr[arrsize];
    int* outArr = getRandomArray(arr, arrsize);
    //print out the randomly populated array
    cout << "Your random array is as follows: " << endl;
    for(int i = 0; i < arrsize; i++){
        cout << outArr[i] << endl;
    }
    return 0;
}