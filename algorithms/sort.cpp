#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare_function(int i, int j)
{
   return i > j;    // return 1 if i>j else 0
}
bool compare_string(string i, string j)
{ 
  return (i.size() < j.size()); 
}

int main()
{
    int arr[5] = {1,5,8,4,2};
    
    sort(arr , arr+5);    // sorts arr[0] to arr[4] in ascending order
    /* now the arr is 1,2,4,5,8  */
    
    vector<int> v1;
    
    v1.push_back(8);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(1);
    
    /* now the vector v1 is 8,4,5,1 */
    vector<int>::iterator i, j;
    
    i = v1.begin();   // i now points to beginning of the vector v1
    j = v1.end();     // j now points to end of the vector v1
    
    sort(i,j);      //sort(v1.begin() , v1.end() ) can also be used
    /* now the vector v1 is 1,4,5,8 */
    
    
    /* use of compare_function */
    int a2[] = { 4,3,6,5,6,8,4,3,6 };
    
    sort(a2,a2+9,compare_function);  // sorts a2 in descending order 
    /* here we have used compare_function which uses operator(>), 
    that result into sorting in descending order */
    
    /* compare_function is also used to sort non-numeric elements such as*/
    
    string s[]={"a" , "abc", "ab" , "abcde"};
    
    sort(s,s+4,compare_string);
    /* now s is "a","ab","abc","abcde"  */
}