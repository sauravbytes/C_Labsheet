//Create a file to store following ten numbers: -2, -8. -99. -100. 101. 20, 21, -9, 1000, 10.

#include<stdio.h>
void main()
{
    FILE *fp;
    int numbers [] = {-2,-8,-99,-100,101,20,21,-9,1000,10};
    int i;

    fp = fopen("numbers.txt","w");
    
    for(i=0;i<10;i++)
    {
        fprintf(fp,"%d\t",numbers[i]);
        
    }

    fclose(fp);
}