// CODE FOR:  A wrong subtraction  CF: 977A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, times;
    cin >> num >> times;

    while (times--)
    {
        if (num % 10 == 0)
            num /= 10;
        else
            num--;
    }

    cout << num << endl;

    return 0;
}