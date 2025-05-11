// Problem Statement: https://leetcode.com/problems/contains-duplicate/description/?source=submission-ac


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsDuplicate(vector<int> &num)
{
    unordered_map<int, int> freq;

    for(char c : num) 
    {
        freq[c]++;
        if(freq[c] > 1) return true;
    }
    return false;

}

int main()
{
    int n;
    cout << "Size: ";
    cin >> n;

    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
     
    if(containsDuplicate(v)) cout << "true\n";
    else cout << "false\n";

}
