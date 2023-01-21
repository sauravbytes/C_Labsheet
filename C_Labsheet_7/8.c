// Write a program using structure to input idno, name and position of several employees and arrange them in alphabetical order by name.

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee
{
    int idno;
    char name[30],position[30];
};

void swap(struct employee* a, struct employee* b)
{
    struct employee temp = *a;
    *a = *b;
    *b = temp;
}
void sort(struct employee arr[], int n)
{
    int i,j;
    char temp[30];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(arr[i].name,arr[j].name)>0)
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
void main()
{
   int i,n;
   printf("Enter the number of employees: ");
   scanf("%d",&n);
   struct employee arr[n];
   for(i=0;i<n;i++)
   {
    printf("Enter the details of %d employee.\n",i+1);
    printf("Enter the id of employee: ");
    scanf("%d",&arr[i].idno);
    printf("Enter the name of employee: ");
    scanf("%s",arr[i].name);
    printf("Enter the positon of employee: ");
    scanf("%s",arr[i].position);
   }
   sort(arr,n);
   printf("\nIdno\tName\tPostiton\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%s\n", arr[i].idno, arr[i].name, arr[i].position);
    }
   //getch()
}