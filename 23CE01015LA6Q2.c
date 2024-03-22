#include<stdio.h>



int sum( int arr[],int b){
    int sumres=0;
    for (int i=0;i<b;i++){
        sumres+=arr[i];
    } 
    return sumres;

}

float avg (int arr[],int b){
    float avgans;
    avgans=sum(arr, b)/b;
return avgans;
}

void numabavg(int arr[],int b){
    int num=avg(arr,b);
    for (int i=0;i<b;i++){
        if ((float)arr[i]>num) printf("%d\t",arr[i]);
    }  
}


int main(){
    int a;
    printf("ENTER SIZE OF ARRAY :");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        printf("ENTER %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    numabavg(arr,a);
    // printf("\n%f",avg(arr,a));
    return 0;

}