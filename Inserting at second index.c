#include <stdio.h>
int main() {
    // Read input
    int a;
    scanf("%d",&a);
    int arr[a+1]={0};
    for (int i =0; i<a;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=a;i>=1;i--){
        arr[i+1]=arr[i];
    }
    int add;
    scanf("%d",&add);
    arr[1]=add;
    
    for(int i=0;i<=a;i++){
        printf("%d ",arr[i]);
    }
}
