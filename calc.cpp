#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

struct sym {
    char type;
    double value;
};

int priority(char ch) {
    if (ch == '+' or ch == '-') {
        return 1;
    }
    if (ch == '*' or ch == '/') {
        return 2;
    }
    if (ch == '^') {
        return 3;
    }
    return 0;
}

bool math(stack <sym> & s_num, stack <sym> & s_op, sym & item) {
    double a, b, c;
    a = s_num.top().value;
    s_num.pop();
    switch (s_op.top().type) {
        case '+':
            b = s_num.top().value;
            s_num.pop();
            c = a + b;
            item.type = '0';
            item.value = c;
            s_num.push(item);
            s_op.pop();
            break;
        case '-':
            b = s_num.top().value;
            s_num.pop();
            c = b - a;
            item.type = '0';
            item.value = c;
            s_num.push(item);
            s_op.pop();
            break;
        case '*':
            b = s_num.top().value;
            s_num.pop();
            c = a * b;
            item.type = '0';
            item.value = c;
            s_num.push(item);
            s_op.pop();
            break;
        case '/':
            b = s_num.top().value;
            s_num.pop();
            if (a == 0) {
                cout << "\nДеление на ноль\n";
                return false;
            }
            if (a != 0) {
                c = b / a;
                item.type = '0';
                item.value = c;
                s_num.push(item);
                s_op.pop();
                break;
            }
        case '^':
            b = s_num.top().value;
            s_num.pop();
            c = pow(b, a);
            item.type = '0';
            item.value = c;
            s_num.push(item);
            s_op.pop();
            break;
    }
    return true;
}


int main() {
    setlocale(LC_ALL, "rus");
    char ch;
    bool f = 1;
    double value;
    stack<sym> s_num;
    stack<sym> s_op;
    sym item;
    while (1) {
        ch = cin.peek();
        if (ch == '\n') {
            break;
        }
        if (ch >= '0' and ch <= '9' or (ch == '-' and f==1)) {
            cin >> value;
            item.type = '0';
            item.value = value;
            s_num.push(item);
            f = 0;
            continue;
        }
        if (ch == '+' or (ch == '-' and f==0) or ch == '*' or ch == '/' or ch == '^') {
            if (s_op.size() == 0) {
                item.type = ch;
                item.value = 0;
                s_op.push(item);
                cin.ignore();
                continue;
            }
            if (s_op.size() != 0 and priority(ch) > priority(s_op.top().type)) {
                item.type = ch;
                item.value = 0;
                s_op.push(item);
                cin.ignore();
                continue;
            }
            if (s_op.size() != 0 and priority(ch) <= priority(s_op.top().type)) {
                if (math(s_num, s_op, item) == false) {
                    system("pause");
                    return 0;
                }
                else continue;
            }
        }
        if (ch == '(') {
            f=1;
            item.type = ch;
            item.value = 0;
            s_op.push(item);
            cin.ignore();
            continue;
        }
        if (ch == ')') {
            while (s_op.top().type != '(') {
                if (math(s_num, s_op, item) == false) {
                    system("pause");
                    return 0;
                }
                else continue;
            }
            s_op.pop();
            cin.ignore();
        }
    }
    while (s_op.size() != 0) {
        if (math(s_num, s_op, item) == false) {
            system("pause");
            return 0;
        }
        else continue;
    }
    cout << "Ответ: " << s_num.top().value << endl;
    return 0;
}































