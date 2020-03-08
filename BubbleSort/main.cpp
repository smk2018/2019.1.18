//
//  main.cpp
//  BubbleSort
//
//  Created by mingkunshi on 3/5/20.
//  Copyright © 2020 mingkunshi. All rights reserved.
//

#include <iostream>
using namespace std;
void swap(int* xp, int* yp) {
    int tmp;
    tmp = *xp;
    *xp = *yp;
    *yp = tmp;
}
void BubbleSort(int arr[], int n) {
    int i,j;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i -1; j++) {
            if(arr[j] < arr[j+1]) {
                swap(&arr[j+1],&arr[j]);
            }
        }
    }
}
void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n = 5;
    int arr[5] = {22,12,34,6,40};
    BubbleSort(arr,n);
    print(arr,n);
    cout<<endl;
    return 0;
}
