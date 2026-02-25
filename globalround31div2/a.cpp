#include <bits/stdc++.h>
using namespace std;

int main(){
long long casos;
long long modulo;
long long startpoint;
long long adding;
long long max;
cin >> casos;
for (int i = 0; i < casos;i++){
    long long max = 0;
    cin >> modulo >> startpoint >> adding;
    long long originaladding = adding;
    long long vueltas = 0;
    while(true){
        if((startpoint + adding) > modulo){
            vueltas++;
        }
        if(((startpoint + adding) % modulo) > max){
            max = (startpoint + adding) % modulo;
            adding = adding + originaladding;
            continue;
        }
        else if(max == (modulo - 1)){
            break;
        }
        else if(vueltas > modulo){
            break;
        }
        adding = adding + originaladding;
    }
    cout << max << endl;
}
return 0;    
}