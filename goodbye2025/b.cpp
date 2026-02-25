#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
string palabra;
cin >> casos;
cin.ignore();
for (int i = 0; i < casos;i++){
    getline(cin,palabra);
    int contador = 0;
    if(palabra[0] == 'u'){
        contador++;
        palabra[0] = 's';
    }
    if(palabra[palabra.length()-1] == 'u'){
        contador++;
        palabra[palabra.length()-1] = 's';
    }
    for(int j = 1; j < palabra.length() - 2;j++){
        if(palabra[j] == 'u'){
            if(palabra[j-1] == 's' && palabra[j+1] == 's'){
                continue;
            }
            else if(palabra[j-1] == 's' && palabra[j+1] == 'u'){
                palabra[j+1] = 's';
                contador++;
            }
            else if(palabra[j-1] != 's' && palabra[j+1] == 's'){
                palabra[j-1] = 's';
                contador++;
            }
            else if((palabra[j-1] != 's' && palabra[j+1] != 's')){
                palabra[j-1] = 's';
                palabra[j+1] = 's';
                contador = contador + 2;
            }
        }
    }
    cout << contador << endl;
}
return 0;    
}
