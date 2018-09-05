#include <bits/stdc++.h>

using namespace std;

int a[112345];


int main()
{
	int mask = 1<<5;
	int a = 1<<0;
	cout<<mask<<" "<<a<<endl;
	cout<<(mask & a)<<endl;
	
	return 0;
}

// dp[2^10][101] .. in dp[i][j], i denotes the mask i.e., it tells that
// how many and which persons are wearing cap. j denotes the first j caps
// used. So, dp[i][j] tells the number ways we assign j caps to mask i
// such that none of them wears the same cap
