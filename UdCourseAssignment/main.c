#include <stdio.h>
#include <stdlib.h>
#define X 5
void printMatrix(int matriX[X][X]){
    for(int i=0;i<X;i++){
        for(int j=0;j<X;j++){
            printf("%d  ",matriX[i][j]);
        }
        printf("\n");
    }
}
void symmetrical(int matriX[X][X],int* ptr){
    *ptr=1;
    for(int i=0;i<X;i++){
        for(int j=i;j<X;j++){
            if(matriX[i][j]!=matriX[j][i]){
                *ptr=0;
            }
        }
    }
}
void diagonal(int matriX[X][X],int* ptr){
    *ptr=1;
    for(int i=0;i<X;i++){
        for(int j=0;j<X;j++){
            if(i!=j&&matriX[i][j]!=0){
                *ptr=0;
            }
        }
    }
}
int main()
{
    int a_sym,b_diag;
    int matrix[X][X]={{2,0,0,0,0},{0,6,0,0,0},{0,0,2,0,0},{0,0,0,7,0},{0,0,0,0,4}};
    printMatrix(matrix);
    symmetrical(matrix,&a_sym);
    diagonal(matrix,&b_diag);
    if(a_sym){
        printf("This is a symmetrical matrix.\n");
    }else{
        printf("This is not a symmetrical matrix.\n");
    }
    if(b_diag){
        printf("This is a diagonal matrix");
    }else{
        printf("This is not a diagonal matrix");
    }
    return 0;
}
