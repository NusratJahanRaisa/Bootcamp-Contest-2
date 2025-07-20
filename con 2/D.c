#include <stdio.h>
int main(){
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int arr[3] = {a,b,c};
    for(int i=0;i<=2;i++){
        for(int j=i+1;j<=2;j++){
            if(arr[i] > arr[j]){         
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        } 
    }

    printf("%d %d %d\n",arr[0],arr[1],arr[2]);

    return 0;
    
}