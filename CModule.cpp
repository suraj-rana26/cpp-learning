#include <iostream> 
#include <utility>
#include <map>
using namespace std ; 
 int main() {


map<int, string> students;
students.insert(make_pair(101, "Sooraj"));
students.insert(make_pair(102, "Rahul"));

for(auto it : students) {
    cout << it.first << " -> " << it.second << endl;
}

// auto is used to avoid writing long iterator types 

    return 0 ;
}