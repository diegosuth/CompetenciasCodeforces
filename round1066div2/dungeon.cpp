#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    int largoarray;
    for (int i = 0; i < casos; i++){
        cin >> largoarray;
        int arraybal[largoarray];
        vector<int> copiavec;
        set<int> screening;
        for(int k = 0; k < largoarray;k++){
            cin >> arraybal[k]; 
        }
        int n = sizeof(arraybal) / sizeof(arraybal[0]);
        sort(arraybal, arraybal + n);
        for(int l = 0; l < largoarray;l++){
            screening.insert(arraybal[l]);
        }
        int contadortotal = 0;
        for(int c : screening){
            contadortotal += c;
        }
        
    }
return 0;    
}
