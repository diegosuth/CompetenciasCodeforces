#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    int suma;
    int n;
    for(int i = 0; i < casos; i++){
        suma = 0;
        cin >> n;
        if (n > 2 && n < 5){
        suma = (n * n) - 1 + (n * n) + (n * n) - 2 + (n * n) - n - 1;
        cout << suma <<endl;
        }
        else if(n >= 5){
            suma = 5 * ((n * n) - n - 1);
            cout << suma << endl;
        }
        else if ( n == 2){
            cout << 9 << endl;
        }
        else if(n == 1){
            cout << 1<<endl;
        }
    }
return 0;    
}
