#include <bits/stdc++.h>
using namespace std;

int main()
{

    int currentIndex;
    cin >> currentIndex;

    int old, curr;
    cin >> old >> curr;

    vector<char> Old_Queue;
    vector<char> New_Queue;

    for (int i = 0; i < old; i++)
    {
        int data;
        cin >> data;
        Old_Queue.push_back(data);
    }

    for (int i = 0; i < curr; i++)
    {
        int data;
        cin >> data;
        New_Queue.push_back(data);
    }

    int i = 0;
    int j = 0;

    if (New_Queue.size() == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        while (i < currentIndex)
        {
            if (Old_Queue[i] != New_Queue[j])
            {
                i++;
            }
            i++;
            j++;
        }
        cout << j << endl;
    }

    return 0;
}