#include <iostream>
#include <list> 
using namespace std;

int main()
{
    // definig the list 
    list<int> li ;
    li = {1,2,3} ;
    
    // push_back method used insert the element at the end
    li.push_back(4);
    
    //push_front method used to insert the element at the front
    li.push_front(0);
    
    // insert method has three different sigrnatures
    li.insert(li.begin(),-1);
    
    li.insert(li.begin(),5,0);
    
    list<int> l2{10,20,30};
    li.insert(li.end(),l2.begin(),l2.end());
    
    for(auto it : li) {
        cout << it << " ";
    }
    cout << endl;
    // pop_back removes element from the end
    li.pop_back();
    
    // pop_front removes element from the front
    li.pop_front();
    
    for(auto it : li) {
        cout << it << " ";
    }
    cout << endl;
    
    cout << "size - " << li.size() << endl;
    cout << "empty - " << li.empty() << endl;
    
    li.clear();
    cout << "empty - " << li.empty() << endl;
    
    l2.reverse();
    for(auto it : l2) {
        cout << it << " ";
    }
    cout << endl;
    
    l2.sort();
    for(auto it : l2) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
