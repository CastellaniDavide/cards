#include <bits/stdc++.h>
using namespace std;

#define DEBUG

long long solve(long long N, long long R, long long C)
{
    int counter = 0;
    int mymin, mymax;
    mymin = mymax = C - 1;

    for (int i = R - 1; i >= 0; --i)
    {
        counter += mymax - mymin + 1;
#ifdef DEBUG
        cout << i << "\t" << mymin << "\t" << mymax << "\t" << counter << endl;
#endif // DEBUG
        if (mymax == i && mymin == 0)
            return counter + (i) * (i + 1) / 2;
        if (mymin != 0)
            mymin--;
        if (mymax == i)
            mymax--;
    }

    return counter;
}

int main()
{
    long long N, R, C;
    assert(3 == scanf("%lld %lld %lld", &N, &R, &C));
    printf("%lld\n", solve(N, R, C));
    return 0;
}

