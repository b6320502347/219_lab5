#include<stdio.h>
int main(){
    int n,m,j,k,i,x;
    scanf("%d",&n);
    if(n%2==0)
        m=n-1;
    else m=n;
    x=m/2;
        for(k=0,i=1;i<=(n+1)/2;i++,k+=2){
        for(j=1;j<=m;j++){
            if(j!=x+i&&j!=x+i-k)
            printf("_");
            else printf("*");
            }
            printf("\n");
            }
        for(k=k-2,i=(n+1)/2;i>=1;i--,k-=2){
        for(j=m;j>=1;j--){
             if(n%2!=0&&i==(n+1)/2)
            break;
            if(j!=x+i&&j!=x+i-k)
            printf("_");
            else printf("*");
            }
         if(n%2!=0&&i==(n+1)/2);
         else
            printf("\n");
}

}
