#include <iostream>

using namespace std;

int main(){
    int i, j, k, p = 1, value,x;
    cout<<"digite a quantidade de números: "<<endl;
    cin>>x;
    int Vet[x];
    cout << "Digite os numeros";
    for(i = 0; i <x; i++){
        cin >> Vet[i];
    }
    for(k = 0; k < x; k++){
        cout << " " << Vet[k];
    }
    for(j = 0; j < x; j++){
        if(Vet[j] < Vet[j-1]){
            p = j + 1;
            value = Vet[j];
        }
    }
    cout << "\nO menor numero [" << value <<"] esta na " << p << "ª posicao";
}
