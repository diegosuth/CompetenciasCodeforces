#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    int largoarray;
    string winner;
    int quantityof1 = 0;
    cin >> casos;
    for (int i = 0; i < casos; i++){
        cin >> largoarray;
        int arrayoddturn[largoarray];
        int arrayeventurn[largoarray];
        for (int r = 0; r<largoarray; r++){ //recoleccion ajisai
            cin >> arrayoddturn[r];
            if (arrayoddturn[r] == 1){
                quantityof1++;
            }
        }
        for(int k = 0; k<largoarray; k++){ //recoleccion mai
            cin >> arrayeventurn[k];
            if(arrayeventurn[k] == 1){
                quantityof1++;
            }
        }
        for(int h = 1; h <= largoarray; h++){
            if (h % 2 == 0){ //juega mai
                if(arrayeventurn[h-1] == arrayoddturn[h-1]){
                    continue;
                }
                else{
                    int temp;
                    temp = arrayeventurn[h-1];
                    arrayeventurn[h-1] = arrayoddturn[h-1];
                    arrayoddturn[h-1] = temp;
                    winner = "Mai";
                }
            }
            else{ //juega ajisai
                if(arrayoddturn[h-1] == arrayeventurn[h-1]){
                    continue;
                }
                else{
                    int temp;
                    temp = arrayoddturn[h-1];
                    arrayoddturn[h-1] = arrayeventurn[h-1];
                    arrayeventurn[h-1] = temp;
                    winner = "Ajisai";
                }
            }
        }
        
        if(quantityof1 % 2 == 0){
            cout << "Tie";
        }
        else{
            cout << winner;
        }
        quantityof1 = 0;
        cout << endl;
    }
return 0;    
}