#include <stdio.h>
#include <string.h>

struct Employee {
    char Name[ 1000 ] ;
    float Salary ;
    int Duration ;
} typedef Emp ;
 
void choice( char[] ) ;
void identity( Emp[], int ) ;
void ShowOutput ( Emp[], int ) ;

int main() {
    char InputYorN[ 2 ] = "y\0" ;
    int n = 0 ;
    Emp x[ 1000 ] ;
    do {
        choice( InputYorN ) ;
        switch ( InputYorN[ 0 ] ) {
            case 'y' : 
                identity( x, n ) ; 
                n++ ;
                break;
            default:
                break;
        }
    } while ( InputYorN[ 0 ] == 'y') ;
    ShowOutput ( x, n ) ;
    return 0 ;
}//end function main
void choice ( char InputYorN[ 2 ] ) {
    printf( "Do you want to Enter Employee Information? (y/n) : " ) ;
    scanf( "%s", InputYorN ) ;
}
void identity ( Emp x[], int n ) {
    printf( "Employee Name : " ) ;
    scanf( "%s", &x[ n ].Name ) ;
    printf( "Salary (Bath/Month) : " ) ;
    scanf( "%f", &x[ n ].Salary ) ;
    printf( "Duration (Year) : " ) ;
    scanf( "%d", &x[ n ].Duration ) ;

}
void ShowOutput ( Emp x[], int n ) {
    int i = 0 ;
    int j = 0 ;
    float sum = 0 ;
    char Maxname[ 100 ] ; 
	float Maxsalary = -99999999 ; 
    int Maxduration = 0 ;
    while( i < n ) {
		sum = sum + x[ i ].Salary ; 
		i++ ;
	}
    printf( "\n" ) ;
	printf( "Average of Salary : %.2f Bath\n", sum/n ) ;
	printf( "Payment of every month : %.2f Bath\n", sum ) ;
	while ( j < n ) {
        switch ( x[ j ].Salary > Maxsalary ) {
        case 1 : 
            Maxsalary = x[ j ].Salary ;
			Maxduration = x[ j ].Duration ;
			strcpy( Maxname, x[ j ].Name ) ;
            break ;
        }
        j++ ;
    }
	printf( "** Most Salary in this business **\n" );
	printf( "Name : %s (%d Years)\n", Maxname, Maxduration) ;
	printf( "Salary : %.2f Bath", Maxsalary ) ;
}

