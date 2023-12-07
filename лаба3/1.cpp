#include <iostream>
using namespace std;


void print(double arr[], int n);

int main()
{
    int n;
    cout << "Введите длину массива: ";
    cin >> n;
    double arr[n];
    for (int i=0; i<n; i++)
        arr[i]=rand()%100;
    print(arr,n);
    cout << endl << "Увеличиваем в два раза" << endl;
    for (int i=0; i<n; i++)
        arr[i]*=2;
    print(arr,n);
    cout << endl;
    int a;
    cout << "Введите число a: ";
    cin >> a;
    cout << "Уменьшаем на " << a << endl;
    for (int i=0; i<n; i++)
        arr[i]-=a;
    print(arr,n);
    cout << endl << "Делим на первый элемент" << endl;
    double first;
    first=arr[0];
    for (int i=0; i<n; i++)
        arr[i]/=first;
    print(arr,n);
    
        
    return 0;
}

void print(double arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}
