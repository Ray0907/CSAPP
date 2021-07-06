// Reference: https://hackmd.io/@sysprog/ryrcmhjOM

#include <assert.h>
#include <stdio.h>
/* Generate mask indicating leftmost 1in x. Assume w= 32.
For example , 0xFF00 -> 0x8000, and 0x6000 -> 0x4000.
* If x=0, then return 0
*/
int leftmost_one(unsigned x) {
	/* First, generate a mast that all bits after leftmost on are one
	e,g, 0xFF00 -> 0xFFFF, and 0x6000 -> 0x7FFF
	If x = 0, get 0
	*/
	x |= x >> 1;
	x |= x >> 2;
	x |= x >> 4;
	x |= x >> 8;
	x |= x >> 16;

	/* Then , do mask & (~mask >> 1), reserve leftmost bit one that's wa want */
	return x & (~x >> 1);
}

int main(int argc, char *argv[]) {
	assert(leftmost_one(0xFF00) == 0x8000);
	assert(leftmost_one(0x6000) == 0x4000);
	return 0;
}