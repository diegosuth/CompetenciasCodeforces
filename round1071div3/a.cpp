#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
int k;
int x;
cin >> casos;
for (int i = 0; i < casos;i++){
    cin >> k >> x;
    cout << (k * x) + 1 << endl;
}
return 0;    
}