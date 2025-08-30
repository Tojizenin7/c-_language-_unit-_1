#include<stdio.h>
#include<conio.h>
int main()
{
float b,kb,mb,gb;
clrscr();

printf("Enter the quantity in bytes:");
scanf("%f",&b);

kb=b/1024.0;
mb=kb/1024.0;
gb=mb/1024.0;

printf("\n %f bytes= %f kb",b,kb);
printf("\n %f bytes= %f mb",b,mb);
printf("\n %f bytes= %f gb",b,gb);

getch();
return 0;
}
