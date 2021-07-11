#include <bits/stdc++.h>
using namespace std;

//#define DEBUG

long long solve(long long N, long long R, long long C)
{
    return C*(R-C+1);
}

int main()
{
    long long N, R, C;
    assert(3 == scanf("%lld %lld %lld", &N, &R, &C));
    printf("%lld\n", solve(N, R, C));
    return 0;
}

