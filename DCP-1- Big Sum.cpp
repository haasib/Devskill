#include<bits/stdc++.h>
using namespace std;
int e=-1,f=-1;
int ar[101],br[101],cr[105];
void cal(string s)
    {
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==',')c=1;
            else if(!c)ar[++e]=s[i]-48;
            else br[++f]=s[i]-48;
        }
    }
int main()
    {
        string s;
        while(cin>>s){
            e=-1;
            f=-1;
            cal(s); //Dividing two Numbers
            int counter=0,in=-1;
            int i=-1,j=-1;
            while(i<e && j<f){
                int temp=ar[++i]+br[++j]+counter;
                if(i==e && f==j){
                    if(temp>9){ // If two numbers are of same length and last have a counter
                        cr[++in]=temp-10;
                        cr[++in]=1;
                    }
                    else cr[++in]=temp;
                }
                else if(temp>9){
                    cr[++in]=temp-10;
                    counter=1;
                }
                else{
                    cr[++in]=temp;
                    counter=0;
                }
            }
            if(i<e){ // If the second number is short
                while(i<e){
                    int temp=ar[++i]+counter;
                    if(i==e){
                        if(temp>9){
                            cr[++in]=temp-10;
                            cr[++in]=1;
                        }
                        else cr[++in]=temp;
                    }
                    else if(temp>9){
                        cr[++in]=temp-10;
                        counter=1;
                    }
                    else{
                        cr[++in]=temp;
                        counter=0;
                    }
                }
            }
            else if(j<f){ // If 1st Number is short
                while(j<f){
                    int temp=br[++j]+counter;
                    if(f==j){
                        if(temp>9){
                            cr[++in]=temp-10;
                            cr[++in]=1;
                        }
                        else cr[++in]=temp;
                    }
                    else if(temp>9){
                        cr[++in]=temp-10;
                        counter=1;
                    }
                    else{
                        cr[++in]=temp;
                        counter=0;
                    }
                }
            }
            int c=0;
            for(int i=0;i<=in;i++){
                if(!c && cr[i]==0)continue;
                else{
                    printf("%d",cr[i]);
                    c=1;
                }
            }
            printf("\n");
        }
        return 0;
    }
