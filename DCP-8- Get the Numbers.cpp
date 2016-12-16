#include<bits/stdc++.h>
using namespace std;


int main(){
//string ss="str"; ss+=ss; cout << ss;
        int n,testcase;

        scanf("%d", &testcase);

        for(int tt=1; tt<=testcase; tt++){

            vector <string> suc;
            vector <string> fail;
            vector <string> con;
            vector <string> orgi;
            string temp_s,temp_n,temp;

            scanf("%d", &n);

            for(int i=0; i<n; i++){cin>> temp; orgi.push_back(temp);}
                for(int i=0; i<n; i++){
                    temp=""; temp_n=""; temp_s="";
                    cin>> temp;
                        int k,in=-1,len=temp.length();
                        for(k=0; ; k++){
                            if(temp[k] == ',') break;
                            else temp_n+=temp[k];
                        }//cout << in << endl;
                        in=-1;
                        for(int j=k+1; j<len; j++) temp_s+=temp[j];

                        //cout << temp_n << "  " << temp_s << endl;
                        if(temp_s[0]=='S'&&temp_s[1]=='u'&&temp_s[2]=='c'
                        &&temp_s[3]=='c'&&temp_s[4]=='e'&&temp_s[5]=='s'
                        &&temp_s[6]=='s') suc.push_back(temp_n);

                        else fail.push_back(temp_n);
                }//cout << suc.size() << " " << fail.size() << endl;
                            for(int i=0; i<suc.size(); i++){
                                for(int j=0; j<fail.size(); j++){
                                    if(suc[i] == fail[j]) con.push_back(suc[i]);
                                }
                            }
                            int y;

                            cout << "Case: " << tt << endl;

                            cout << "Success list"<<endl;

                                for(int x=0; x<suc.size(); x++){
                                    int c=0;
                                    string s=suc[x];
                                        for(int y=0; y<con.size(); y++){
                                            string ss=con[y];
                                                if(s==ss) {c=1; break;}
                                        }
//cout<<"dfh";
                                    for(y=0; y<orgi.size(); y++){
                                        string ss=orgi[y];
                                        int same=1,z;
                                            for(z=0; z<ss.length(); z++){
                                                if(s[z]!=ss[z] && s[z]!='*'){same=0;break;}
                                            }
                                            if(same==1) {cout<<s<<" : " ; break;}
                                    }
                                            if(c==1) cout<<"Confused"<<endl;
                                            else cout << orgi[y]<<endl;
                                }

                                cout << "Failed list" << endl;

                                for(int x=0; x<fail.size(); x++){
                                    int c=0;
                                    string s=fail[x];
                                        for(int y=0; y<con.size(); y++){
                                            string ss=con[y];
                                                if(s==ss) {c=1; break;}
                                        }

                                    for(y=0; y<orgi.size(); y++){
                                        string ss=orgi[y];
                                        int same=1,z;
                                            for(z=0; z<ss.length(); z++){
                                                if(s[z]!=ss[z] && s[z]!='*'){same=0;break;}
                                            }
                                            if(same==1) {cout<<s<<" : " ; break;}
                                    }
                                            if(c==1) cout<<"Confused" << endl;
                                            else cout << orgi[y] << endl;
                                }
        }

return 0;
}
