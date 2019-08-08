#include<stdio.h>
#include<conio.h>

int main()
{
int x,dif,c=0;
float p;
scanf("%d%f",&x,&p);
while(x>=1){
  c=c+x;
  dif=x*(p/100);
  if(dif==0)
    break;
  x=x-dif;
}
printf("%d", c);
return 0;
}
