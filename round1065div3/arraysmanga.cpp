#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    int largoarray;
    cin >> casos;
    for (int i = 0; i < casos; i++){
        cin >> largoarray;
        int arraya[largoarray];
        for(int k = 0; k < largoarray; k++){
            cin >> arraya[k];
        }
        if (arraya[0] == -1 && arraya[largoarray - 1] == -1){
            cout << 0 << endl;
            for (int l = 0; l < largoarray; l++){
                if (arraya[l] == -1){
                    cout << " " <<  0;
                    continue;
                }
                if(l > 0){
                    cout << " " << arraya[l];
                }
                else{
                    cout << arraya[l];
                }
        }}
        else if(arraya[0] == -1 && arraya[largoarray - 1] != -1){
            cout << 0 << endl;
            for (int l = 0; l < largoarray; l++){
                if (l == 0){
                    arraya[l] = arraya[largoarray -1];
                    cout << arraya[l];
                    continue;
                }
                if (arraya[l] == -1){
                    cout << " " <<  0;
                    continue;
                }
                if(l > 0){
                    cout << " " << arraya[l];
                }
                else{
                    cout << arraya[l];
                }
        }
    }
        else if(arraya[0] != -1 && arraya[largoarray - 1] == -1){
            cout << 0 << endl;
            for (int l = 0; l < largoarray; l++){
                if (l == largoarray-1){
                    arraya[l] = arraya[0];
                    cout << " " << arraya[l];
                    break;
                }
                if (arraya[l] == -1){
                    cout << " " <<  0;
                    continue;
                }
                if(l > 0){
                    cout << " " << arraya[l];
                }
                else{
                    cout << arraya[l];
                }
        }
    }
        else{
            cout << abs(arraya[largoarray-1] - arraya[0]) << endl;
            for (int l = 0; l < largoarray; l++){
                if (arraya[l] == -1){
                    cout << " " <<  0;
                    continue;
                }
                if(l > 0){
                    cout << " " << arraya[l];
                }
                else{
                    cout << arraya[l];
                }
        }
        }
        cout << endl;
}
return 0;    
}