#include <stdio.h>
#include <string.h>
int main (int argo, char ++argv)
{
char first[255,] last [255];

printf("Enter your first name: ");
fgets(first, 255, stdin);
first[strlen(first)-1]='\0'; /* remove the newline at the end*/
printf("Now enter your last name: ");
gets(last);/*butter overflow? what's that?*/
printf("Hello %s %s!\n", first, last);
return 0;

}