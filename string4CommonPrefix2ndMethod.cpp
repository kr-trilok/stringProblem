#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string>str){
    int ans_length=str[0].size();

    for(int i=1; i<str.size(); i++){
        int j=0;//column
        while(j<str[0].size() && j<str[i].size() && str[0][j]==str[i][j]){
            j++;
        }
        ans_length=min(ans_length,j);

    }

    return str[0].substr(0,ans_length);
}

int main(){
    int size;
    cout<<"enter size of your string: ";
    cin>>size;
    vector<string>str(size);
    cout<<"enter element inside your string vector\n";
    for(int i=0; i<size; i++){
        cin>>str[i];
    }
    cout<<"Longest Prefix is : "
        <<longestCommonPrefix(str)<<endl;

    return 0;
}