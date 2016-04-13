#include <iostream>

using namespace std;

int main(){

    int m, n, i, value = 0;

    while (1){
        cout << "Digite o valor de n\n";
        cin >> n;
        cout << "\nDigite o valor de m\n";
        cin >> m;
        if (n == 0 && m == 0) break;
        for(i = 0; i < n; i++){
            value  += m + i;
        }
        cout << "A soma dos n primeiros numeros a partir de m é: " << value << "\n";
    }
    return EXIT_SUCCESS;
}
