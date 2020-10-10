#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void printArray(int a[], int i, int n);
void mergeArray(int a[], int a_size, int b[], int b_size, int c[]);
void mergeArray2(int a[], int p, int q, int r);

void printArray(int a[], int start, int end)
{
    for (int i = start; i < end; i++)
        cout << a[i] << "   ";
    cout << endl;
}

// a = 10, 30, 35,  999, i = 3
// b = 5, 8, 40,    999  j = 3
// c = 5, 8, 10, 30, 35, 40

void mergeArray(int a[], int a_size, int b[], int b_size, int c[])
{
    int i, j;

    a[a_size] = INT_MAX;
    b[b_size] = INT_MAX;

    i = 0;
    j = 0;

    for (int k = 0; k < (a_size + b_size); k++)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
    }
}

// a = 45, 53, 30, 10, 20, 40, 50, 15, 18, 89, 90, 95, 23, 35
// p = 3, q = 6, r = 12
void mergeArray2(int a[], int p, int q, int r)
{
    int n1, n2;
    int b[1000], c[1000];

    n1 = q - p + 1;
    n2 = r - q; // verify

    for (int k = 0; k < n1; k++)
        b[k] = a[k + p];
    b[n1] = INT_MAX;

    for (int k = 0; k < n2; k++)
        c[k] = a[q + k + 1];
    c[n2] = INT_MAX;

    int i, j;
    i = 0;
    j = 0;

    for (int k = p; k < r; k++)
    {
        if (b[i] < c[j])
        {
            a[k] = b[i];
            i++;
        }
        else
        {
            a[k] = c[j];
            j++;
        }
    }
}

int main()
{

    int a[11] = {10, 30, 35, 50, 60, 65, 75, 80, 82, 95};
    int b[6] = {5, 8, 40, 45, 90};
    int c[20];

    mergeArray(a, 10, b, 5, c);
    //printArray(c, 0, 15);

    /*	Testing of mergeArray2 */
    int x[20] = {45, 53, 30, 10, 20, 40, 50, 15, 18, 89, 90, 95, 23, 35};
    mergeArray2(x, 3, 6, 12);
    printArray(x, 0, 14);
    printArray(x, 3, 12);

    return 0;
}