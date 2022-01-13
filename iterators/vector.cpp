#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>::iterator it;
    // vector dynamically allocates the memory
    // defining the vector 
    // syntax :  vector<parameter_type> vector_name
    vector<int> v1 {1,2,3};
    for(it = v1.begin() ; it != v1.end() ; it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    // push_back method inserts element at the endl
    v1.push_back(4);
    for(it = v1.begin() ; it != v1.end() ; it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    // insert method inserts the element at specified iterator before
    v1.insert(v1.begin(),0);
    v1.insert(v1.end(),5);
    for(it = v1.begin() ; it != v1.end() ; it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "capacity - " << v1.capacity() << endl;
    cout << "size - " << v1.size() << endl;
    cout << "empty - " << v1.empty() << endl;
    
    // pop_back() removes the element from end
    v1.pop_back();
    
    //erase method removes the element at specified iterator
    v1.erase(v1.begin());
    
    for(it = v1.begin() ; it != v1.end() ; it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    vector<int> v2;
    v2 = v1;
    for(it = v2.begin() ; it != v2.end() ; it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "front - " << v2.front() << endl;
    cout << "end - " << v2.back() << endl;
    
    v2.clear();
    for(it = v2.begin() ; it != v2.end() ; it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "size : " << v2.size() << endl;
    cout << "capacity : " << v2.capacity() << endl;
    
    v2.swap(v1);
    for(it = v1.begin() ; it != v1.end() ; it++) {
        cout << *it << " ";
    }
    cout << endl;
    for(it = v2.begin() ; it != v2.end() ; it++) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
