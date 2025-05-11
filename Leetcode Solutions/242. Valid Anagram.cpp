//Problem Statement: https://leetcode.com/problems/valid-anagram/description/

#include <iostream>
#include <unordered_map>
using namespace std;

bool validAnagram(string s1, string s2)
{
    unordered_map<char, int> freq1, freq2;

    for(char c : s1) freq1[c]++;
    for(char c : s2) freq2[c]++;

    return freq1 == freq2;

}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

     
    if(validAnagram(str1, str2)) cout << "true\n";
    else cout << "false\n";

}
