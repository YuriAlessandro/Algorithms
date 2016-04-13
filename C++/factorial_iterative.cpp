// This function is able to calculate the factorial of a number when calling

// Iteratively, without recursion

unsigned long long fatI( unsigned long long n){
    unsigned long long fat = 1;
    for (unsigned long long i = 2; i <= n; i++)
        fat *= i;
    return fat;
}
