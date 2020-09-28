#include <iostream>

using namespace std;

void printArray(int a[], int i, int n);
bool containsArray(int a[], int i, int n, int key);
int sumArray(int a[], int i, int n);
int maxArray(int a[], int i, int n);

void printArray(int a[], int i, int n)
{
}

bool containsArray(int a[], int i, int n, int key)
{
    return false;
}

int sumArray(int a[], int i, int n)
{
    return 0;
}

int maxArray(int a[], int i, int n)
{
    return INT_MIN;
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