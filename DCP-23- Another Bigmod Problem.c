#include<stdio.h>
#define ll long long
ll mmul(ll a, ll b, ll m) {
    ll result = 0;
    a %= m;
    while (b) {
        if (b % 2) result = (result + a) % m;
        a = (a + a) % m;
        b /= 2;
    }
    return result;
}
ll mpow(ll a, ll b, ll m) {
    ll result = 1;
    a %= m;
    while (b) {
        if (b % 2) result = mmul(result, a, m);
        a = mmul(a, a, m);
        b /= 2;
    }
    return result;
}

int main()
	{
		int tc,p;
		ll a,b,c;
		scanf("%d",&tc);
		for(p=1;p<=tc;p++){
			ll a,b,c;
			scanf("%lld %lld %lld",&a,&b,&c);
			printf("Case %d: %lld\n",p,mpow(a,b,c));
		}

		return 0;
	}
