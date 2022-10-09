#include <stdio.h>

int main() {
    int i = 0 ;
    int j = 0 ; 
    int number = 0  ;
    
    printf( "Input : " ) ;
    scanf( "%d" , &number) ;
    i = number ;  
    while( i >= 0 ) {
        j = 2 ;
        while( j < i ) {
            if( i % j == 0 ) {
                break ;
            }
            j++ ;
        } 
        
        if( i == j ) {
            printf( "%d " , i ) ;
        } 
        i-- ;
    }
    return 0 ;
}//end function
