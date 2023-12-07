
#include <iostream>

using namespace std;

void print(int arr[], int n);

int main()
{
    int arr[20];
    for (int i=0; i<20; i++)
        arr[i]=rand()%100;
    print(arr,20);
    cout << "Переделанный массив:" << endl;
    for (int i=0; i<3; i++)
    {
        int b;
        b=arr[i];
        arr[i]=arr[20-3+i];
        arr[20-3+i]=b;
    }
    print(arr, 20);

    return 0;
}


void print(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}
    