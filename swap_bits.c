#include <stdio.h>


int swapBits(int n, int p1, int p2)
{
    //left-shift 1 p1 and p2 times
    //and using XOR
    n ^= 1 << p1;
    n ^= 1 << p2;
    return n;
}
 
//Driver Code
int main()
{
    printf("Result = %d", swapBits(28, 0, 3));              //28 is num, 0 is postion 1 and 3 is position2, 0 and 3 to be swapped;
    return 0;
}


/// SWAP NIBBLES
#include <stdio.h>
 
unsigned char swapNibbles(unsigned char x)
{
    return ( (x & 0x0F)<<4 | (x & 0xF0)>>4 );
}
 
int main()
{
    unsigned char x = 100;
    printf("%u", swapNibbles(x));
    return 0;
}
