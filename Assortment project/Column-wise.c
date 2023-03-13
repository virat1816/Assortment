#include <stdio.h>
int main(){
    int m,n,i,j,sum=0;
     printf("Enter the number of rows: ");
    scanf("%d",&m);
      printf("Enter the number of columns: ");
    scanf("%d",&n);
    
    int a[m][n];
  for (i=0; i<m; i++){
    for (j=0; j<n; j++){
      printf("Enter element a[%d][%d]: ", i,j);
      scanf("%d", &a[i][j]);
    }
  }
 	for (i=0; i<m; i++){
    for (j=0; j<n; j++){
    		printf("%d ",a[i][j]);
    }
    printf("\n");
 }
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<m;j++){
            sum+=a[j][i];
        }
        printf("Sum [%d] :%d\n",i,sum);
    }
    
    return 0;
}
