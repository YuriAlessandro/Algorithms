unsigned long long fibR (unsigned long long n){
    if (n == 0 || n == 1)
        return n;
    else return fibR (n-1) + fibR (n-2);
}
