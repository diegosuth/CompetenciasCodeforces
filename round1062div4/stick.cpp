#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
int palo;
string palos;
int sticks[4];
cin >> casos;
set<int>duro;
bool escuadrado = true;
int sumatoria = 0;
cin.ignore();
for (int i = 0; i < casos; i++){
    getline(cin,palos);
    istringstream iss(palos);
    for (int j = 0; j < 4; j++){
        iss >> sticks[j];        
}
for (int m : sticks){
    duro.insert(m);
}
if (duro.size() >= 2){
    escuadrado = false;
}  
if (escuadrado){
    cout << "YES" << endl;
}
else{
    cout << "NO" <<endl;
}
sumatoria = 0;
duro.clear();
escuadrado = true;
}
return 0;    
}
