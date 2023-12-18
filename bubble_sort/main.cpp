#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void bubbleSort ( int arr[], int n);
void printArr(int arr[], int n);
void printAndSort ( int arr[], int n);

int main()
{

    int arr1[] = {1,2,3, 2,3,4,2,5,6};
    int arr1size =  sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {-9,-12, 758,6,54,98,111,45,45,89};
    int arr2size =  sizeof(arr2) / sizeof(arr2[0]);
    int arr3[] = {1,2,3,4,5};
    int arr3size =  sizeof(arr3) / sizeof(arr3[0]);
    int arr4[] = {9,8,7,3,2,1,333,222,111};
    int arr4size =  sizeof(arr4) / sizeof(arr4[0]);

    printAndSort(arr1, arr1size);
    printAndSort(arr2, arr2size);
    printAndSort(arr3, arr3size);
    printAndSort(arr4, arr4size);

    return 0;
}

void bubbleSort ( int arr[], int n){
    bool swapped = false;
    for (int i = 0; i < n-1; i++){
        for ( int j = 0 ; j < n -1 -i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
           }
        }
        if(!swapped) break;
    }
}

void printArr(int arr[], int n){
    for(int i =0; i< n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printAndSort ( int arr[], int n){
    printArr(arr, n);
    bubbleSort(arr, n);
    printArr(arr, n);
    cout << endl;

};
