#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Birthday {
int Number ;
char Name[ 100 ] ;
int Year ;
int Month ;
int Day ;
} typedef BD ;

void Calldata( BD[], int * ) ;
void Outputdata( BD[], int ) ;

int main() {
    BD A[ 100 ] ;
    int numpeople = 0 ;
    Calldata( A, &numpeople ) ;
    Outputdata( A, numpeople ) ;
    return 0 ;
}//end function

void Calldata( BD A[], int *numpeople ) {
    FILE *readfile ;
    readfile = fopen( "a.txt","r" ) ;
    if( readfile == NULL ) {
        printf( " can not find data " ) ;
        exit( 0 ) ;
    }
    fscanf( readfile, "%s\t%s\t%s\n",A[0].Name, A[0].Name, A[0].Name ) ;
    strcpy( A[0].Name, "\0" ) ;
    for( int i = 0 ; i < 33 ; i++ ) {
        if( fscanf( readfile, "%d\t%s\t\t%d-%d-%d\n", &A[i].Number, A[i].Name, &A[i].Year, &A[i].Month, &A[i].Day ) != EOF ){
            *numpeople = *numpeople + 1 ;
        } else {
            break;
        }
    }
    fclose( readfile ) ;
}

void Outputdata( BD A[], int numpeople ) {
    int numday[100] ;
    int Highage = -99999999 ;
    char *NHigeage ;
    int Lowage = 999999999 ;
    char *NLowage ;
    for( int i = 0 ; i < numpeople ; i++ ) {
        numday[i] = ( 2018 - A[i].Year ) *365 + ( 6 - A[i].Month ) *30 + 21 - A[i].Day ;
        printf( "%s %d Years, %d Months\n",A[i].Name, numday[i] / 365, (numday[i] % 365) / 30 ) ;   
    }
    for( int j = 0 ; j < numpeople ; j++ ) {
        if( numday[j] > Highage ) {
            Highage = numday[j] ;
            NHigeage = A[j].Name ;
        }
        if( numday[j] < Lowage ) {
            Lowage = numday[j] ;
            NLowage = A[j].Name ;
        }
    }  
    printf( "\nMax : %s [%d Years, %d Months] \n",NHigeage, Highage / 365, (Highage % 365) / 30 ) ;
    printf( "Min : %s [%d Years, %d Months] ",NLowage, Lowage / 365, (Lowage % 365) / 30 ) ;
}
