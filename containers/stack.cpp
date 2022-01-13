#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    
    //inserting/pushing elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);
    
    //accessing top element
    cout << s.top() << endl;
    
    //size and checking if the stack is empty
    cout << "size - " << s.size() << endl;
    cout << "empty - " << s.empty() << endl;
    
    //removing/poping elements from the stack
    s.pop();
    
    cout << "size - " << s.size() << endl;
    cout << "empty - " << s.empty() << endl;
    
    cout << s.top() << endl;

    return 0;
}
