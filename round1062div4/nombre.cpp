#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    string desordenado;
    string objetivo;
    int cantidad;
    bool secumple = true;
    cin >> casos;
    for (int i = 0; i < casos; i++){
        cin >> cantidad;
        cin >> desordenado >> objetivo;
        for (int j = 0; j < cantidad; j++){
            for(int l = 0; l < cantidad; l++){
                if(desordenado[j] == objetivo[l]){
                    desordenado[j] = ' ';
                    objetivo[l] = ' ';
                }
            }
        }
        for(char c: desordenado){
            if (c != ' '){
                secumple = false;
            }
        }
        if (secumple){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO"<< endl;
        }
        secumple = true;
    }
return 0;    
}
