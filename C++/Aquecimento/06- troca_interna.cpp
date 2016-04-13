#include <iostream>

using namespace std;

int main(){
    int i, k = 19;
    int A[20], B[20];
    for(i = 0; i < 20; i++){
        cin >> A[i];
    }
    for(i = 0; i < 20; i++){
        cout << " " << A[i];
    }
    for(i = 0; i < 20; i++){
        B[i] = A[k];
        k--;
    }
    cout << "\n";
    for(i = 0; i < 20; i++){
        cout << " " << B[i];
    }
}
