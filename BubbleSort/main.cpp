//
//  main.cpp
//  BubbleSort
//
//  Created by mingkunshi on 3/7/20.
//  Copyright © 2020 mingkunshi. All rights reserved.
//

#include <iostream>
using namespace std;
void swap(int *xp, int *yp) {
    int tmp;
    tmp = *xp;
    *xp = *yp;
    *yp = tmp;
}
void bubblesort(int arr[], int n) {
    int i,j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i -1 ; j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[i], &arr[j+1]);
            }
        }
    }
}
void printArray (int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[] = {64,34,25,12,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    cout<<"Sorted array:\n";
    printArray(arr,n);
    cout<<endl;
    return 0;
}
