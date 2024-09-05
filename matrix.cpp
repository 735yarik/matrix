    #include <TXLib.h>

const size_t SIZE_Y = 5;
const size_t SIZE_X = 4;

void print_matrix(int matrix[][SIZE_X], int size_x, int size_y);
void matrix_sum(int matrix1[][SIZE_X], int matrix2[][SIZE_X], int matrix3[][SIZE_X], int size_x, int size_y);
void matrix_input(int matrix[][SIZE_X], int size_x, int size_y);
void lin_matrix_input(int matrix[], size_t size);
void print_triangular_matrix(int matrix[], size_t size);



// size_t
// треугольная матрица
// файловый ввод вывод

int main()
{

//    size_t lin_size = 0;
//
//    printf("введите размер массива\n");
//    scanf("%d", &lin_size);
//
//    int * addr = (int*)calloc(lin_size, sizeof(int));

    int matrix_triang[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

//    int matrix1[SIZE_Y][SIZE_X] = {};
//    int matrix2[SIZE_Y][SIZE_X] = {};
//    int matrix3[SIZE_Y][SIZE_X] = {};

//    lin_matrix_input(addr, lin_size);



    print_triangular_matrix(matrix_triang, 5);

//    matrix_input(matrix1, SIZE_X, SIZE_Y);
//
//    print_matrix(matrix, SIZE_X, SIZE_Y);

//    int matrix1[5][4] =
//                {
//                {11, 12, 13, 14},
//                {21, 22, 23, 24},
//                {31, 32, 33, 34},
//                {41, 42, 43, 44},
//                {51, 52, 53, 54}
//                };
//
//    int matrix2[5][4] =
//                {
//                {61,  62,  63,  64},
//                {71,  72,  73,  74},
//                {81,  82,  83,  84},
//                {91,  92,  93,  94},
//                {101, 102, 103, 104}
//                };


//    matrix_sum(matrix1, matrix2, matrix3, SIZE_X, SIZE_Y);
//
//    print_matrix(matrix1, SIZE_X, SIZE_Y);
//    print_matrix(matrix2, SIZE_X, SIZE_Y);
//    print_matrix(matrix3, SIZE_X, SIZE_Y);                   //                  //
                                                               //                  //
}                                                              //                  //
                                                               //                  //
void print_matrix(int matrix[][SIZE_X], int size_x, int size_y)//        :(        //
{                                                              //                  //
                                                               //                  //
    for (int y = 0; y < size_y; y++)                           //                  //
    {                                                          //                  //

        for (int x = 0; x < size_x; x++)
            printf("%4d", matrix[y][x]);
        printf("\n");

    }

    printf("\n");

}

void matrix_sum(int matrix1[][SIZE_X], int matrix2[][SIZE_X], int matrix3[][SIZE_X], int size_x, int size_y)
{

    for (int y = 0; y < size_y; y++)
    {

        for (int x = 0; x < size_x; x++)
        {
                = matrix1[y][x] + matrix2[y][x];
        }

    }

}

void matrix_input(int matrix[][SIZE_X], int size_x, int size_y)
{

    for (int y = 0; y < size_y; y++)
    {

        for (int x = 0; x < size_x; x++)
            scanf("%d", ((int*)matrix + y*4 + x));
        printf("\nline is filled\n");

    }

    printf("\nmatrix is filled\n");

}

void lin_matrix_input(int *addr, int size)
{

    printf("fill matrix\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", addr+i);
    }

    printf("\nmatrix is filled\n");

}

void print_triangular_matrix(int matrix[], size_t size)
{

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("%3d ", *((int *)matrix+((i * i + i) / 2) + j));
        }
        printf("\n");

    }

    printf("\nprinted\n");

}





