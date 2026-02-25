#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    int piernastot;
    int casostot;
    cin >> casos;
    for(int i = 0; i < casos; i++){
        cin >> piernastot;
        if (piernastot % 2 == 1){
            casostot = 0;
            cout << 0 << endl;
            continue;
        }
        else if(piernastot % 4 == 0){
            casostot = (piernastot / 4) + 1;
            cout << casostot << endl;
            casostot = 0;
        }
        else{
            casostot = floor(piernastot / 4) + 1;
            cout << casostot << endl;
            casostot = 0;
        }
    }

return 0;    
}