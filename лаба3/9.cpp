
#include <iostream>

using namespace std;

int main()
{
    string n;
    int c;
    getline(cin, n);
    char t='а';
    for (char i: n)
        if (i == t)
            c+=1;
    cout << c/((double) n.length()/2)*100;
    return 0;
}
