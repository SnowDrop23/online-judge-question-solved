
#include <iostream>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, x;
        cin >> a >> b;
        x = a^b;
        cout << x << endl;
    }
}
