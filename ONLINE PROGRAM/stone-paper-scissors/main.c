#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int
Game (char user, char comp)
/*If Computer win return -1
  If User win return 1
  If Draw return 0*/
{
  //Passes `11,`12,`13,`21,`22,23,`31,32,`33.
  //DRAW 
  if (user == comp)
    return 0;
  if (user == '1' && comp == '2')	//COMPUTER WIN 
    return -1;
  else if (user == '2' && comp == '1')	//USER WIN 
    return 1;
  else if (user == '3' && comp == '1')
    return -1;
  else if (user == '1' && comp == '3')
    return 1;
  else if (user == '2' && comp == '3')
    return -1;
  else if (user == '3' && comp == '2')
    return 1;
}

void
main ()
{
  char user, com;
  srand (time (0));
  int num = rand () % 100 + 1;
  printf ("Choose\n1 for stone\n2 for paper\n3 for scissor : ");
  scanf("%c",&user);// (user);
  if (num <= 33)
    {
      com = '1';
    }
  else if (num > 33 && num <= 66)
    {
      com = '2';
    }
  else
    {
      com = '3';
    }
  //printf ("%s", com);
  int a = Game (user, com);
  if (a == 1)
    printf
      ("Congratulation You Win\ncomputer choose: %c\n\tAnd\nYou choose: %c",
       com, user);
  else if (a == -1)
    printf
      ("Better luck Next time\ncomputer choose: %c\n\tAnd\nYou choose: %c",
       com, user);
  else
    printf ("Match Draw\ncomputer choose: %c\n\tAnd\nYou choose: %c", com,
	    user);
}
