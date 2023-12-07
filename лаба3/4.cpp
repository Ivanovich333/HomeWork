
#include <iostream>

using namespace std;

void print(int arr[], int n);

int main()
{
    int n;
    cout << "Введите длину массива: ";
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
        arr[i]=rand()%100;
    print(arr,n);
    cout << endl << "Без первого отрицательного элемента:" << endl;
    for (int i=0; i<n; i++)
        if (arr[i]<0)
            arr[i]=0;
    print(arr,n);
    cout << endl << "Без последнего чётного элемента:" << endl;
    for (int i=n-1; i>=0; i--)
        if (arr[i]%2==0)
        {
            arr[i]=0;
            break;
        }
    print(arr,n);

    return 0;
}


void print(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}