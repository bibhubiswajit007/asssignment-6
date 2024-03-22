#include<stdio.h>

int prime(int a){
        for (int j=2;j<a;j++){
            if (a%j==0) {
                return 0;
                break;
            }
            }
    
return 1 ;

}
int main(){
    int a,b;
    printf("ENTER LOWER LIMIT :");
    scanf("%d",&a);
    printf("ENTER UPPER LIMIT :");
    scanf("%d",&b);
    for (int i=a;i<=b;i++){
        if (prime(i)==1) printf("%d\n",i);
    }
    return 0;

}