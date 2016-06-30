#include<stdio.h>
#include<conio.h>
 main()
{
int n,i,j,k;
printf("Enter number of rows in odd number");
scanf("%d",&n);
for(i=0;i<=(n/2);i++)
{
for(j=0;j<=(n/2)-i;j++)
{
print(" ");
}
for(k=0;k<(2*i)+1;k++)
{
printf("*");
}
printf("\n");
}
for(i=0;i<n/2;i++)
{
for(j=0;j<i+1;j++)
{
printf(" ");
}
for(k=0;k<n-2-(2*i);k++)
{
printf("*");
}
printf("\n");
}
getch();
}
