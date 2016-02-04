#include <iostream>

using namespace std;

int main(){
    int i, k = 19;
    int C[20], A[20];
    for(i = 0; i < 20; i++){
        cin >> C[i];
    }
    for(i = 0; i < 20; i++){
        cout << " " << C[i];
    }
    for(i = 0; i < 20; i++){
        if (C[i] <= 0) A[i] = NULL;
        else A[i] = C[i];
    }

    cout << "\n";
    for(i = 0; i < 20; i++){
        if (A[i] == 0) continue;
        else cout << " " << A[i];
    }
}
