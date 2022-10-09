#include <stdio.h>
#include <string.h>

int main() {
    int i , a , n ;
    char Message[1000] ;
    //----------> Input string
    printf( "Input : " ) ;
    gets(Message) ;
    //----------> นับจำนวนตัวอักขระ
    a = strlen(Message) ;
    char Re_str[a] ;
    for( i = 0 ; i <= a - 1 ; i++ ) {
        Re_str[i] = Message[a - 1 - i] ;
    }//end for
    Re_str[ a ] = '\0' ;
    printf( "Result : %s" , Re_str);
    return 0 ;
}//end function