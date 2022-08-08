#include <stdio.h>

int main() {
	int i ;
	int j ;
	int k ;
	int num ;
	
	printf( "Input your line : " ) ;
	scanf( "%d" , &num ) ; 
	
	if( num % 2 == 0) {
		for( i = 1 ; i <= num ; i++ ){
			for( j = num-i ; j > 0 ; j--) {
				printf( " " ) ;
			}
			for( k = 0 ; k < i ; k++ ) {
				printf( "*" ) ;
                printf( " " ) ;
			}
			
			printf( "\n" ) ;	
		}
	}
		else {
			for( i = 1 ; i <= num ; i++ ){
				for( k = 1 ; k < i ; k++ ) {
					printf( " " ) ;	
				}
				for( j = num - i ; j >= 0 ; j-- ) {
					printf( "*" ) ;
            		printf( " " ) ;
				}
				printf( "\n" ) ;
			}
		}
		
	return 0 ;
}//end function

