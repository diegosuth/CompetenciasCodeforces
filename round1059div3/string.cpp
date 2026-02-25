#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos = 0;
    int largostring;
    string binario;
    int sumatoria = 0;
    cin >> casos;
    for (int i = 0; i < casos; i++){
        cin >> largostring;
        cin >> binario;
        vector <int> p = {};
        for (int j = 0; j < largostring / 2; j++){
            if (j == (largostring - j - 1)){
                break;
            }
            if (binario[j] == binario[largostring - j - 1]){
                continue;
            }
            if(binario [j] != binario[largostring - j - 1]){
                p.push_back(j);
                sumatoria += 1;
            }
        }
        cout << sumatoria << "\n";
        for (int k = 0; k < sumatoria; k++){
            if (not p[k]){
                break;
            }
            cout << p[k] << ' ';
        }
        sumatoria = 0;
    }
return 0;    
}
