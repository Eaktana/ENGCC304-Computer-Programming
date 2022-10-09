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
	for( i = 0 ; i < size ; i++ ) {
    	printf( "Array[%d] : ", i ) ;
        scanf( "%d" , &array[i] ) ;
    }//end for input array
    //------------> duplicate number
	for( j = 0 ; j < size ; j++ ) {
        for( k = 0 ; k < size ; k++ ) {
            if( array[j] == array[k] ) {
                X++ ;
            }
        }
		if(X == 1) {
            unique[ position ] = array[j] ;
            position++ ;
        }//end if Unique number
		X = 0 ;
    }//end for duplicate number
    //------------> show Unique number
    printf( "Unique =" ) ;
	for( l = 0 ; l < position ; l++ ) {
        printf( " %d", unique[l] );
    }//end for show Unique number
	return 0 ;
}//end function