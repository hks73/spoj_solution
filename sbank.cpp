#include <iostream>
#include <set>
#include <map>
#include <string>
#include <cstdio>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int count;
        char dummy;
        map<string, int> table;
        map<string, int>::iterator it;
        char str[40];
        cin>>count;
        while(count--)
        {
            gets(str);
            table[(string)str]++;
        }
        for( it = table.begin(); it != table.end(); it++){
            printf("%s %d\n", it->first.c_str(), it->second);
        }
        printf("\n");
    }
}