#include <bits/stdc++.h>
using namespace std;

class NumberContainers {
public:
    unordered_map<int, int> indexMap;      // Maps index -> number
    unordered_map<int, set<int>> numMap;   // Maps number -> set of indices

    NumberContainers() {}

    void change(int index, int number) {
        if (indexMap.find(index) != indexMap.end()) {
            int oldNumber = indexMap[index];
            numMap[oldNumber].erase(index);
            if (numMap[oldNumber].empty()) {
                numMap.erase(oldNumber);
            }
        }
        
        indexMap[index] = number;
        numMap[number].insert(index);
    }
    
    int find(int number) {
        if (numMap.find(number) == numMap.end() || numMap[number].empty()) {
            return -1;
        }
        return *numMap[number].begin(); // Smallest index
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index, number);
 * int param_2 = obj->find(number);
 */
