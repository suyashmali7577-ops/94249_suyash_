#include <stdio.h>
#include <stdint.h>
void printBinary(uint8_t value)
{
 for(int i=7;i>=0;i--)
    {
        printf("%d",value>>i)&1;
    }
}
int main(){
    uint8_t reg=0x08;
    if("reg|1<<3")
    {
        printf("the bit 3 is clear");
    }
    else
    {
        printf("the bit is clear");
    }
}
