#include <stdio.h>
#include <conio.h>
int main()
{
int arr[5],i,j,temporary;
printf("\n enter elements in the array");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
printf("the original array \n");
for(i=0;i<5;i++)
{
printf("%d",arr[i]);
}
for(i=0;i<5;i++)
{
for(j=0;j<4-i;j++) 
{
if(arr[j]<arr[j+1])
{ 
temporary=arr[j+1];
arr[j+1]=arr[j]; 
arr[j]=temporary;  
}
}
printf("[%d]",arr[j]);
}
return 0;
}

