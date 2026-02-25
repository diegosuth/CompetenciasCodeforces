#include <bits/stdc++.h>
using namespace std;
int main(){
    int casos;
    int n;
    cin >> casos;
    for (int i = 0; i < casos; i++){
        cin >> n;
        int largoarray = 2 * n;
        int contadorimpar = 0;
        int contadorpar = 0;
        int contadortotal = 0;
        int array[largoarray];
        map <int,int> freq;
        for(int j = 0; j < largoarray; j++){
            cin >> array[j];
        }
        for (int h : array){
            freq[h]++;
        }
        for (auto const& [key,amount] : freq){
            if (amount % 2 == 0){
                contadorpar++;
                //par
            }
            else if (amount % 2 == 1){
                contadorimpar++;
                //impar
            }
        }
        contadortotal = contadorpar * 2 + contadorimpar; //best case
        if (contadorimpar == 0 && ((contadorpar % 2) != (n % 2))){
            contadortotal -= 2;
        }
        cout << contadortotal << endl;
    }
    return 0;
}