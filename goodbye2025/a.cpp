#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
string combinacion;
cin >> casos;
cin.ignore();
for (int i = 0; i < casos;i++){
    getline(cin, combinacion);
    int contador = 0;
    for(char c:combinacion){
        if(c == 'N'){
            continue;
        }
        else{
            contador++;
        }
}
if(contador > 1){
    cout << "NO" << endl;
}
else{
    cout << "YES" << endl;
}
}
return 0;    
}
