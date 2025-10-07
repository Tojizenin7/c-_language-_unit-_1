#include<stdio.h>
#include<conio.h>
void main()
{
  int i;
  char books[3][50];
  char *ptr[3];
  printf("Enter names of 3 books(use '_' insted of space)");

  for(i=0;i<3;i++)
  {
     printf("\n Book %d:",i+1);
     scanf("%s",books[i]);
     ptr[i] = books[i];
  }

  printf("\n The names of the books are:");
  for(i=0;i<3;i++)
  {
    printf("\n Book %d : %s",i+1,ptr[i]);
  }
  getch();
}