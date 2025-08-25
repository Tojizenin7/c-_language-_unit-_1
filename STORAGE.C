#include<stdio.h>
#include<conio.h>
int main()
{
double bytes,kb,mb,gb;
clrscr();
printf("Enter the quantity in bytes:");
scanf("%1f",&bytes);

kb=bytes/1024.0;
mb=bytes/(1024.0*1024.0);
gb=bytes/(1024.0*1024.0*1024.0);

printf("\n %f bytes= %.21f kilobytes",bytes,kb);
printf("\n %f bytes= %.21f megabytes",bytes,mb);
printf("\n %f bytes= %.21f gigabytes",bytes,gb);

getch();
return 0;
}
