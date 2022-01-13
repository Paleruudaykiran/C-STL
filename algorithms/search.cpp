#include <iostream>    
#include <algorithm>
#include <vector>
using namespace std;

bool compare_string_by_length (string i,string j)
{
    return (i.size() == j.size());
}

int main () 
{
    int inputs[] = {7,8,4,1,6,5,9,4};
    vector<int> v(inputs, inputs+8);
    
    cout<<binary_search(v.begin() , v.end() , 7 );  //prints 1 , Boolean true
    
    cout<<binary_search(v.begin() , v.end() , 217); //prints 0 , Boolean false
    
    /* compare_function can be used to search 
    non numeric elements based on their properties */ 
    
    string s[] = { "test" , "abcdf" , "efghijkl" , "pop" };
    
    cout<<binary_search(s, s+4, "nickt" , compare_string_by_length);
    /* search for the string in s which have same length as of "nicky" */
    
    cout << endl << *(upper_bound(v.begin(),v.end(),2)) << endl;
    cout << *(lower_bound(v.begin(),v.end(),2));
}