// Online C compiler to run C program online
#include <stdio.h>  
  
void  main()  
{  
    char names[5]; 
    int j;  
       printf("Read and Print elements of an array:\n");
  
  
    printf("Enter the names in the array :\n");  
    for(j=0; j<5; j++)  
    {  
     printf("element %d : ",j);
        scanf("%s", &names[j]);  
    }  
  
    printf("\nElements in array are: ");  
    for(j=0; j<5; j++)  
    {  
        printf("%s", names[j]);  
    } 
    printf("\n"); 
}