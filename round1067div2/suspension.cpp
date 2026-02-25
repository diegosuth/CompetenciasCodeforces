#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    int y;
    int jugadorestotales;
    int suspensiones;
    int r;
    for(int i = 0; i < casos; i++){
        cin >> jugadorestotales;
        cin >> y >> r;
        suspensiones = r + ((y - (y%2))/2);
        if (suspensiones > jugadorestotales){
            cout << jugadorestotales << endl;
        }
        else{
        cout << suspensiones << endl;
    }}
return 0;    
}