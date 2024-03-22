#include<stdio.h>
int sum(int arr[][7],int a){
    int sumans=0;
    for(int i=0;i<7;i++){
         sumans=sumans+arr[a][i];
    }
    return sumans;
}

void avgtemp(int arr[][7],int a){
    float avg=0.0;
    for(int i=0;i<a;i++){
        avg=(float)sum(arr,i)/7;
        printf("AVERAGE TEMPERATURE FOR CITY %d IS %.2f\n",i+1,avg);
    }
}

int main(){
    int a;
    printf("ENTER NUMBER OF CITIES :");
    scanf("%d",&a);
    int arr[a][7];
    for( int i=0;i<a;i++){
        for(int j=0;j<7;j++){
            printf("ENTER TEMPERATURE OF CITY %d for DAY %d:",i+1,j+1);
            scanf("%d",&arr[i][j]);
            }
         printf("\n"); 
    }
    avgtemp(arr,a);
    return 0;
}