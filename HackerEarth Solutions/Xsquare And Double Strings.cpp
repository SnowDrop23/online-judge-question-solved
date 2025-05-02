//****Application of Hashing************

#include <iostream>
using namespace std;

//const int n = 100;
//int hsh[n];

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int flag = 0;
        string str;
        cin >> str;
		
        int hsh[256] = {0};
        for(char ch : str) hsh[ch]++;
        

        for(int i = 0; i < 256; i++)
        {
            if(hsh[i] > 1) 
            {
                flag = 1;
                break;
            }
        }
        if(flag) cout << "Yes\n";
        else cout << "No\n";
    }
}
