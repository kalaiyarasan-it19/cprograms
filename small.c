#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter the values:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(d<a&&d<b&&d<c)
{
printf("smallest num is %d ",d);
}
else if(c<a&&c<b)
{
printf("smallest num is %d",c);
}
else if(b<a)
{
printf("smallest num is %d",b);
}
else
{
printf("smallest num is %d",a);
}
}
