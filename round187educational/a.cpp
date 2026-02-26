#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
cin >> casos;
float cantidadcajas;
int pesomax;
int durabilidad;
int torres;
float largotorremax;
for (int i = 0; i < casos;i++){
    cin >> cantidadcajas >> pesomax >> durabilidad;
    largotorremax = (durabilidad / pesomax) + 1;
    torres = ceil(cantidadcajas / largotorremax);
    cout << torres << endl;
}
return 0;    
}
