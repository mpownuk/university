#include <iostream>
#include <sstream>
#include <string>
#include <limits>

using namespace std;

void checkGrowth(int initialGrowth, int targetGrowth, int shroom1, int shroom2){
    int in = initialGrowth, out = targetGrowth, sh1 = shroom1, sh2 = shroom2, counter = 0;
    while(sh1 >= -1 && sh2 >= -1){
        if(sh1 < 0 || sh2 < 0){
            cout << "NIE" << endl;
            break;
        }
        if(in < out){
            in = in*2;
            sh1--;
            counter++;
        } else if (in > out){
            in = in -100;
            if(in < 0){
                cout << "NIE" << endl;
                break;
            }
            sh2--;
            counter++;
        } else if (in == out){
            cout  << counter << endl;
            break;
        }
    }
}

int main()
{
    int testTabLenght, i=0, multiplyMushroom = 8, substractMushroom = 8;
    do {
    cin >> testTabLenght;
        if (cin.fail()){
            cin.clear();
            cin.ignore();
        }
    } while (testTabLenght < 1 || testTabLenght >100);

    cin.ignore();
    int testTab[testTabLenght][2] = {};

    while(i<testTabLenght){
        string input;
        int num1, num2;
        getline(cin, input);
        istringstream nums(input);

        if(nums >> num1 >> num2 && (num1 > 0 && num1 < 100001) && (num2 > 0 && num2 < 100001)){
            testTab[i][0] = num1;
            testTab[i][1] = num2;
            i++;
        } else {
        }
    }

    for ( int j = 0; j < testTabLenght; j++){
        checkGrowth(testTab[j][0], testTab[j][1], multiplyMushroom, substractMushroom);
    }

    return 0;
}
