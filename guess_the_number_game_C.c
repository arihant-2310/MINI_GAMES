#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ int r,num,i;
  srand(time(NULL));
  r= rand()%30+1;
  printf("\n\n\t\tGUESS THE NUMBER");
  printf("\nenter the number dude(1-30):");
  scanf("\n%d",&num);
  i=1;
  while(num!=r)
  { i++;
    
      if(num>r)
        { printf("\n\t\tH_I_G_H  N_U_M_B_E_R......");
          printf("\n\nTry Another Number:");
          scanf("%d",&num);
        }
   
      if(num<r)
        {  printf("\n\t\tL_O_W  N_U_M_B_E_R!!!!");
           printf("\n\nTry Another Number=");
           scanf("%d",&num);
        }
      if(num==r)
      { printf("\n\t\t|||||Well Done|||||");
        printf("\n\t\t*******************");
        printf("\n\t.....you won the game in %d tries......\n",i);
      }
  }
  return 0;
}
