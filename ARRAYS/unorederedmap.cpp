// -------------------JAI SHREE KRISHNA-------------------
#include <iostream>
#include <unordered_map>
#include<bits/stdc++.h>

using namespace std;

int main(){
unordered_map<string,int>umap;
umap["vipul"]= 45;
umap["ratan"]= 20;
umap["pranay"]= 30;
for (auto x : umap)
cout<<x.first <<" "<<x.second<<endl;
}