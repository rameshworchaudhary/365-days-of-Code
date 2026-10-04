#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    map<string, vector<string>> groups;

    for (string str : strs) {
        string key = str;
        sort(key.begin(), key.end());
        groups[key].push_back(str);
    }

    cout << "Grouped Anagrams:" << endl;

    for (auto group : groups) {
        cout << "[ ";
        for (string word : group.second) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}