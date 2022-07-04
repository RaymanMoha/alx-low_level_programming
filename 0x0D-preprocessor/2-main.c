#include <stdio.h>

/**
 * main -  prints the name of the file it was compiled from
 * return - int
 */

int main(void)
{
	printf("%s\n", __file__);
	return(0);
}
