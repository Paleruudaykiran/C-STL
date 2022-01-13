#include <iostream>
#include <map>
using namespace std;

int main()
{
    //  remove and insert in a map takes O(n) time complexity
    // syntax - map<key_type , value_type> map_name
    map<int,int> mp {{1,1},{2,4},{3,9}};
    
    map<int,int>::iterator it;
    for(it = mp.begin() ; it != mp.end(); it++) {
        cout << (*it).first << " - " << (*it).second << endl;
    }
    
    // accessing the elements by key 
    cout << mp.at(1) << endl;
    cout << mp[3] << endl;
    
    // inserting new key,value pair
    mp[5] = 25;
     for(it = mp.begin() ; it != mp.end(); it++) {
        cout << (*it).first << " - " << (*it).second << endl;
    }
    mp.insert(make_pair(4,16));
     for(it = mp.begin() ; it != mp.end(); it++) {
        cout << (*it).first << " - " << (*it).second << endl;
    }
    cout << "size - " << mp.size() << endl;
    cout << "empty - " << mp.empty() << endl;
    
    it = mp.find(3); 
    cout << (*it).first << " - " << (*it).second << endl;
    
    it = mp.find(7);
    cout << (*it).first << " - " << (*it).second << endl;
    
    mp.erase(1);
    for(it = mp.begin() ; it != mp.end(); it++) {
        cout << (*it).first << " - " << (*it).second << endl;
    }
    mp.clear();
    cout << "size - " << mp.size() << endl;
    cout << "empty - " << mp.empty() << endl;
    return 0;
}
