#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;
/*
int main(){
           vector<char>a;
           char b;
           while(b=getchar()){
                 if(b==' '||b=='\n'){
                        break;
                 }else{
                        a.push_back(b);
                 }
           }
           for(int i=0;i<a.size();++i){
                 cout<<a[i];
           }


            return 0;
}
*/
int main(){
            vector<char>a;
            string s;
            cin>>s;
            for(int i=0;s[i]!='\0';++i){
                        a.push_back((char)s[i]);
            }
            vector<char>::iterator it;
            for(it=a.begin();it!=a.end();++it){
                        cout<<*it;
            }
            return 0;
}





