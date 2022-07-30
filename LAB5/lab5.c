#include <stdio.h>

int main() {
    int years = 0 ;
    printf( "Input years : " ) ;
    scanf( "%d" , &years ) ;
    printf( "Feb = " ) ;
    if( years % 4 == 0 ) {
        printf( "29 days" ) ;
    } else {
        printf( "28 days" ) ;
    }//end if

    return 0 ;
}//end function
