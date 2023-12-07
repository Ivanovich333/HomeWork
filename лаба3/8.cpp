
#include <iostream>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int l=n.length();
    for (int i=0; i<l; i++)
        n= "*" + n + "*";
    cout << n;

    return 0;
}
