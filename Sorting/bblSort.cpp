#include <iostream>
using namespace std;

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void bubble(int a[], int n)
{
    int i = n - 1;

    while (i > 0)
    {
        if (a[i] < a[i - 1])
        {
            swap(a, i, i - 1);
        }

        i--;
    }
}

void bblSort(int a[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        bubble(a, n);
        i++;
    }
}

void display(int a[], int n)
{
    int i = 0;

    while (i < n)
    {
        cout << a[i] << ", ";
        i++;
    }

    cout << endl;
}

int main()
{
    int a[] = {102, 25, 50, 14, 25, 102, 987, 255, 144, 18, 0, 492, 496, 128, 505};
    int size = sizeof(a) / sizeof(int);

    display(a, size);
    bblSort(a, size);
    display(a, size);
}