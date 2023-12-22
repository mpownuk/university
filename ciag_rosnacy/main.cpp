#include <iostream>
#include <vector>
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
    int testTabLength = 0;
    do {
        cin >> testTabLength;
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
    } while (testTabLength < 1 || testTabLength > 25);

    int rowLengths[testTabLength];
    vector<vector<int>> testData(testTabLength);

    for (int i = 0; i < testTabLength; i++) {
    int rowLength = 0;
        cin >> rowLength;
        rowLengths[i] = rowLength;

        vector<int> testArray(rowLength);
        for (int j = 0; j < rowLength; j++) {
            if (rowLength < 200001) {
                cin >> testArray[j];
            }
            cin.clear();
            cin.ignore();
        }
        testData[i] = testArray;
    }
    for( int i = 0 ; i < testTabLength; i++){
        cout << increasingArr(testData[i].data(), rowLengths[i]) << endl;
    }
//    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  //  cout << increasingArr(a, 9) << endl;

    return 0;
}





/*#include <iostream>
using namespace std;

int increasingArr(int arr[], int n) {
    int lis[n];
    for (int i = 0; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
            // cout << lis[i] << ", I: " << i << ", J: " << j << " " << endl;
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

int main()
{
    int testTabLenght = 0;
    int rowLength = 0;
    do {
    cin >> testTabLenght;
        if (cin.fail()){
            cin.clear();
            cin.ignore();
        }
    } while (testTabLenght < 1 || testTabLenght >25);

    cin.ignore();

    int testTab[testTabLenght][2][rowLength];

    for (int i = 0; i< testTabLenght; i++){
        cin >> rowLength;

        for (int j = 0; j < rowLength; j++){
            if(rowLength < 200001){
                cin >> testTab[i][1][j];
            }
        }
    }

    for (int i = 0; i < testTabLenght; i++){
        cout << increasingArr(testTab[i][1],testTab[i][0][0]) << endl;
    }

    int a[9] = {1,2,3,4,5,6,7,8,9};
    cout << increasingArr(a, 9) << endl;


    return 0;
}
*/
