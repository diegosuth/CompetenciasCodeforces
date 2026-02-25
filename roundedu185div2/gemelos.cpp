#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    int n;
    int suma1 = 0;
    int sumatoriab = 0;
    cin >> casos;
    for(int i = 0; i < casos; i++){
        sumatoriab = 0;
        cin >> n;
        suma1 = 0;
        sumatoriab = 0;
        int arrayb[n];
        for(int j = 0; j < n; j++){
            cin >> arrayb[j];
        }
        sort(arrayb,arrayb+n);
        int r = n - 1;
        int l;
        for(int y : arrayb){
            if (y == 1){
                suma1++;
            }
            sumatoriab += y;

        }
        for(int h = 0; h < n; h++){
            if(arrayb[h] > 0){
                l = h;
                break;
            }
        }
        int budgetlimit = sumatoriab - n + 1;
        if(suma1 == n){
            cout << 1 <<endl;
        }
        else{
            if(budgetlimit < (r - l + 1)){
                cout << budgetlimit << endl;
            }
            else{
                cout << r - l  + 1<< endl;
            }
        }
}
return 0;    
}
