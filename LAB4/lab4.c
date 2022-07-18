#include <stdio.h>
#include <string.h>

int main() {
	char  Employees_ID[]     = ""  ;
	int   Working_hrs        = 0    ;
	int   salary_amount      = 0    ;

	while(1) {
		printf ("Input the Employees ID (Max. 10 chars) :") ;
		scanf ("%s",Employees_ID) ;
		if ( strlen (Employees_ID ) <= 10 ) break ;
	}//end while
	
	printf ("Input the working hrs : ") ;
	scanf ("%d", &Working_hrs) ;
	printf (" Salary ammount/hr (Bath) : ") ;
	scanf ("%d", &salary_amount) ;
	
	printf ("----\n") ;
	printf ("Eecepted Output : \n") ;
	printf ("Employees ID = %s\n", Employees_ID) ;
	printf ("Ammount/day = %.2f Bath(s)", (float)(Working_hrs  * salary_amount)) ;

	return 0 ;
}//end function

