#include <iostream>

using namespace std;

int main(){
    int l, fib1 = 1, fib2 = 1;
    cin >> l;
    cout << "1 1";

    while(1){
        fib1 += fib2;
        fib2 += fib1;
        if (fib1 < l) cout << " " << fib1;
        if (fib2 < l) cout << " " << fib2;
        else break;
        }
    return 0;
}
