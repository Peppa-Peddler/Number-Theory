// including 'algorithm' library you can use this function instead: __gcd(int
// a, int b)

int gcd( int a , int b )
{
    if( b == 0 ) return a;
    return gcd( b , a % b );
}
