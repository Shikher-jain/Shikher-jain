//PASS BY VALUE
/*
#include <stdio.h>
int string (char s1[20], char s2[20])
{
  if (s1[20] == s2[20])
    return 1;
  else
  return 0;
}
int main ()
{
  char s1[20];
  char s2[20];
  printf ("Enter String 1:\n");
  gets(s1);
  printf("Enter String 2: \n");
  gets(s2);
  int s = string (s1, s2);
  if(s==1)
  printf("%s and %s are equal",s1,s2);
  else
  printf("%s and %s are not equal",s1,s1);
  return 0;
}
*/
//PASS BY REFERENCE  
#include <stdio.h>
int string (char *s1[20], char *s2[20])
{
    int i=0;
    while(i!='\0'){
  if (s1[i] == s2[i])
  i++;
    return 1;}
 
  return 0;
}
int main ()
{
  char s1[20];
  char s2[20];
  printf ("Enter String 1:\n");
  gets(s1);
  printf("Enter String 2: \n");
  gets(s1);
  int s = string (&s1,&s2);
  if(s==1)
  printf("%s and %s are equal",s1,s2);
  else
  printf("%s and %s are not equal",s1,s1);
  return 0;
}




