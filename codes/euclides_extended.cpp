int euclid (int a, int b, int & x, int & y) {
    if ( b == 0 ) {
        x = 1, y = 0;
        return a;
    }
    int xo, yo;
    int d = euclid( b , a%b , xo , yo );
    y = xo - (a / b) * yo;
    x = yo;
    return d;
}
