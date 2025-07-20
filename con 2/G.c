#include <stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);
    int total=0;

    int val1 = a/100;
    int rem1 = a%100;
    // printf("%d %d\n",val1,rem1);


    int val2 = rem1/10;
    int rem2 = rem1%10;
    
    int val3 = rem2;
    

    if(val1==1) total++;

    if(val2==1) total++;

    if(val3==1) total++;

    printf("%d\n",total);
    // printf("%d %d %d\n",val1,val2,val3);

    return 0;
    
}