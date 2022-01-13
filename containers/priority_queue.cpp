#include <iostream>>     
#include <queue>

using namespace std;

int main ()
{
    priority_queue<int> pq1;
    
    pq1.push(30);  // inserts 30 to pq1 , now top = 30
    pq1.push(40);  // inserts 40 to pq1 , now top = 40 ( maxinmum element)
    pq1.push(90);  // inserts 90 to pq1 , now top = 90  
    pq1.push(60);	// inserts 60 to pq1 , top still is 90	
    
    
    cout << pq1.top() << endl;
    cout << "size - " << pq1.size() << endl;
    cout << "empty - " << pq1.empty() << endl;
    
    pq1.pop();
    
    cout << pq1.top() << endl;
    cout << "size - " << pq1.size() << endl;
    cout << "empty - " << pq1.empty() << endl;
    return 0;
}