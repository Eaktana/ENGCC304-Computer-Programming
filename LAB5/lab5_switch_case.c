#include <stdio.h>

int main() {
    int years = 0 ;
    printf( "Input years : " ) ;
    scanf( "%d" , &years ) ;
    switch(years % 4) {
        case 0 :  
            printf( "Feb = 29 days" ) ;
            break ;
        default :
            printf( "Feb = 28 days" ) ;
            break ;
    }//end switch
    
    return 0 ;
}//end function
