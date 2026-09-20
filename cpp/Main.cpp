
#include <iostream>
#include <unordered_map>
#include <vector>


using namespace std;

int main()
{
    unordered_map<int, int> map;
    map[1] = 20;

    for (int i=0 ; i < 10; i++){
        map[i]= i ;
    }

    for (int i=0 ; i < 10; i++){

        cerr << "Current target: " << map[i] << "\n";
    }
    cout << map[1] << "\n";
    vector<int> arr;

    for (int i=0 ; i < 10; i++){
         arr.push_back(i);
    }

    for (int i=0 ; i < 10; i++){
cerr << "Current target: " << arr[i] << "\n";
    }
    return 0;
}
