
#include <iostream>
using namespace std;

int main() {
        int a,b,c;
	a = 1;
	b = 13;
	c = 49;
	cout << a << " " << b << " " << c;

	return 0;

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    char s;
    a = 1;
    b = 13;
    c = 49;
    cin >> s;
    cout << a << s << b << s << c;
}



#include <iostream>
using namespace std;
int main()
{
	cout << rand() << "  " << rand() << "  " << rand();
}

#include <iostream>
using namespace std;
int main()
{
	int a,x,y;
	cin >> a;
	x = 12 * pow(a, 2) + 7 * a - 12;
	y = 3 * pow(x, 3) + 4 * pow(x, 2) - 11 * x + 1;
	cout << x << endl;
	cout << y << endl;

}

#include <iostream>
using namespace std;
int main()
{
	float x, y;
	cin >> x >> y;
	float u = y / x;
	cout << u;
}

#include <iostream>
using namespace std;
int main()
{
	float a, b, x;
	cin >> a >> b;
	x = (-1 * b) / a;
	cout << x;
}

#include <iostream>
using namespace std;
int main()
{
	float x1, y1, x2, y2, l;
	cin >> x1 >> y1 >> x2 >> y2;
	l = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);
	cout << l;


}

#include <iostream>
using namespace std;
int main()
{
	float b, a, h, p, t;
	cin >> a >> b >> h;
	t = pow((b - a)/2 * (b - a)/2 + h * h, 0.5);
	p = a + b + t * 2;
	cout << p;

}

#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a;
	b = pow(a, 3);
	c = pow(a, 2) * 6;
	cout << b << " " << c;
}

#include <iostream>
using namespace std;
int main()
{
	float b, p;
	cin >> b;
	p = b * 4;
	cout << p;
}

#include <iostream>
using namespace std;
int main()
{
	float r, d;
	cin >> r;
	d = 2 * r;
	cout << d;
}

#include <iostream>
using namespace std;
int main()
{
	string name;
	cin >> name;
	cout << "Hello," << name << "! My name is C++";
}
        