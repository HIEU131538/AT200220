#include<math.h>
#include<stdio.h>

int cnt[10000001]={0};

int main(){
    int n;scanf("%d",&n);
    int x;scanf("%d",&x);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int min=1e9,max=-1e9;
    int posmin=1,posmax=1;
    for(int i=0;i<n;i++){
        max=fmax(max,a[i]);
    }
    for(int i=0;i<n;i++){
        min=fmin(min,a[i]);
    }
    printf("KET QUA BAI 4\n");
    for(int i=0;i<n;i++){
        if(a[i]==max){
            printf("%d %d\n",a[i],i);
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==min){
            printf("%d %d\n",a[i],i);
            break;
        }
    }

    for(int i=0;i<n;i++){
        ++cnt[a[i]];
    }
    printf("KET QUA BAI 5\n");
    if(cnt[x]==0)printf("NO");
    else printf("%d",cnt[x]);
}
