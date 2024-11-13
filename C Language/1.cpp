#include<stdio.h>
int main()
{
  int a, b, c, big;
printf("enter any three numbers: \n");
scanf("%d%d%d",&a, &b, &c);
big = a;
if(b>big)
{
big = b;
}
if(c>big)
{
big = c;
}
printf("Largest of three number is : %d" , big);
return 0;
}
