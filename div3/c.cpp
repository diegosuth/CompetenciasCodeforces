#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
cin >> casos;
for (int i = 0; i < casos;i++){
    string palabra;
    int basura;
    cin >> basura;
    cin >> palabra;
    int contador = 0;
    char lastdigit;
    bool sepuede = true;
    int repeatcounter = 0;
    bool atleatone = false;
    if(palabra.length() % 2 != 0){
        cout << "NO" << endl;
    }
    else{
    for(char c: palabra){
        if(contador == 0){
            lastdigit = c;
            contador++;
            continue;
        }
        if((c == lastdigit)){
            repeatcounter++;
            atleatone = true;
            lastdigit = c;
            continue;
        }
        if(repeatcounter % 2 == 0 && repeatcounter > 0){
            sepuede = false;
            repeatcounter = 0;
        }
        repeatcounter = 0;
        lastdigit = c;
        }
        if(sepuede && atleatone){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
return 0;    
}
