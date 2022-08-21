#include <bits/stdc++.h>

using namespace std;

int main(){
string s;
cin>> s;
int k;
char p;
set<string> e;
e.insert(s);
k= s.size();
for (int i=0;i<k;i++){
    p=s[k-1];
    s.erase(k-1);
    s = p+s;
    e.insert(s);
}
int cont;
cont = e.size();
cout<<cont;
}
