int isFibonacci(int n, int a, int b) {
    if (n == 0)
        return a == 0;
    if (n == 1)
        return b == 1;
    int c = a + b;
    if (c == n)
        return 1;
    if (c > n)
        return 0;
    return isFibonacci(n, b, c);

}
