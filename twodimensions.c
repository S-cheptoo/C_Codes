// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[2][4]= {
        {3,4,5,3},
        {4,5,5,9}
    };
     int k,j;
  for(k=0;k<2;k++) {
    for(j=0;j<4;j++) {
    printf("%d ", arr[k][j]);
  }
    printf("\n");
  }
    return 0;
}