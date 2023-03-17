#include <stdio.h>
/**
* Our program is the print an out put as the examples
* NB: Warings are not allowed
* we will Return 0
*/

int main(void)
{ 
	char c;
	int i;
	long li;
	float f;
	long long lli;

	printf("size of a char: %ld byte(s)\n", sizeof(c));
	rintprintf(“size of a int: %ld byte(s)\n”, sizeof(i));
	printf(“size of a long: %ld byte(s)\n”, sizeof(li));
	printf(“size of a long long: %ld byte(s)\n”, sizeof(lli));
	printf(“size of a float: %ld byte(s)\n”, sizeof(f));
	return(0);
}
