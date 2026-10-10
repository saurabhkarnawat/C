//Swap a Nibble 

#include <stdio.h>

int main() {

   unsigned char A = 0xAB;
   printf("Before Swappping: %x\n",A);

   unsigned char B = ((A & 0xF0)>>4) | ((A & 0x0F) << 4);

   printf("After Swapping : %x",B);

   return 0;
    
}