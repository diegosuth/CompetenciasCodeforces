#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
int n;
cin >> casos;
for (int i = 0; i < casos;i++){
    cin >> n;
    int minimadif = 0;
    if(n == 2){
        minimadif = 2;
    }
    else if(n == 3){
        minimadif = 3;
    }
    else if( n % 2 == 0){
        minimadif = 0;
    }
    else if(n % 2 == 1){
        minimadif = 1;
    }
    cout << minimadif << endl;
}
return 0;    
}
