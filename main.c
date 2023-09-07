#include <stdio.h>
#include <string.h>
int main (int argo, char ++argv)
{
printf("Enter your name: ");
fgets(name, 255, stdin);
printf("length = %d\n", strlen(name));/* debug line*/
name[strlen(name)-1] ='\0';/*remove the newline at the and*/

printf("Hello %s!\n", name);
return 0;
}