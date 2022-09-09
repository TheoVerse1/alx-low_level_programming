#include <stdio.h>

int main(void)
{
	char n;
	int y;
	long int c;
	long long int b;
	float f;

	printf("Size of a char:%d bytes(s)\n", sizeof(n));
	printf("Size of an int:%d bytes(s)\n", sizeof(y));
	printf("Size of a long int:%d byte(s)\n", sizeof(c));
	printf("Size of a long long int:%d byte(s)\n", sizeof(b));
	printf("Size of a float:%d byte(s)\n", sizeof(f));
	return(0)
}
