#include <iostream>

using namespace std;

int main(){
    int i, j, k, p = 1, value;
    int Vet[20];
    cout << "Digite 20 numeros";
    for(i = 0; i < 20; i++){
        cin >> Vet[i];
    }
    for(k = 0; k < 20; k++){
        cout << " " << Vet[k];
    }
    for(j = 0; j < 20; j++){
        if(Vet[j] < Vet[j-1]){
            p = j + 1;
            value = Vet[j];
        }
    }
    cout << "\nO menor numero [" << value <<"] esta na " << p << "ª posicao";
}
