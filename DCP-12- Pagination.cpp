#include<iostream>
using namespace std;
void ch(int n,int a)
    {
        int k=0;
        if(n<=6){
            cout<<1;
            for(int i=2;i<=n;i++)
                cout<<" "<<i;
            k=1;
        }
        else if(a<=4){
            for(int i=1;i<=6;i++){
                cout<<i<<" ";
            }
            a=6;
        }
        else {
            int x=0,y=a-2;
            cout<<1;
            if(a+2>n)
                y=n-4;
            for(int i=y;i<=a+2;i++){
                if(i>n){
                    k=1;
                    break;
                }
                cout<<" "<<i;
                x=i;
            }
            a=x;
            if(x==n)
                k=1;
            else
                cout<< " ";
        }

        if(k==0){
            for(int i=0;i<5;i++)
                cout<<".";
            if(a+1<=n-4){
                for(int i=n-4;i<=n;i++)
                    cout<<" "<<i;
            }
            else{
                for(int i=a+1;i<=n;i++)
                    cout<<" "<<i;
            }
        }
        cout<<endl;
    }
int main()
    {
        int k;
        cin>>k;
        for(int p=1;p<=k;p++){
            int n;
            cin>>n;
            int a,b=0;
            cout<<"Case "<<p<<":"<<endl;
            while(cin>>a && a!=0){
                ch(n,a);
            }
        }
        return 0;
    }

