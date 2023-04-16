#include<bits/stdc++.h>
using namespace std;

// Function to find the index of the Current Index Member in a task queue
int findCurrentIndexMember(vector<char>& taskQueue, int currentIndex) {
    char currentMember = taskQueue[currentIndex-1]; // Get the current member at the given index

    // Remove the inactive members from the task queue
    taskQueue.erase(remove(taskQueue.begin(), taskQueue.end(), currentMember), taskQueue.end());

    // Find the index of the current member in the updated task queue
    auto it = find(taskQueue.begin(), taskQueue.end(), currentMember);
    int newIndex = it - taskQueue.begin(); // Calculate the index of the current member in the updated task queue

    return newIndex;
}

int main() {
    // Example usage
    vector<char> taskQueue = {'A', 'B', 'C', 'D', 'E', 'F', 'A', 'B', 'C', 'D', 'A', 'B', 'C', 'A', 'B', 'A'};
    int currentIndex = 7;
    
    cout << "Old Task Queue: ";
    for (char member : taskQueue) {
        cout << member << " ";
    }
    cout << endl;
    cout << "Current Index: " << currentIndex << endl;

    int newIndex = findCurrentIndexMember(taskQueue, currentIndex);
    cout << "New Index: " << newIndex << endl;
    cout << "Current Index Member in the New Task Queue: " << taskQueue[newIndex] << endl;

    return 0;
}