#include <stdio.h>
#include <math.h>

/*
 * w (o \theta) es una matriz de matrices (i.e. tensor).
 *
 */

struct tensor
{
    int size;    // Size of the mat
    double *mat; // Data mat
};

double *dgemm(double *a, double *b, int m, int n)
{
    double *out = (double *)malloc(m * sizeof(double)),
           tmp = 0;
    int i, j;
    for (i = 0; i < m; i++)
    {
        tmp = 0;
        for (j = 0; j < m; j++)
            tmp += *(a + j) * *(b + j);
        *(out + i) = tmp;
    }
    return out; // TODO: Make something sensible (and fast)
}
double *g(double *z, int sizeof_z)
{
    int i;
    for (i = 0; i < sizeof_z; i++)
        if (*(z + i) < 0)
            *(z + i) = 0;
    return z;
}
double *f(struct tensor *w, int sizeof_w, double *x, int sizeof_x)
{
    return sizeof_w == 0
               ? x
               : g(dgemm(w->mat, f(w + 1, sizeof_w - 1, x, sizeof_x), w->size, sizeof_x), sizeof_x);
}
double error(double *y, double *result, int size)
{
    return 0; // TODO: Make something sensible
}
double loss(double *y, double *x, int sizeof_x, struct tensor *w, int sizeof_w)
{
    return 0.5 * pow((error(y, f(w, sizeof_w, x, sizeof_x), sizeof_x)), 2);
}

int main()
{
    return 0;
}