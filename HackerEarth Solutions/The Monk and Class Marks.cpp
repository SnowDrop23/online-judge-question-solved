#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<string, int>p1, pair<string, int>p2)
{
    if(p1.second == p2.second) return p1.first < p2.first;
    return p1.second > p2.second;
}

int main()
{
    int n;
    cin >> n;
    
    vector<pair<string, int>> m;
    for(int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> s >> x;

        m.push_back({s, x});
    }

    sort(m.begin(), m.end(), comparator);
    for(auto i : m) cout << i.first << " " << i.second << endl;

    
}
