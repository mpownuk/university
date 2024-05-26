#include <iostream>
using namespace std;

template <typename funcArg>

funcArg znajdzMax( funcArg arr[], int size){
    funcArg max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

template <typename T>

void bubbleSortArray( T* arr, int size) {
    bool swapped;
    int n = size;
    for (int i = 0; i < n-1; i++) {
        swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }

    for (int i = 0; i < n; i++){
        cout << arr[i]<< ", ";
    }
    cout << endl;
}
