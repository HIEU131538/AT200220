#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m;scanf("%d%d",&n,&m);
    int a[n];
    int b[m];
    int c[m+n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)scanf("%d",&b[i]);
    int i=0,j=0,u=0;
    while(i<n&&j<m){
        if(a[i]<=b[j]){
            c[u++]=a[i++];
        }
        else{
            c[u++]=b[j++];
        }
    }
    while(i<n){
        c[u++]=a[i++];
    }
    while(j<m){
        c[u++]=b[j++];
    }
    for(int i=0;i<m+n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
