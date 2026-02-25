#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    string acensurar;
    string lugaraesconder;
    string resultado;
    set <char> unicos;
    vector <char> ordenados;
    for(int i = 0; i < casos; i++){
        cin >> acensurar;
        cin >> lugaraesconder;
        resultado = acensurar + lugaraesconder;
        for(char c:resultado){
            unicos.insert(c);
        }
        for(char d : unicos){
            ordenados.push_back(d);
        }
        sort(ordenados.begin(),ordenados.end());
        for(char t : ordenados){
            cout << t;
        }
        cout <<endl;
    }
return 0;    
}
