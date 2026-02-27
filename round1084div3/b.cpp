#include <bits/stdc++.h>
using namespace std;

int main(){
int casos;
cin >> casos;
for (int i = 0; i < casos;i++){
    int largoarray;
    cin >> largoarray;
    vector<int> numeros;
    vector<int> numerosalt;
    int restaorigin = 0;
    for(int j = 0; j < largoarray;j++){
        int temp;
        cin >> temp;
        numeros.push_back(temp);
    }
    int resultadofinal = 0;
    if(is_sorted(numeros.begin(),numeros.end())){
        resultadofinal = numeros.size();
    }
    else{
        resultadofinal = 1;
    }
    cout << resultadofinal << endl;
}
return 0;    
}
