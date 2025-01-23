
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str1, str2, str3;
        cin >> str1 >> str2 >> str3;
        if(str1[0] == '?' || str1[1] == '?' || str1[2] == '?')
	    {
	        char sum = ('A' + 'B' + 'C' + '?') - (str1[0] + str1[1] + str1[2]);
	        cout << sum << endl;
	        
	    }
        if(str2[0] == '?' || str2[1] == '?' || str2[2] == '?')
	        {
	            char sum = ('A' + 'B' + 'C' + '?') - (str2[0] + str2[1] + str2[2]);
	            cout << sum << endl;
	            
	        }
        if(str3[0] == '?' || str3[1] == '?' || str3[2] == '?')
	        {
	            char sum = ('A' + 'B' + 'C' + '?') - (str3[0] + str3[1] + str3[2]);
	            cout << sum << endl;
	            
	        }

    }

   
}
