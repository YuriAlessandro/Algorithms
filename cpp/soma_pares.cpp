// This version are not tested yet

#include <iostream>

using namespace std;

int main(){

    int m, n, i, value = 0;
    
    while (1){
        cin >> n;
        cin >> m;
        if (n == 0 && m == 0) break; 
        for(i = 0; i < n; i++){
            value  += m + i;
        }
        cout << value;
    }
    return EXIT_SUCCESS;
}
