#include <iostream>

using namespace std;

int increasingArr(int arr[], int n) {
    int lis[n];
    for (int i = 0; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
    }
    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        if (lis[i] > maxLength) {
            maxLength = lis[i];
        }
    }
    return maxLength;
}

int main() {
    int testAmount;
    cin >> testAmount;

    for (int i = 0; i < testAmount; i++) {
        int testTabLegth;
        cin >> testTabLegth;
        int *testTab =  new int[testTabLegth];
        for (int j=0; j < testTabLegth; j++){
            cin >> testTab[j];
        }
        int result = increasingArr(testTab, testTabLegth);
        cout << result << endl;
        delete[] testTab;
    }
    return 0;
}
