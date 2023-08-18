#include<bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second; 
}

int main() {
    std::vector<std::pair<int, int>> v = {{3, 4}, {1, 2}, {5, 1}};
    std::sort(v.begin(), v.end(), compare);

    cout << find(v.begin(), v.end(), 20) << endl;
}
