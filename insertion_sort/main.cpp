#include <iostream>

using namespace std;

void insertionSort( int arr[], int n);
void printArr(int arr[], int n);
void sortAndPrint(int arr[], int n);

int main()
{
    int arr1[] = {2,1,3,4,8,66,45,29};
    int arr1length = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {15,98,2,75,-99,64,2456};
    int arr2length = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[] = {9,8,7,6,5,4,3,2,1};
    int arr3length = sizeof(arr3) / sizeof(arr3[0]);
    int arr4[] = {1,2,3,4,5,6,7,8,9};
    int arr4length = sizeof(arr4) / sizeof(arr4[0]);

    sortAndPrint(arr1, arr1length);
    sortAndPrint(arr2, arr2length);
    sortAndPrint(arr3, arr3length);
    sortAndPrint(arr4, arr4length);

    return 0;
}
void insertionSort( int arr[], int n)
    {
    for(int i = 1; i < n; i++){ // i is 1
            int j = i-1; // j is 0
            int key = arr[i]; // key is second walue of arr in first iteration
            while( j>=0 && arr[j] > key){ // if first value of arr is greater than second value
                arr[j+1] = arr[j]; // second value has value of first value
                j--; // j = -1 -> loop break
            }
            arr[j+1] = key; // j+1 = 0 -> first element of arr has value of KEY which is previous second value, before while loop
        }
    }

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
    }
    cout << endl;
}

void sortAndPrint(int arr[], int n){
    printArr(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);
    cout << endl;
}
