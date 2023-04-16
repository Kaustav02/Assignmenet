#include <bits/stdc++.h>
using namespace std;


// Approach for Q1
// I have used two pointer approach
//  Old Queue		[A B C D E F A* B C D A B C A B A]
//    New Queue	     [B C E F B C B C B]

// I have set pointer i to Old Queue and a j pointer at New Queue and I am running the loop until i is not equal to the given currentIndex-1
// If the size of the New Queue is 1 then we simply return 1 as our answer.
// In the loop, if the i-th element is not equal to the j-th element of the Old Queue I am simply doing i++ 
// If elements are equal I am doing i++ and j++;
// In that way, I have obtained the value of the new index which is stored in j.

// Time Complexity is O(n) (if the value of the index is equal to size)

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