#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    int n;
    int scorebasico;
    int scoresiempremenor;
    int scoresimple;
    cin >> casos;
    for(int i = 0; i < casos; i++){
        cin >> n;
        scorebasico = 0;
        scoresiempremenor = 0;
        scoresimple = 0;
        int cartasrojas[n];
        int cartasazules[n];
        for(int j = 0; j < n; j++){//recolecto cartas rojas
            cin >> cartasrojas[j];
        }
        for(int h = 0; h < n; h++){//recolecto cartas azules;
            cin >> cartasazules[h];
        }
        for(int f = 0; f < n; f++){ //logica absoluta
            if(f == n-1){
                int ultimajugadaroja = scorebasico + (-1 * cartasrojas[f]);
                int ultimajugadaazul = cartasazules[f] + (-1 * scorebasico);
                if (ultimajugadaroja > ultimajugadaazul){
                    scorebasico = ultimajugadaroja;
                }
                else{
                    scorebasico= ultimajugadaazul;
                }
            }
            else if(f == n-2){
                if((scorebasico + (-1 * cartasrojas[f])) > (cartasazules[f] + (-1 * scorebasico))){
                scorebasico = scorebasico + (-1 * cartasrojas[f]);
            }
                else if((scorebasico + (-1 * cartasrojas[f])) > (cartasazules[f] + (-1 * scorebasico))){
                    scorebasico = cartasazules[f] + (-1 * scorebasico);
                }
                else{
                    scorebasico = cartasazules[f] + (-1 * scorebasico);
                }
        }
            else if(abs(scorebasico + (-1 * cartasrojas[f])) > abs(cartasazules[f] + (-1 * scorebasico))){
                scorebasico = scorebasico + (-1 * cartasrojas[f]);
    
            }
            else if(abs(scorebasico + (-1 * cartasrojas[f])) < abs(cartasazules[f] + (-1 * scorebasico))){
                scorebasico = cartasazules[f] + (-1 * scorebasico);
            }
            else{
                scorebasico = cartasazules[f] + (-1 * scorebasico);
            }
        }
        for(int d = 0; d < n;d++){//juego donde siempre priorizo el menor
            if(d == n-1){
                scoresiempremenor = cartasazules[d] + (-1 * scoresiempremenor);
            }
            else if((scoresiempremenor + (-1 * cartasrojas[d])) < (cartasazules[d] + (-1 * scoresiempremenor))){
                scoresiempremenor = scoresiempremenor + (-1 * cartasrojas[d]);
            }
            else if((scoresiempremenor + (-1 * cartasrojas[d])) > (cartasazules[d] + (-1 * scoresiempremenor))){
                scoresiempremenor = cartasazules[d] + (-1 * scoresiempremenor);
            }
            else{
                scoresiempremenor = cartasazules[d] + (-1 * scoresiempremenor);
            }
        }
          for(int d = 0; d < n;d++){//juego donde es simple
            if((scoresimple + (-1 * cartasrojas[d])) > (cartasazules[d] + (-1 * scoresimple))){
                scoresimple = scoresimple + (-1 * cartasrojas[d]);
            }
            else if((scoresimple + (-1 * cartasrojas[d])) < (cartasazules[d] + (-1 * scoresimple))){
                scoresimple = cartasazules[d] + (-1 * scoresimple);
            }
            else{
                scoresimple = cartasazules[d] + (-1 * scoresimple);
            }
        }
        if (scorebasico > scoresiempremenor && scorebasico > scoresimple){
            cout << scorebasico << endl;
        }
        else if(scoresiempremenor > scorebasico && scoresiempremenor > scoresimple){
            cout << scoresiempremenor << endl;
        }
        else if(scoresimple > scoresiempremenor && scoresimple > scorebasico){
            cout << scoresimple << endl;
        }
       
    }
return 0;    
}
