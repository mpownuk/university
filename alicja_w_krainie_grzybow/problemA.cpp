#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct Test {
    int initialGrowth;
    int targetGrowth;
};

int checkGrowth(const Test& test);


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

    int testTabLength;

    inputFile >> testTabLength;

    for (int i = 0; i < testTabLength; i++) {
        Test currentTest;
        inputFile >> currentTest.initialGrowth >> currentTest.targetGrowth;

        int result = checkGrowth(currentTest);

        if (result == -1) {
            outputFile << "NIE" << endl;
        } else {
            outputFile << result << endl;
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}

int checkGrowth(const Test& test){
    int in = test.initialGrowth, out = test.targetGrowth, sh1 = 8, sh2 = 8, counter = 0;
    while(sh1 >= 0 && sh2 >= 0){
        if(in <= 0 || in > 100000 || out > 100000){
            return -1;
        }
        if (in == out){
            return counter;
        } else if(in * 2 - 100 > out){
            in = in - 100;
            sh2--;
            counter++;
        } else if(in - 100 <= 0){
            in = in * 2;
            sh1--;
            counter++;
        } else if(in < out){
            in = in*2;
            sh1--;
            counter++;
        } else if (in > out){
            in = in -100;
            sh2--;
            counter++;
        }
    }
    return -1;
}
