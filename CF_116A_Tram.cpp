// CODE FOR:  A Tram  CF:116A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stop;
    cin >> stop;

    int capacity = 0, total_passenger = 0;
    while (stop--)
    {
        int in, out;
        cin >> out >> in;
        int pass = 0 - out + in;
        total_passenger += pass;
        capacity = max(capacity, total_passenger);
    }

    cout << capacity << endl;

    return 0;
}