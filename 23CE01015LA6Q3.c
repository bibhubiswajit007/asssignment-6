#include<stdio.h>
void rev(int arr[],int a,int b){
    if (a>=b) return ;
    int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    rev(arr,a+1,b-1);

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
    for (int i=0;i<a;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    rev(arr,0,a-1);

    for (int i=0;i<a;i++){
        printf("%d\t",arr[i]);
    }
    

    return 0;
}