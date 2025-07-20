#include <stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);
    
    if(a<3){
      printf("0\n");
      return 0;
    }
    int groups = a/3;

    printf("%d\n",groups);
   
    return 0;
    
}