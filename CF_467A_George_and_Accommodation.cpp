// CODE FOR:  Gorge and Accommodation  CF:467A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num_of_room;
    cin >> num_of_room;

    int count = 0;
    while (num_of_room--)
    {
        int current_living, total_capacity;
        cin >> current_living >> total_capacity;

        if ((current_living + 2) <= total_capacity)
            count++;
    }

    cout << count << endl;

    return 0;
}