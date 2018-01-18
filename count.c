
#include<stdio.h>
void main()
{
int a,count=0;
scanf("%d",&a);
do
{
a=a%10;
++count;
}
printf("count=%d",count);
}
while(a>=1)
}
