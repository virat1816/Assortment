#include <stdio.h>

int main()
{
    int n,i,j,sum=0;
    printf("Enter size:");
    scanf("%d",&n);
    
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter Elments[%d][%d] : ",i,j);
            scanf("  %d",&a[i][j]);
            
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d",a[i][j]);
            
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                sum+=a[i][j];
            }
        }
        printf("Sum:%d\n",sum);
    }
    
    return 0;
}




