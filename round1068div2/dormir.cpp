#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    int largodia;
    int cooldown;
    string dia;
    int ignorar;
    int dormir;
    for(int i = 0; i < casos; i++){
        cin >> largodia >> cooldown;
        dormir = 0;
        ignorar = 0;
        cin.ignore();
        getline(cin,dia);
        for(int j = 0; j < largodia; j++){
            if(dia[j] == '0' && ignorar <= 0){
                dormir++;
            }
            else if(dia[j] == '1'){
                ignorar = cooldown;
            }
            else{
                ignorar--;
            }
        }
        cout << dormir << endl;
    }
return 0;    
}
