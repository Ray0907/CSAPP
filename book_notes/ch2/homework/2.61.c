#include <stdio.h>

int main(int argc, char const *argv[]) {
	int x, y;
	int sizeof_int = sizeof(int);

	x = ~0;
	y = 0xFFFFFF00;
	printf("%d\t%d\n", !(~x), !(~y));

	x = 0;
	y = 0x000000FF;
	printf("%d\t%d\n", !x, !y);

	x = 0x000000FF;
	y = 0x0000000F;
	printf("%d\t%d\n", !((x ^ 0xFF)<<((sizeof_int-1)<<3)), !((y ^ 0xFF)<<((sizeof_int-1)<<3)));

	x = 0x00FFFFFF;
	y = 0x0FFFFFFF;
	printf("%d\t%d\n", !(x >> ((sizeof_int-1) << 3)), !(y >> ((sizeof_int-1) << 3)));
	return 0;
}