#include<iostream>
void sieve(vector<int> &eras, int n){
    eras = vector<int>(n,-1);
    for( int i = 4 ; i < n ; i+=2 ) eras[ i ] = 2;
    for( int i = 3 ; i*i < n ; i+=2 )
        if( eras[ i ] == -1 )
            for( int j = i*i ; j < n ; j += 2*i )
                eras[ j ] = i;
}
