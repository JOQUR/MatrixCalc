#include <stdio.h>


void inputMat(int *d, int arr[5][5]);

int main(){

    int dim;
    printf("Enter Dimension: ");
    scanf("%d", &dim);  
    printf("Dimension is: %d\n",dim);
    static int matrix[5][5];
    inputMat(&dim, matrix);
    for(int i = 0; i < dim; i ++){
        for( int j = 0; j < dim;j ++){
            printf("%d\n", matrix[i][j]);
        }
    }
    return 0;
}


void inputMat(int *d, int arr[5][5]){
    printf("%d\n", *d);
    int i, j;
    for(i = 0; i < *d; i ++){
        for( j = 0; j < *d;j ++){
            int x;
            printf("Enter numbers (%d, %d)\n", i, j);
            scanf("%d", &x);
            arr[i][j] = x;
        }
    }
}