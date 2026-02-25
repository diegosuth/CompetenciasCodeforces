#include <bits/stdc++.h>
using namespace std;
 
int main(){
int casos;
int n;
int g;
int j;
cin >> casos;
int temp;
for (int f = 0; f < casos;f++){
    cin >> n;
    int contador = 0;
    vector<int> numbers;
    for(int i = 0; i < n; i++){
        cin >> temp;
        numbers.push_back(temp);
    }
    int eliminado = 0;
    while(numbers.size() > 1){
        eliminado = 0;
        for(int g = 0; g < numbers.size()-1; g++){
            if(numbers[g] > numbers[g+1]){
                numbers.erase(numbers.begin() + g + 1);
                contador++;
                eliminado++;
            }
    }
    if(eliminado == 0){
        break;
    }
}
cout << contador << endl;
}
return 0;    
}