#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
int quant;
string palabra;
cin >> casos;
for (int i = 0; i < casos;i++){
    cin >> quant;
    string palabrass[quant];
    for(int j = 0; j <quant; j++){
        cin >> palabrass[j];
    }
    string primerapalabra = palabrass[0];
    for(int g = 1; g < quant; g++){
        string palabracurrent = palabrass[g];
        if(palabracurrent[0] > primerapalabra[0]){
            primerapalabra = primerapalabra + palabracurrent;
        }
        else if(palabracurrent[0] < primerapalabra[0]){
            primerapalabra = palabracurrent + primerapalabra;
        }
        else{
            string primeraopcion = primerapalabra + palabracurrent;
            string segundaopcion = palabracurrent + primerapalabra;
            if(primeraopcion <= segundaopcion){
                primerapalabra = primeraopcion;
            }
            else{
                primerapalabra = segundaopcion;
            }
        }
    }
    cout << primerapalabra << endl;
}
return 0;    
}