#include<math.h>
#include<stdio.h>

void nhiphan(int n){
    if(n<2)printf("%d",n);
    else{
        nhiphan(n/2);
        printf("%d",n%2);
    }
}

void thapphan(int n){
    if(n<10)printf("%d",n);
    else{
        thapphan(n/10);
        printf("%d",n%10);
    }
}

void thaplucphan(int n){
    if(n<16){
        if(n<10)printf("%d",n);
        else printf("%c",55+n);
    }
    else{
        thaplucphan(n/16);
        if((n%16)<10)printf("%d",n%16);
        else printf("%c",55+(n%16));

    }
}

int main(){
    int n;scanf("%d",&n);
    nhiphan(n);
    printf("\n");
    thapphan(n);
    printf("\n");
    thaplucphan(n);
    return 0;

}

