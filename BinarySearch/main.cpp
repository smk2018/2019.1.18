//
//  main.cpp
//  BinarySearch
//
//  Created by mingkunshi on 3/5/20.
//  Copyright © 2020 mingkunshi. All rights reserved.
//

#include <iostream>
using namespace std;

int BinarySearch (int arr[], int l, int r, int x) {
    if(r >= 1) {
        int mid = l + (r-l)/2;
        if(arr[mid] == x) {
            return mid;
        }
        else if(arr[mid] > x) {
            return BinarySearch(arr, l, mid-1, x);
        }
        else {
            return BinarySearch(arr, mid+1, r, x);
        }
    }
    else {
        return -1;
    }
}

int main() {
    int arr[] = {2,3,4,10,40};
    int target = 10;
    int output;
    int n = sizeof(arr)/sizeof(arr[0]);
    output = BinarySearch(arr,0,n-1,target);
    cout << output <<endl;
    return 0;
}
