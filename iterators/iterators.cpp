#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    
   // Iterators are used to point to the containers in STL, because of iterators it is possible for an algorithm to manipulate different types of data structures Containers.

   // definig the container 
   // container_type <parameter_list>::iterator iterator_name
   
   vector<int> v;
   for(int i = 0 ; i < 10 ; i++) 
   { 
       v.push_back(i*i);
   }
   
   vector<int>::iterator it;
   
   // Iterators can be used to traverse the container, and we can de-reference the iterator to get the value of the element it is pointing to
   
   for(it = v.begin() ; it != v.end() ; it++) {
       cout << *it << " " ;
   }
   
   cout << endl;
   
   it = v.begin();
   
   // advance is to increment or decrement iterator 
   advance(it,5);
   cout << "iterator points to - " << *it << endl;
   
   advance(it,-5); 
   cout << "iterator points to - " << *it << endl;
   
   // distance is to get the no of elements between the Iterators
   
   int size = distance(v.begin(),v.end());
   cout << "size - " << size << endl;
   
    return 0;
}
