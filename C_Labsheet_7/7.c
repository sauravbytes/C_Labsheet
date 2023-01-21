// Write a program using structure to input rollno, name and percentage of several students and arrange
// them in descending order by percentage.

#include<stdio.h>
#include<conio.h>

struct student
{
    int rollno;
    float percentage;
    char name[25];
};

void swap(struct student* a, struct student* b)
{
    struct student temp = *a;
    *a = *b;
    *b = temp;
}
void sort(struct student arr[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i].percentage < arr[j].percentage)
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void main()
{
   int i,n;
   printf("Enter the number of student: ");
   scanf("%d",&n);
   struct student arr[n];
   for(i=0;i<n;i++)
   {
    printf("Enter the details of %d student.\n",i+1);
    printf("Enter the name: ");
    scanf("%s",arr[i].name);
    printf("Enter the rollno: ");
    scanf("%d",&arr[i].rollno);
    printf("Enter the percentage: ");
    scanf("%f",&arr[i].percentage);
   }
   sort(arr,n);
    printf("\nRollno\tName\tPercentage\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", arr[i].rollno, arr[i].name, arr[i].percentage);
    }
   //getch()
}