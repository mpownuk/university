#include <iostream>
using namespace std;

void gwiazdki()
{
    int  i, j, n;
    cout << "Enter number of rows:  ";
    cin >> n;
    for(i = 1; i <= n; i++){
        for ( j = n-i; j >=1; j--){
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            cout << " ";
        }
        for ( j = n-i; j >=1; j--){
            cout << "* ";
        }
        cout << "\n";
    }
    return;
}

int main()
{
  gwiazdki();
  cout << "Good morning"<< endl;
  gwiazdki();
  cout<<"This is STARS program"<<endl;
  gwiazdki();
  return 0;
}

