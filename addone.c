
#include<stdio.h>
int get_input()
{
int x;
printf("Enter first number\n");
scanf("%d",&x);
return x;
}
int add_one(int x)
{
int y;
y=x+1;
return y;
}
void output(int x, int y)
{
printf("%d + 1 is %d",x,y);
}
int main(void)
{
int x=get_input();
int y=add_one(x);
output(x,y);
}








