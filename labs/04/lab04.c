/*  Programmer: Sheikh Naveed Azeemi
     Roll No: 23K-0003
    Date: 12-09-2023
Discription: 2. Print the pattern for any number of n
*/
//--include files--//
#include<stdio.h>
#include<math.h>
int main(){
int n;
int i=0;
char ch='*';
printf("Enter the value for how much time you want the pattern printed: ");
scanf("%d",&n);
while(i<n)

{ 
int z=0;
i++;

while(z<n)
{
z++;
 printf("*");

}printf("\n");
}
return 0;

}//end main