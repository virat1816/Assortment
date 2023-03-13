#include <stdio.h>
int main(){
    int m,n,i,j,sum=0;
   printf("Enter the number of rows: ");
  scanf("%d", &m);
  printf("Enter the number of columns: ");
  scanf("%d", &n);
    
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter Elments[%d][%d] :  ",i,j);
            scanf("%d",&a[i][j]);            
        }
    }    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);            
        }
        printf("\n");
    }    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                sum+= a[i][n-i-1];
            }
        }
        printf("Sum:%d\n",sum);
    }
    
    return 0;
}

