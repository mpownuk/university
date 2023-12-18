#include <iostream>
using namespace std;

void gwiazdki()
{
    int  i, j, k, n;
    cout << "Enter number of rows:  ";
    cin >> n;
    for(i = 1; i <= (2*n) - 1; i++){
       // for ( j = n-i; j >=1; j--){
        //}
        for(j = 1; j <= n-1; j++){
    k = n-j;
            if(k > j){
                cout << " ";
            }  else {
                cout << "* ";
            }
        }

        for(j = n; j <= (2*n)-1; j++){
            if(k < n - j){
                cout << " ";
            }  else {
                cout << "* ";
            }
        }
        cout << "\n";
    }
/*    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            cout << " ";
        }
        for ( j = n-i; j >=1; j--){
            cout << "* ";
        }
        cout << "\n";
    }
  */



  for ( i = 1; i< 2*n; i++){
    for ( j = n; j >=1; j--){
        if(n-i){
        cout << " ";
        } else {
            cout << "# ";
        }
    }
    cout << endl;
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

