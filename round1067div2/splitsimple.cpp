#include <bits/stdc++.h>
using namespace std;
int bs(int low,int high, int array[],int x){
    if(high >= low){
        int mid = low + ((high-low) / 2);
        if (array[mid] == x){
            return mid;
        }
        else if(x < array[mid]){
            return bs(low,mid - 1, array, x);
        }
        else if(x > array[mid]){
            return bs(mid + 1,high,array,x);
        }
    }
    return -1;
}
int main(){
    int casos;
    int n;
    cin >> casos;
    for (int i = 0; i < casos; i++){
        int contadorimparesunicos = 0;
        int contadorpares = 0;
        int contadorsimple = 0;
        cin >> n;
        int contador = 0;
        int largoarray = 2 * n;
        int arrayb[largoarray];
        set <int> diff;
        for (int j = 0; j < largoarray; j++){
            cin >> arrayb[j];
            diff.insert(arrayb[j]);
        }
        sort(arrayb,arrayb+largoarray);
        for(int o:diff){
            int contador = 0;
            contadorsimple++;
            while (true){
                int indice = bs(0,largoarray-1,arrayb,o);
                if(indice == -1){
                    break;
                }
                arrayb[indice] = 0;
                sort(arrayb,arrayb + largoarray); //complejidad to the roof
                contador++;
            }
            if (contador % 2 == 1){
                contadorimparesunicos++;
            }
            else{
                contadorpares++;
            }
    }
    int contadortotal = contadorpares * 2 + contadorimparesunicos;
    if (contadorsimple == 1 && n % 2 == 0){
        contadortotal = 0;
    }
    else if(contadorsimple == 1 && n % 2 == 1){
        contadortotal = 2;
    }
    else if(n%2 == 1){
        contadortotal = contadorpares + contadorimparesunicos;
    }
    cout << contadortotal <<endl;
    }

return 0;
}   