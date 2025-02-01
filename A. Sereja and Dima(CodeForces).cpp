//Problem link: https://codeforces.com/contest/381/problem/A


#include <iostream>
#include <vector>
using namespace std;

pair<int, int> Sereja_and_Dima(vector<int> &arr)
{
    
    int i = 0, j = arr.size() - 1, turn = 1;
    
    int sereja = 0, dima = 0;
    while(i <= j)
    {
        
        if(turn % 2 != 0)
        {
            if(arr[i] > arr[j])
            {
                sereja += arr[i];
                i++;
                
            }
            else
            {
                sereja += arr[j];
                j--;
                
            }
        }
        else
        {
            if(arr[i] > arr[j])
            {
                dima += arr[i];
                i++;
                
            }
            else
            {
                dima += arr[j];
                j--;
                
            }
        }
        turn++;

    }
    return {sereja, dima};
}
int main ()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    pair <int, int> res = Sereja_and_Dima(arr);
    cout << res.first << " " << res.second << endl;
    
}
