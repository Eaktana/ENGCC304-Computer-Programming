#include <stdio.h>

int main() {
    int i = 0 ;
    int j = 0 ;
    int num = 0 ;

    printf( "Input your line : " ) ;
    scanf( "%d" , &num ) ;
    
    for( i = 1 ; i <= num ; i++ ) {
        for( j = 1 ; j <= i ; j++) {
        	printf( "*" ) ;
		}//end for mini
        printf( "\n" ) ;
    }//end for big
    
	return 0 ;
}//end function
