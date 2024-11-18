// CODE FOR: Nearly lucky number   CF: 110A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input as string cause number is too large
    string num;
    cin >> num;
    long long size = num.size(); // size of string

    long long count = 0; // considering worst case
    for (int i = 0; i < size; i++)
    {
        if (num[i] == '4' || num[i] == '7')
            count++;
    }

    if (count == 4 || count == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}