// CODE FOR:  In search of an easy problem   CF: 1030A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int people;
    cin >> people;

    int opinion[people];

    for (int i = 0; i < people; i++)
    {
        cin >> opinion[i];

        // encountering 1 means HARD
        if (opinion[i] == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }

    // else EASY
    cout << "EASY" << endl;

    return 0;
}