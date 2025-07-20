#include <stdio.h>
#include <math.h>

int main(){
    
    long long a;
    scanf("%lld",&a);
    
    if(a<1000){
       printf("%lld\n",a); 
    }



    else if(a< pow(10,4)){
       
       double ans = a / 10;
       printf("%.0lf0\n",ans); 

    }




    else if(a< pow(10,5)){
       
       double ans = a / 100;

    

       printf("%.0lf00\n",ans); 
    }



    else if(a< pow(10,6)){
       
       double ans = a / 1000;

    
       printf("%.0lf000\n",ans); 
    }



    else if(a< pow(10,7)){
       
       double ans = a / 10000;

    

       printf("%.0lf0000\n",ans); 
    }



    else if(a< pow(10,8)){
       
       double ans = a / 100000;

       printf("%.0lf00000\n",ans); 
    }



    else if(a< pow(10,9)){
       
       double ans = a / 1000000;

    

       printf("%.0lf000000\n",ans); 
    }
    
   
    return 0;
    
}