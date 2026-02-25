#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    int largo;
    string construccion;
    cin >> casos;
    bool espar = false;
    bool esimpar = false;
    for (int i = 0; i < casos; i++){
        cin >> largo;
        vector<int> lista(largo);
        cin.ignore();
        getline(cin,construccion);
        istringstream iss(construccion);
        for (int j = 0; j < largo; j++){
            iss >> lista[j];
            if (lista[j] % 2 == 0){
                espar = true;
            }
            else{
                esimpar = true;
            }
        }
    if (espar && esimpar){
            sort(lista.begin(),lista.end());
        }
    for (int h:lista){
            cout << h << ' ';
        }
    lista.clear();    
    cout << endl;
    espar = false;
    esimpar = false;
}
return 0;    
}
