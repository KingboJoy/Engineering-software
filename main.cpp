#include <iostream>

using namespace std;





long long frac_re(int n)
{
    if (n == 0 || n == 1) 
        return 1;
    else 
        return n * frac_re(n - 1);
}




int main() {

    int a = 20;
    cout << frac_re(a) << endl;
    
	return 0;
}