// When called, this function returns the "n-th" Fibonacci number

unsigned long long fibI (unsigned long long n){
    unsigned long long fib = n, fibAA = 0, fibA = 1;
    for (unsigned long long i = 2; i<=n; i++){
        fib = fibA + fibAA;
        fibAA = fibA;
        fibA = fib;
    }
    return fib;
}
