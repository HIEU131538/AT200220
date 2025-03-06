#include<math.h>
#include<stdio.h>

int main(){
    int n;scanf("%d",&n);
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            printf("%d ",i);
            if(i!=(n/i))
            printf("%d ",n/i);
        }
    }
    return 0;
}
