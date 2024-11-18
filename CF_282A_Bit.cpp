// CODE FOR: A_Bit CF: 282A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test >> ws;

    int ans = 0;
    while (test--)
    {
        string op;
        cin >> op;

        if (op == "X++" || op == "++X")
            ++ans;
        else if (op == "X--" || "--X")
            --ans;
    }
    cout << ans << endl;

    return 0;
}