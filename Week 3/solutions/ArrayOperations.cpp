#include <iostream>

using namespace std;

void printArray(int a[], int i, int n);
void printArray2(int a[], int i, int n);
bool containsArray(int a[], int i, int n, int key);
bool containsArray2(int a[], int i, int n, int key);
bool containsArray3(int a[], int i, int n, int key);
int sumArray(int a[], int i, int n);
int sumArray2(int a[], int i, int n);
int maxArray(int a[], int i, int n);

/* Solution by Max (Monday) */
void printArray(int a[], int i, int n)
{
    if (i < n)
    {
        cout << a[i] << "	";
        printArray(a, i + 1, n);
    }
}

/* Alternative solution by Sameir, Brandon & Andrei (Wed) */
void printArray2(int a[], int i, int n)
{
    if (i >= n)
        return;

    cout << a[i] << endl;
    printArray(a, i + 1, n);
}

/* Solution by Carson (Monday) */
bool containsArray(int a[], int i, int n, int key)
{
    if (i < n)
    {
        if (a[i] == key)
        {
            return true;
        }
        else
        {
            return containsArray(a, i + 1, n, key);
        }
    }
    return false;
}

/* Alternative solution by Nicholas, Sameir (Wed) */
bool containsArray2(int a[], int i, int n, int key)
{
    if (i == n)
        return false;

    if (a[i] == key)
        return true;

    return containsArray2(a, i + 1, n, key);
}

/* Alternative solution by Andrei (Wed) */
bool containsArray3(int a[], int i, int n, int key)
{
    if (i >= n)
        return false;
    else if (a[i++] == key)
        return true;
    else
        return containsArray3(a, i, n, key);
}

/* Solution by Max (Monday) */
int sumArray(int a[], int i, int n)
{
    if (i < n)
        return a[i] + sumArray(a, i + 1, n);

    return 0;
}

/* Alternative solution by Andrei and Brandon (Wed) */
int sumArray2(int a[], int i, int n)
{
    if (i >= n)
        return 0;
    else
        return a[i] + sumArray2(a, i + 1, n);
}

/* Solution by Max (Monday) */
int maxArray(int a[], int i, int n)
{
    if (i <= n)
    {
        if (i == n)
            return -999;

        if (a[i] > maxArray(a, i + 1, n))
            return a[i];

        return maxArray(a, i + 1, n);
    }
    return -999;
}

// a = 4, 10, 2
// call sumArray(a, 0, 3): (0 < 3) return 4 + (call sumArray(a, 0+1, 3))=12
// call sumArray(a, 1, 3): (1 < 3) return 10 + (call sumArray(a, 1+1, 3))=2
// call sumArray(a, 2, 3): (2 < 3) return 2 + (call sumArray(a, 2+1, 3))=0
// call sumArray(a, 3, 3): (3 >= 3) return 0

/* Alternative solution */
int maxArray2(int a[], int i, int n)
{
    if (i + 1 >= n) // Suggested by Andrei
        return a[i];

    int max = maxArray2(a, i + 1, n);

    if (a[i] > max)
        return a[i];
    else
        return max;
}

int main()
{

    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int key;
    bool res;
    int sum, max;

    printArray(a, 0, 10);

    key = 75;
    res = containsArray(a, 0, 10, key);

    if (res == true)
        cout << key << " found in array." << endl;
    else
        cout << key << " not found in array." << endl;

    sum = sumArray(a, 0, 10);
    cout << "The sum of the elements in the array is: " << sum << endl;

    max = maxArray(a, 0, 10);
    cout << "The maximum of the elements in the array is: " << max << endl;

    return 0;
}