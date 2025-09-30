#include<stdio.h>
#include<conio.h>

void main()
{
  int amt,i;
  int notes[]={500,200,100,50,20,10,5,2,1};
  int notecount[9]={0};
  int totalnotes = 0;
  clrscr();

  printf("Enter amount to withdraw:");
  scanf("%d",&amt);

  for(i=0;i<9;i++)
  {
    if(amt>=notes[i])
    {
      notecount[i]=amt/notes[i];
      amt=amt%notes[i];
      totalnotes+=notecount[i];
    }
  }

  printf("\n Minimum notes required: ");
  for(i=0;i<9;i++)
  {
    if(notecount[i]>0)
    {
    printf("\n %d note(s) of Rs. %d",notecount[i],notes[i]);
    }
  }

  printf("\n Total number of notes = %d",totalnotes);
  getch();
}