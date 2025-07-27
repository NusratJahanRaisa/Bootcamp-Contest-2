#include <stdio.h>
#include <math.h>

int main(){
    
    int a;
    scanf("%d",&a);
    
    if(a<1000){
       printf("%d\n",a); 
    }



    else if(a< pow(10,4)){
       
       printf("%d\n",a-(a%10)); 

    }




    else if(a< pow(10,5)){
       
       printf("%d\n",a-(a%100)); 
    }



    else if(a< pow(10,6)){

       printf("%d\n",a-(a%1000)); 
    }



    else if(a< pow(10,7)){
       
       printf("%d\n",a-(a%10000)); 
    }



    else if(a< pow(10,8)){
       
       printf("%d\n",a-(a%100000)); 
    }



    else if(a< pow(10,9)){
    
       printf("%d\n",a-(a%1000000)); 
    }
    
   
    return 0;
    
}