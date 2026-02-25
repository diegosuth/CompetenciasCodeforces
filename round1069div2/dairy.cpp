#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    int bestmatch;
    int n;
    int l;
    int s;
    vector <int> secuencia;
    set <int> elementosunicos;
    int cantidadunicos;
    int final;
    for(int i = 0; i < casos; i++){
        cin >> n;
        int arrayinicial[n];
        for(int j = 0; j < n; j++){
            cin >> arrayinicial[j];
            elementosunicos.insert(arrayinicial[j]);
        }
        int contador = 0;
        cantidadunicos = elementosunicos.size();
       for(int u : elementosunicos){
            if(contador == 0){
                bestmatch = u;
                contador++;
                continue;
            }
            if(abs(cantidadunicos - u) < abs( cantidadunicos- bestmatch)){
                if(u >= cantidadunicos){
                    bestmatch = u;
                }
            }
        }
        while(cantidadunicos != bestmatch){
            cantidadunicos++;
        }
        cout << cantidadunicos << endl;
        cantidadunicos = 0;
        bestmatch = 0;
        secuencia.clear();
        elementosunicos.clear();
    }
return 0;    
}
