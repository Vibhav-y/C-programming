#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int mat1[size][size], mat2[size][size], mat3[size][size];
    
    for(int i=0;i<size;i++){
        for(int a=0;a<size;a++){
            scanf("%d",&mat1[i][a]);
        }
    }
    
    for(int i=0;i<size;i++){
        for(int a=0;a<size;a++){
            scanf("%d",&mat2[i][a]);
        }
    }
    
    for(int i=0;i<size;i++){
        for(int a=0;a<size;a++){
            mat3[i][a]=0;
            for (int k=0;k<size;k++){
                mat3[i][a]+=mat1[i][k]*mat2[k][a];
            }
        }
    }
    
    for (int i=0;i<size;i++){
        for(int a=0;a<size;a++){
            printf("%d ",mat3[i][a]);
        }
        printf("\n");
    }
    
}
