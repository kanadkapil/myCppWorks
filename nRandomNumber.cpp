#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    // time(nullprt);
    long elapsedSeconds = time(0); // seconds from jan 1970
    srand(elapsedSeconds);
    int n = rand()%10; // for 0 to 9 digits
    cout << n<<endl;
    // cout << elapsedSeconds;
    return 0;
}
