#include <stdio.h>
int main(){
    
    int a,b;
    scanf("%d %d",&a,&b);

    if(a<b && a+2>=b){
        printf("Yes\n");
    }
    else if(a>b && a-3<=b){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }


    return 0;
}