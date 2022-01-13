#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // defining the queue
    queue<string> q;
    
    // inserting elements
    q.push("c");
    q.push("c++");
    q.push("Java");
    q.push("Python");
    
    cout << q.front() << endl;
    cout << "size - " << q.size() << endl;
    cout << "empty - " << q.empty() << endl;
    q.pop();
    
    cout << q.front() << endl;
    cout << "size - " << q.size() << endl;
    cout << "empty - " << q.empty() << endl;
    return 0;
}
