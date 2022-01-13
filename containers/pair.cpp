#include <iostream>
using namespace std;

int main()
{
    // defining the pair
    pair<int , int> p1,p2;
    
    pair<int , string> p3;
    
    // initializing the pair 
    
    p1 = make_pair(1,2);
    p2 = make_pair(3,4);
    
    if(p1 == p2) {
        cout << "equal" << endl;
    }
    else 
       cout << "not equal" << endl;
       
    p2 = make_pair(1,2);
    if(p1 == p2) {
        cout << "equal" << endl;
    }
    else 
       cout << "not equal" << endl;
    
    p3 = make_pair(18,"virat kohli");
    
    cout << p3.first << " -> " << p3.second << endl ;
   
    return 0;
}
