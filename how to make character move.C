#include <stdio.h>
#include <conio.h>
main(void)
{
int x;
int y;
char a;
x=1;
y=1;
clrscr();
while(1)
{
printf("*");
a=getch();
clrscr();
if((a=='6')||(a=='4')||(a=='2')||(a=='8'))
{
if(a=='6')
x++;
if(a=='4')
if(x>1)
x--;
if(a=='2')
y++;
if(a=='8')
if(y>1)
y--;
}
if(a=='0')
break;

gotoxy(x,y);
}
return 0;
}
