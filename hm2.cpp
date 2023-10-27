#include <iostream>
using namespace std;

int oneP()
{
    int x =0,y=0,z=0;
    cin >> x >> y >> z;
    if (x%2!=0 and y%2!=0)
        cout << "condition is true";
    else 
        cout << "condition is false";
    if (x<20 xor y<20)
        cout << "condition is true";
    else 
        cout << "condition is false";
    if (x==0 or y==0)
        cout << "condition is true";
    else 
        cout << "condition is false";
    if (x<0 and y<0 and z<0)
        cout << "condition is true";
    else 
        cout << "condition is false";
    if (x%5==0 xor y%5==0 xor z%5==0)
        cout << "condition is true";
    else 
        cout << "condition is false";
    if (x>100 or y>100 or z>100)
        cout << "condition is true";
    else 
        cout << "condition is false";
    return 0;
}

int twoP()
{
    using byte = unsigned char;
    pair<byte, byte> posA;
    cin >> posA.first >> posA.second;
    pair<byte, byte> posB;
    cin >> posB.first >> posB.second;
    cout << "1" << endl;
    if (posA.first==posB.first or posA.second==posB.second)
        cout<<"Danger" << endl;
    cout << "2" << endl;
    if (abs(posB.first-posA.first)==abs(posB.second-posA.second))
        cout<<"Danger" << endl;
    cout << "3" << endl;
    if (abs(abs(posB.first-posA.first))==1 and abs(posB.second-posA.second)==1);
        cout<<"Danger" << endl;
    
    
    cout << "4" << endl;
    if (posA.first==posB.first or posA.second==posB.second or abs(posB.first-posA.first)==abs(posB.second-posA.second))
        cout<<"Danger" << endl;

    cout << "5" << endl;
    if ((posA.second - posB.second) == -1 and abs(posA.first - posB.first) == 1)
        cout << "Danger"<< endl;
    

}

int thirdP()
{
    for (int i=1; i < 10;i++)
    {
        cout << i << " X " << "7 = " << i*7 << endl;
    }
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
