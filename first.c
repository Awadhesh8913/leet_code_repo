#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    int x=0 ,y=0,flag=0;
    while (t-- > 0)
    {
    int x1,y1,ans=0,a=0,b=0;
    scanf("%d %d",&x1, &y1);
      a=pow((x1-x),2);
      b=pow((y1-y),2);
      ans=sqrt(a+b);
      

    }

    return 0;
}