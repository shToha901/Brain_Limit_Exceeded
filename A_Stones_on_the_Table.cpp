// CODE FOR:  A Stone on the table   CF: 266A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // num of stone input
    int size;
    cin >> size;

    // color input
    char color[size];
    for (int i = 0; i < size; i++)
        cin >> color[i];

    // checking adjecent color
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (color[i] == color[i + 1])
            count++;
    }

    // output
    cout << count << endl;

    return 0;
}