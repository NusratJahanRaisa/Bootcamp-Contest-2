#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    
    
    if(a>b && a-b>3 || a<b && b-a>2){
        printf("No\n"); //have to use elevator
    }
    else  printf("Yes\n"); //can use stairs
    
    return 0;
}