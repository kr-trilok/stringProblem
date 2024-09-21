#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string longestPrefix(vector<string>s){
    sort(s.begin(),s.end());//1st arranged array in lexicographical  order
    string str1=s[0],str2=s[s.size()-1];
    string arr="";
    for(int i=0; i<s.size(); i++){
        if(str1[i] == str2[i]) arr+=str1[i];
        else break;
    }
    return arr;

}
int main(){
    int n;
    cout<<"enter size of string array: ";cin>>n;
    vector<string>s(n);
    cout<<"enter string inside your array\n";
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    cout<<"your longest prefix is \n";
    cout<<longestPrefix(s);
    return 0;
}