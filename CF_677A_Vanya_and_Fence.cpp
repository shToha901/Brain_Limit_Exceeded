// CODE FOR:  Vanya and Fence  CF: 677A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int person, fence_hight;
    cin >> person >> fence_hight;

    int person_height[person];

    int width_of_road = 0;
    for (int i = 0; i < person; i++)
    {
        cin >> person_height[i];

        // checking person height to fence height
        if (person_height[i] > fence_hight)
            width_of_road += 2;
        else
            width_of_road++;
    }

    cout << width_of_road << endl;

    return 0;
}