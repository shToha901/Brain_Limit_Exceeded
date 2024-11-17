// CODE FOR:  A_Bear_and_Big_Brother  CF:  791A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int limak, bob;
    cin >> limak >> bob;

    // year calculation
    int year = 0;
    for (int i = 1; limak <= bob; i++)
    {
        limak *= 3;
        bob *= 2;
        year = i;
    }

    // output
    cout << year << endl;

    return 0;
}