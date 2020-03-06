/*
This algorithm sort the array in [biggest #, smallest #, 2nd biggest #, 2nd Smallest #, .., .. ] 
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

using namespace std;

int * insert(int size, int arr[], int value, int pos);

int * meandering_sorting(int n, int arr[]);

int main()
{    
    int arr[] = {25,7, -10, 3, 5}; 
    
    int n = sizeof(arr) / sizeof(arr[0]); 
    meandering_sorting(n, arr);
    
    for (int i=0; i< n; i++){
        cout << arr[i] << " ";
    } 
    return 0;
}

int * meandering_sorting(int n, int arr[]){
    sort(arr, arr+n, greater<int>()); 
    for (int i=0; i<n; i++){
        if ((i % 2) == 1){
            insert(n, arr, arr[n-1], i+1);
        }
    }
    return arr;
}

int * insert(int size, int arr[], int value, int pos)
{
    size++;
    // shift elements forward
    for(int i=size; i >= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = value;
    return arr;
}
