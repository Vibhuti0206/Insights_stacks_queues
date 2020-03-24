#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int A[n];
	for(int i=0;i<n;i++)
	 cin>>A[i];
    stack<int>v;
    long long int sum =0,max=0,count=0,ele;
    v.push(0);
    int i;
    for( i =1;i<n;i++)
    {
        if( v.empty() ||A[i]>=A[v.top()])
            v.push(i);
        else if(A[i]<A[v.top()])
        {
            while(!v.empty() && A[i]<A[v.top()])
            {
                ele = v.top();
                v.pop();
                if(!v.empty())
                {
                    sum = A[ele]*(i-v.top()-1);
                }
                else
                {
                    sum = A[ele]*i;
                }
                if(sum>max)
                    max=sum;
            }
            v.push(i);
        }
    }
    while(!v.empty())
    {
        ele = v.top();
                v.pop();
                if(!v.empty())
                {
                    sum = A[ele]*(i-v.top()-1);
                }
                else
                {
                    sum = A[ele]*i;
                }
                if(sum>max)
                    max=sum;
    }
    cout<<max;

	return 0;
}
