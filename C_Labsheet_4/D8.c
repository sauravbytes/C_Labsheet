/*WAP to input marks obtained in C programming by 65 students
and display the highest and lowest marks
*/
#include<stdio.h>
void main()
{
 int arr[5],i,high_marks,low_marks;
 //clrscr();

 //asking user to enter marks
 printf("Enter marks of 65 students\n");
 for(i=0;i<65;i++)
  scanf("%d",&arr[i]);

 //finding highest and lowest marks
 high_marks=arr[0];
 low_marks=arr[0];

 for(i=0;i<65;i++)
 {
  high_marks=(arr[i]>high_marks)?arr[i]:high_marks;
  low_marks=(arr[i]<low_marks)?arr[i]:low_marks;
 }
 printf("Highest Marks: %d\nLowest Marks%d",high_marks,low_marks);
 //getch();

}
