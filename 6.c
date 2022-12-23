#include <stdio.h>

int qtd=0;

long fibonacci( int n )
{
    qtd=qtd+1;
    if ( ( n == 0 ) || ( n == 1 ) )
        return n;
    return fibonacci ( n - 1 ) + fibonacci( n - 2 );
}
int main()
{
    printf( "%ld\n", fibonacci( 4 ) );
    printf("%d",qtd);
    return 0;
}
