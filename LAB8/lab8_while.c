#include <stdio.h>

int main() {
    int size = 0 ;
    int position = 0 ;
    int i = 0 ;
	int j = 0 ;
	int k = 0 ;
	int l = 0 ;
    int X = 0 ;
    int array[ size ] ;
    int unique[ size ] ;
    //------------> input size
	printf( "Input Array Size : " );
    scanf( "%d", &size ) ;
    //------------> input array
    i = 0 ; 
	while( i < size ) {
    	printf( "Array[%d] : ", i ) ;
        scanf( "%d" , &array[i] ) ;
        i++ ;
    }//end while input array
    //------------> duplicate number
    j = 0 ; 
	while( j < size ) {
        k = 0 ; 
        while( k < size ) {
            if( array[j] == array[k] ) {
                X++ ;
            }
            k++ ;
        }
		if(X == 1) {
            unique[ position ] = array[j] ;
            position++ ;
        }//end if Unique number
		X = 0 ;
        j++ ;
    }//end while duplicate number
    //------------> show Unique number
    printf( "Unique =" ) ;
    l = 0 ;
	while( l < position ) {
        printf( " %d", unique[l] );
        l++ ;
    }//end while show Unique number
	return 0 ;
}//end function