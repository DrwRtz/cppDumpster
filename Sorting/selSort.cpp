#include <iostream>
using namespace std;

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

int locOfSmallest(int a[], int s, int e)
{
    int i = s;
    int j = i;

    while (i <= e)
    {
        if (a[i] < a[j])
        {
            j = i;
        }

        i++;
    }

    return j;
}

void selSort(int a[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        int j = locOfSmallest(a, i, n - 1);
        swap(a, i, j);
        i++;
    }
}

void display(int a[], int n)
{
    int i = 0;

    while (i < n)
    {
        std::cout << a[i] << ", ";
        i++;
    }

}

int main()
{
    int a[] = {102, 25, 50, 14, 25, 102, 987, 255, 144, 18, 0, 492, 496, 128, 505};
    int size = sizeof(a) / sizeof(int);

    cout << "Before:" << endl;
    display(a, size);
    cout << "\n" << endl;

    selSort(a, size);

    cout << "After:" << endl;
    display(a, size);
}