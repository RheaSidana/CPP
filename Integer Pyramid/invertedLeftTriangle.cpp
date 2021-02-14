/*
take an integer input and then draw the pattern according to it. Say for example if you enter 5 then, the pattern should be like this-
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5 

Input Format
You will take an integer input n from stdin.

Constraints
1 <= n <= 1000
*/

#include <iostream>
using namespace std;
int main(int argc, char *a[])
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<<j;
            if(j>i)cout<<" ";
        }
        if(i<n)cout<<endl;
    }
    return 0;
}
