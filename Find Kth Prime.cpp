https://www.spoj.com/problems/TDKPRIME/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool p[90000001];
vector<int>prime;
void prime_sieve()
{
    int maX = 90000000;

    for(int i=2; i*i<maX; i++)
    {
    	if(!p[i]){
        for(int j = i*i; j<=maX ; j=j+i)
        p[j] = true;
    	}
    }
    p[1]=true;
    p[0]=true;
    p[2]=false;
    
    for(int i=0;i<=maX;i++)
    {
        if(!p[i])
        prime.push_back(i);
    }
}
int main() {
   
    prime_sieve();
    int q;
    cin>>q;
    while(q--)
    {
    	ll n;
    	cin>>n;
    	cout<<prime[n-1]<<endl;
    }
}
