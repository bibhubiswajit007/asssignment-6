#include<stdio.h>
int main(){
    int arr1[]={1,2,3,4,5,6},arr2[]={1,2,6};
    int a,b;
    a=(sizeof(arr1)/4);
    b=(sizeof(arr2)/4);
    int swas,count=0;
    if (a>=b){
        
        for (int i=0;i<b;i++){
            swas=0;
            for (int j=0;j<a;j++){
            if(arr2[i]==arr1[j]) {
                swas=1;
                count++;
                break;
                }
            }
        if (swas==0) {
            printf("arr2[] is not a subset of arr1[]");
            break;
        }
        if(count==b){
            printf("arr2[] is a subset of arr1[]");
        }
        }
    }
    if (a<b){
        for (int i=0;i<a;i++){
            swas=0;
            for (int j=0;j<b;j++){
            if(arr1[i]==arr2[j]) {
                swas=1;
                count++;
                break;
                }
            }

        if (swas==0) {printf("arr1[] is not a subset of arr2[]");
        break;
        }
        }
        if(count==a) printf("arr1[] is a subset of arr2[]");
    
    
    }
    return 0;
}