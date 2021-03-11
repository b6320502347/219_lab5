#include<stdio.h>
int main(){
    int n,i,x=1;
    scanf("%d",&n);
    for(i=2;x<n;i++){
        if((i%2==0||i%3==0||i%5==0)&&i%7!=0){
            x++;
            }
        printf("%d %d\n",x,i);
    }
        if(x==1)
        printf("%d",x);
        else printf("%d",i-1);
}
