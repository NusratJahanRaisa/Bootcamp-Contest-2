#include <stdio.h>
int main(){
    
    int a,b;
    scanf("%d %d",&a,&b);
    
    long long p = a*b;

    if(p%2==0){
        printf("Even\n");
    }

    else{
        printf("Odd\n");
    }


    return 0;
}