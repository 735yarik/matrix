#include <TXLib.h>

void print_matrix(int matrix[][4], int size_y, int size_x);



int main()
{

    int sum = 0;

    int matrix1[2][3] =
                    {
                    {1, 2, 3},
                    {4, 5, 6}
                    };

    int matrix2[3][4] =
                    {
                    {1,  2,  3,  4},
                    {1,  2,  3,  4},
                    {1,  2,  3,  4},
                    };

    int matrix3[2][4] = {};

    for (int y = 0; y < 2; y++)
    {

        for (int x = 0; x < 4; x++)
        {

            for (int xy = 0; xy < 3; xy++)
            {
                sum += matrix1[y][xy] * matrix2[xy][x];
            }

            matrix3[y][x] = sum;
            sum = 0;

        }

    }

    print_matrix(matrix3, 2, 4);

}

void print_matrix(int matrix[][4], int size_y, int size_x)
{

    for (int y = 0; y < size_y; y++)
    {

        for (int x = 0; x < size_x; x++)
            printf("%4d", matrix[y][x]);
        printf("\n");

    }

    printf("\n");

}










