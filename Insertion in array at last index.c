#include<stdio.h>
int main(){
    int n, arr[100],a;
    
    scanf("%d",&n);
    
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&a);
    arr[n]=a;
    
    for (int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}
