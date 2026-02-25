#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    int largoarray;
    int array[largoarray];
    int sumatoria = 0;
    int promedio = 0;
    int elementomayor = 0;
    string elementos;
    cin >> casos;
    for (int k = 0; k < casos; k++){
        cin >> largoarray;
        cin.ignore();
        getline(cin,elementos);
        istringstream iss(elementos);
        for (int i = 0; i < largoarray; i++){
            iss >> array[i];
        }
        for (int j = 0; j < largoarray; j++){
            if (array[j] > elementomayor){
                elementomayor = array[j];
            }
        }
        cout << elementomayor << "\n";
        elementomayor = 0;
    }
return 0;    
}
