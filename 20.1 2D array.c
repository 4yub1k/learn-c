//2 _dimensional array for matrix, grid ,or table of data
#include <stdio.h>
//Always use correct specifier, number of specifier should be eqaul to number of values.
//printf("%d %d",i,i), not like this printf("%d",i,i) or printf("%d %d",i) etc
int main (){

    //int matrix [number of {{},{}}'s=2][count numbers inside {1,2},{2,3} = 2];
    //int matrix[2(no required)][2]={{1,2},{1,2}};
    //int matrix[rows][columns];
    //int matrix[2][5]={{1,2,3,4,5},{1,2,3,4,5}};//2x5 matrix

    int matrix[2][5]={  //columns
                        {1,2,3,4,5},//row
                        {4,5,6,7,8}//row
                    };//2x5 matrix

    printf("Matrix %d",matrix[0][2]);//first row second column value =6, strats from [0][0]

    for (int i=0;i<2;i++){//row limit, never forget to initial i with zero.
        for (int j=0;j<5;j++){
            printf("\nMatrix at index [%d][%d] : %d",i,j,matrix[i][j]);
        }
    }
    printf("\nIn matrix style\n");
    //to auto find rows and columns 
    //Rows: use sizeof(matrix)/sizeof(matrix[0])
    //cols: use sizeof(matrix[0])/sizeof(matrix[0][0])
    printf("Rows: %d",sizeof(matrix)/sizeof(matrix[0]));
    printf("\nColumns: %d\n",sizeof(matrix[0])/sizeof(matrix[0][0]));

    for (int l=0;l<2;l++){//row limit, never forget to initial i with zero.
        printf("[");
        for (int m=0;m<5;m++){
            printf(" %d ",matrix[l][m]);
        }
        printf("]");
        printf("\n");
    }
    //output
    /*
    Matrix 3
    Matrix at index [0][0] : 1
    Matrix at index [0][1] : 2
    Matrix at index [0][2] : 3
    Matrix at index [0][3] : 4
    Matrix at index [0][4] : 5
    Matrix at index [1][0] : 4
    Matrix at index [1][1] : 5
    Matrix at index [1][2] : 6
    Matrix at index [1][3] : 7
    Matrix at index [1][4] : 8
    In matrix style
    Rows: 2
    Columns: 5
    [ 1  2  3  4  5 ]
    [ 4  5  6  7  8 ]
    */

    return 0;
}