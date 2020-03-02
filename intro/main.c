#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// numeric types
int a;
long b;
float f;
double c;
char g;

// initialization
int a = 12;
float f = 32.9;

// Arrays
int x[20]; // array of 20 ints
float y[2][20]; // 2D arrays, two rows of 20 columns of floats...wut

int h[5] = {4, 7, 2, 9, 3};
int j[2][3] = {{1, 2, 3}, {4, 5, 6}};
int k[] = {10, 50, 100};

char *s; // a pointer to a char

char *s = "Hello World";

char t[] = "This is the secret message";
char *u = t; // t && u refer to same string

//double analyze_data(int d, float f)
//{
//    double result;
//}
//
//int str_length(char *s)
//{
//    //
//}
//

int matrix_alloc(int rows, int cols)
{
    int *row_mem = malloc(rows * sizeof(int)); // requesting memory
    int *col_mem = malloc(cols * sizeof(int));

    for (int i = 0; i < rows; i++){
        *(row_mem + 1)
    }
    // eventually we want something like arr[rows][cols]
}

int main() {
    printf("Hello, World!\n");
    if (a == b) {
        9;
    }
    return 0;
}