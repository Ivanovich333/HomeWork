
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
    int sm;
    for (int i: arr)
        sm+=i;
    cout << endl << "Сумма всех элементов: " << sm << endl;
    
    int s;
    for (int i: arr)
        s+=i*i;
    cout << "Сумма квадратов всех элементов: " << s << endl;
    
    s=0;
    for (int i=0; i<6; i++)
        s+=arr[i];
    cout << "Сумма первых шести элементов: " << s << endl;
    
    s=0;
    int k1,k2;
    cout << "Введите k1 и k2: ";
    cin >> k1 >> k2;
    for (int i=k1; i<k2+1; i++)
        s+=arr[i];
    cout << "Сумма элементов с k1 по k2: " << s << endl;
    
    cout << "Среднее арифмитическое всех элементов: " << sm/((double) n) << endl;
    
    s=0;
    int s1, s2;
    cout << "Введите s1 и s2: ";
    cin >> s1 >> s2;
    for (int i=s1; i<s2+1; i++)
        s+=arr[i];
    cout << "Среднее арифмитическое элементов с s1 по s2: " << s/((double) s2-s1+1) << endl;
    
    
    
    
    return 0;
}


void print(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}