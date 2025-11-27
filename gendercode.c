#include<stdio.h>
int main()
{
char gender;
printf("enter gender(m/f):");
scanf("%c",&gender);
if(gender=='m'||gender=='m')
printf("male\n");
else if(gender=='f'|| gender=='f')
printf("female\n");
else 
printf("invalid input\n");
    return 0;
}