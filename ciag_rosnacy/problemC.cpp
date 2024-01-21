#include <iostream>
#include <fstream>
#include <cstdlib>

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

    ifstream inputFile("C:\\A.in");
    ofstream outputFile("C:\\A.out");

    if (!inputFile.is_open()) {
        cerr << "Blad podczas otwierania pliku wejsciowego" << endl;
        return 1;
    }

    if (!outputFile.is_open()) {
        cerr << "Blad podczas otwierania pliku wyjsciowego." << endl;
        return 1;
    }

    int testAmount;
    inputFile >> testAmount;

    for (int i = 0; i < testAmount; i++) {
        int testTabLegth;
        inputFile >> testTabLegth;

        cout << testTabLegth << endl;
        int *testTab =  new int[testTabLegth];
        for (int j=0; j < testTabLegth; j++){
            inputFile >> testTab[j];
            cout << testTab[j] << " ";
        }
        cout << endl;

        int result = increasingArr(testTab, testTabLegth);
        cout << result << endl;
        outputFile << result << endl;

        delete[] testTab;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
