#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
cin >> casos;
string numero;
for (int i = 0; i < casos;i++){
    cin >> numero;
    long long contador = 0;
    long long sumatoriadigitos = 0;
    long long cambios = 0;
    long long temp = 0;
    vector<long long> digitos;
    long long firstdigit = 0;
    for(char c : numero){
        sumatoriadigitos += (c - '0');
        temp = c - '0';
        if(contador == 0){
            firstdigit = temp;
            contador++;
            continue;
        }
        digitos.push_back(temp);
}
long long contender = 0;
bool usedfirstdigit = false;
sort(digitos.begin(),digitos.end());
    while(sumatoriadigitos > 9){
        cambios++;
        contender = digitos.back();
        if(((sumatoriadigitos - firstdigit + 1) < (sumatoriadigitos - contender)) && !usedfirstdigit){
            sumatoriadigitos = sumatoriadigitos - firstdigit + 1;
            usedfirstdigit = true;
        }
        else{
            sumatoriadigitos -= contender;
            digitos.pop_back();
        }
    }
    cout << cambios << endl;
}
return 0;    
}
