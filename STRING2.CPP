#include <stdio.h>
#include <conio.h>
void main()
{
int i;char str[5];
printf("enter the string");
scanf("%s",&str[i]);
i=0;
while(str[i]!='\0')
{
if(str[i]>=97&&str[i]<=123)
{
str[i]=str[i]-32;
printf("%c",str[i]);
i++;
}
else{
printf("%c",str[i]);
i++;
}
}
}


