

    #include <iostream>
    #include <cassert>
    using namespace std;
    const long long MOD = 1e9 + 7;
    const int MAX = 55;
    long long a[MAX];
    long long gcd(long long a, long long b)
    {
    	if(b == 0) return a;
    	else return gcd(b, a % b);
    }
    long long mpow(long long a, long long b)
    {
    	long long ret = 1;
    	while(b)
    	{
    		if(b & 1) ret = (ret * a) % MOD;
    		b >>= 1;
    		a = (a * a) % MOD;
    	}
    	return ret;
    }
    int main()
    {
    	int n;
    	long long g, ans, pro;
    	cin >> n;
    	assert(1 <= n and n <= 50);
    	for(int i = 0;i < n;++i)
    	{
    		cin >> a[i];
    		assert(1 <= a[i] and a[i] <= 1000);
    	}
    	g = a[0];
    	pro = 1;
    	for(int i = 0;i < n;++i)
    	{
    		g = gcd(a[i], g);
    		pro = (pro * a[i]) % MOD;
    	}
    	ans = mpow(pro, g);
    	cout << ans << endl;
    	return 0;
    }

