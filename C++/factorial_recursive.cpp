// This function calculates the factorial of a number when calling.

// Using recursion (it will take longer to process very large numbers)

unsigned long long fatR( unsigned long long n){
    if (n == 0) return 1;
    return n*fatR(n-1);
}
