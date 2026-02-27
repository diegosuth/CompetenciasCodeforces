#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
cin >> casos;
for (int i = 0; i < casos;i++){
    int largonumero;
    map<int,int> numeroscounter;
    vector<int> numeros;
    cin >> largonumero;
    for(int j = 0; j < largonumero; j++){
        int temp;
        cin >> temp;
        numeros.push_back(temp);
    }
    for(int n: numeros){
        numeroscounter[n]++;
    }
    int ganadores = 0;
    int contador = 0;
    int maxkey = 0;
    for(auto const& [key,freq]: numeroscounter){
        if(contador == 0){
            maxkey = key;
            ganadores = freq;
            contador++;
            continue; 
        }
        if(key > maxkey){
            ganadores = freq;
        }
    }

    cout << ganadores << endl;

}
return 0;    
}
