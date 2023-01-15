/*WAP that initialize ten numbers and search the key (a number given by the user)from the list .If the key is
found then it displays the index(subscript of an array) and frequency of such number otherwise it displays
the proper message i.e. "key is not found".
*/

#include <stdio.h>
#include <conio.h>

void main()
{ 
    //initializing array
    int arr[10]={2,4,6,8,10,2,9,10,15,18};
    int i,key,count=0;
    
    
    //asking user for key
    
    printf("Enter number you want to search: ");
    scanf("%d",&key);
    
    //searching key in array
    
    
    for(i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
         printf("%d is found on index: ",key);   
         printf("%d\n",i);
         count++;
        }
    }
    if(count>0)
    { 
        printf("\n%d is found %d times in array",key,count);
    }
    else
    {
        printf("Key is not found in array");
    }
    
    getch();
}
