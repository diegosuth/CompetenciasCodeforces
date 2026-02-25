#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
int largoarray;
cin >> casos;
for (int i = 0; i < casos;i++){
    cin >> largoarray;
    vector <int> numeros;
    int temp;
    int numeromayor = 0;
    int indexmax = 0;
    for(int j = 0; j < largoarray; j++){
        cin >> temp;
        numeros.push_back(temp);
        if (temp > numeromayor){
            numeromayor = temp;
            indexmax = j;
        }
    }
    numeros.erase(numeros.begin() + indexmax);
    int sumatoria = 0;
    for(int g = 0; g < largoarray - 2; g++){
        sumatoria += abs(numeros.at(g) - numeros.at(g+1));
    }
    cout << sumatoria << endl;
}
return 0;    
}