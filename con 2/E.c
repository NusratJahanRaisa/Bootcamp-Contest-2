#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char a,b,e,d;
    scanf("%c %c %c %c",&a,&b,&e,&d);
    

    int min1 = abs ((a-'A')- (b-'A'));
    int min2 = abs ((e-'A')- (d-'A'));

    // printf("%d %d",min1,min2);
    

    if(min1>2){
        min1 = 5-min1;
    }
    if(min2>2){
        min2 = 5-min2;
    }

    if(min1==min2){
       printf("Yes\n"); 
    }else{
        printf("No\n");
    }


    return 0;
    
}