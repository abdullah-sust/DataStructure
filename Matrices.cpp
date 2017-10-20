#include<stdio.h>

int main()
{
    // 5 x 5 Matrix
    int matrix[5][5]={ { 4, 0, 0, 0, 0},
                    { 3,-5, 0, 0, 0},
                    { 1, 0, 6, 0, 0},
                    {-7, 8,-1, 3, 0},
                    { 5,-2, 0, 2,-8}};
    printf("\n\nTriangular Matrix:\n\n");
    //Triangular Matrix
    for(int i=0;i<5;++i)
    {
        for(int j=0;j<=i;++j)
        {
            printf(" %d",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\nDiagonal Matrix:\n\n");
    //Diagonal Matrix
    for(int i=0;i<5;++i)
    {
        for(int j=0;j<5;++j)
        {
            if(i==j)
                printf(" %d",matrix[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
