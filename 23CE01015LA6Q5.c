#include<stdio.h>
int main(){
    int a,b;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&a);
    printf("ENTER NUMBER OF COLUMNS:");
    scanf("%d",&b);
    int arr[a][b],brr[b][a];
    for( int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("ENTER %d,%d element:",i+1,j+1);
            scanf("%d",&arr[i][j]);
            }
        printf("\n"); 
    }

    printf("\nINPUT MATRIX IS :\n");

    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            brr[j][i]=arr[i][j];
        }
    } 
    printf("\nTRANSPOSED MATRIX IS :\n");

    
    for (int i=0;i<b;i++){
        for (int j=0;j<a;j++){
            printf("%d",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}    