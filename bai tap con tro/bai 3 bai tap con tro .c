#include<stdio.h>


int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    int max=*a;
    int min=*a;
    for(int i=0;i<n;i++){
        if(*(a+i)<min)min=*(a+i);
        if(*(a+i)>max)max=*(a+i);
    }
    printf("SO LON NHAT LA : %d\n",max);
    printf("SO BE NHAT LA : %d\n",min);
    return 0;
}
