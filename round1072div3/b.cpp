#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
cin >> casos;
int s;
int k;
int m;
for (int i = 0; i < casos;i++){
    cin >> s >> k >> m;
    int concepto = 0;
    int tiempoarena = 0;
    if(s < k){
        tiempoarena = 0;
    }
    else if(s > k){
        tiempoarena = k;
    }
    else if(s == k){
        tiempoarena = abs(k-s);
    }
    cout << tiempoarena << endl;
}
return 0;    
}
