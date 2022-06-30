#include<stdlib.h>
#include <stdio.h>
int main()
{
// Part 1
unsigned int x;
unsigned int* px= &x;
// Part 2
int* py = (int*)malloc(sizeof(int));
// Part 3
printf("Enter the unsigned int 0xaabbccdd in hexadecimal form : ");
scanf(" %x",&x);
// Part 4
printf("Enter the int 0x12345678 in hexadecimal form : ");
scanf(" %x",&*py);
// Part 5
unsigned char* pc;
int i;
//Part 6
printf("Value in x : %x \n",x);
printf("Address in px : %p \n",px);
printf("Value in *py : %x \n",*py);
printf("Address in py : %p \n",py);
// Part 7
// Ignore the warning and if your compiler has "build" option then use it
pc = (unsigned int*)&x;
for(i=0;i<4;i++)
{
printf("Value of pc : %p \n",pc);
printf("Value of *pc : %x \n",*pc);
pc++;
}
// Part 8
pc = &px;
for(i=0;i<4;i++)
{
printf("Value of pc + %d : %p \n",i,(pc+i));
printf("Value of *(pc+ %d ): %x \n",i,*(pc+i));
}
// Part 9
pc = (int*)&*py;
for(i=0;i<4;i++)
{
printf("Value of pc : %p \n",pc);
printf("Value of *pc : %x \n",*pc);
pc++;
}
pc = &py;
for(i=0;i<4;i++)
{
printf("Value of pc + %d : %p \n",i,(pc+i));
printf("Value of *(pc+ %d ) : %x \n",i,*(pc+i));
}
// Part 10
free(py);
return 0;
}
