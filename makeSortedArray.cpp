#include <cmath>
#include <cstdio>
#include <time.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <iostream>

using namespace std;
/*
int* getRandomArray(int* arr,int size){
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
    }
    return arr;
}
*/

void getSortedArray(int* arr, int n){
    //int arr[n];
    for(int i=0; i<n; i++){
        arr[i]=n-i;
    }
    //return arr;
}

int main ()
{
    //arrsize is the "n" defined in the problem
    int arrsize = 10;
    printf ("Input array size (n): \n");
    scanf ("%d",&arrsize);
    int* arr;
    getSortedArray(arr, arrsize);
    //print out the generated, sorted array
    cout << "Your generated, sorted array is as follows: " << endl;
    for(int i = 0; i < arrsize; i++){
        cout << arr[i] << endl;
    }
    

    return 0;
}