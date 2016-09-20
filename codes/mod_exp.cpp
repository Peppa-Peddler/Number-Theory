int modexp (int a, int b, int MOD)
{
    if( b == 0 ) return 1;

    int x = modexp(a, b/2 , MOD);
        x = x*x;
        x %= MOD;

    if( b & 1 ) return ( x*a ) % MOD;
    return x;
}
