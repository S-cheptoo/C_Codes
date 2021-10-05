#include <stdio.h>  
  
void  main()  
{  
    float arr[5]; 
    int j;  
       printf("Read and Print elements of an array:\n");
  
  
    printf("Enter the five elements in the array :\n");  
    for(j=0; j<5; j++)  
    {  
     printf("element %d : ",j);
        scanf("%f", &arr[j]);  
    }  
  
    printf("\nElements in array are: ");  
    for(j=0; j<5; j++)  
    {  
        printf("%f  ", arr[j]);  
    } 
    printf("\n"); 
}