#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long M=1e9+7;
long long poww(long long a,long long b)
{
    long long ans=1;
    while(b)
    {
        if(b%2)
        {
            ans=(ans*a);
        }
        a=(a*a);
        b=b/2;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll size,data,key,x,sum;
    cin>>size;
    size=size=size-16;
    vector<vector<ll>>v;
    vector<ll>ex;
    while(1)
    {
        cin>>x;
        if(x==4)
        {
            break;
        }
        if(x==2)
        {
            cout<<v.size()<<" ";
            for(ll i=0;i<v.size();i++)
            {
                cout<<v[i].size()-1<<" ";
            }
            cout<<"\n";
        }
        if(x==3)
        {
            cin>>key;
            sum=0;
            for(ll i=0;i<v.size();i++)
            {
                for(ll j=0;j<v[i].size();j++)
                {
                    if(key==v[i][j])
                    {
                        cout<<i<<" "<<j<<"\n";
                        sum=-1;
                        break;
                    }
                }
                if(sum==-1)
                {
                    break;
                }
            }
            if(sum==0)
            {
                cout<<"-1 -1\n";
            }
        }
        if(x==1)
        {
            cin>>data>>key;
            sum=0;
            for(ll i=0;i<v.size();i++)
            {
                if(v[i][0]>=data+4)
                {
                    v[i].push_back(key);
                    sum=-1;
                    break;
                }
            }
            if(sum==0)
            {
                ex.push_back(size-data);
                ex.push_back(key);
                v.push_back(ex);
                ex.clear();
            }
        }
    }
    return 0;
}