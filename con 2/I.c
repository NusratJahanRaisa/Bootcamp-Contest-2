#include <stdio.h>
int main(){
    
    int n,a;
    scanf("%d %d",&n,&a);

    int  rem = n%500;

    if(rem<=a){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}