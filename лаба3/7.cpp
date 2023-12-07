
#include <iostream>

using namespace std;

int main()
{
    string n1, n2, n3;
    int n1l,n2l,n3l;
    cin >> n1 >> n2 >> n3;
    string the_longest, the_shortest;
    n1l=n1.length();
    n2l=n2.length();
    n3l=n3.length();
    if (n1l > n2l and n1l > n3l)
    {
        the_longest = n1;
        if (n2l > n3l)
            the_shortest = n3;
        else 
            the_shortest = n2;
    }
    else if (n2l > n1l and n2l > n3l)
    {
        the_longest = n2;
        if (n1l > n3l)
            the_shortest = n3;
        else
            the_shortest = n1;
    }
    else 
    {
        the_longest = n3;
        if (n1l > n2l)
            the_shortest = n2;
        else 
            the_shortest = n1;
    }
    cout << the_longest << " " << the_shortest;
    return 0;
}
