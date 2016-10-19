#include<iostream>
#include<utility>
#include<string>
#include<map>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct pair<int,float> PAIR_IF;
bool judge(const pair<int,float>a,const pair<int,float>b)
{
  return a.first<b.first;
  //return a.second<b.second;
}
int main(int argc, char const *argv[]) {
  pair<string,string>pr1=make_pair("hehe","ejje");
  pair<string,int> pr2("hehe",12);
  pair<string,int>pr3={"test",13};
  pair<string,int> *prp=new pair<string,int>("yards",9);
  cout<<"pr1.first="<<pr1.first<<",  pr1.second="<<pr1.second<<endl;
  cout<<pr2.first<<endl;
  cout<<pr2.second<<endl;
//cout<<"pr1>?pr2"<<pr1>pr2<<endl;

cout<<prp->first<<"="<<prp->second<<endl;
PAIR_IF pr4=make_pair(14,2.0f);
cout<<pr4.first<<" "<<pr4.second<<endl;
pr4.first=16;
pr4.second=20.0f;
cout<<pr4.first<<" "<<pr4.second<<endl;
PAIR_IF pr5=make_pair(16,3.0f);
PAIR_IF pr6=make_pair(17,4.0f);
PAIR_IF pr7=make_pair(10,1.0f);
vector<pair<int,float>>vp;
vp.push_back(pr4);
vp.push_back(pr5);
vp.push_back(pr6);
vp.push_back(pr7);

map<string,string> dict;
dict["hehe"]="shuangzhu";
dict["test"]="qixuxiang";
map<string,string>::const_iterator iter;
for(iter=dict.begin();iter!=dict.end();iter++)
{
  cout<<iter->first<<"="<<iter->second<<endl;
}
sort(vp.begin(),vp.end(),judge);
for(auto i=0;i<vp.size();i++)
{
  cout<<vp[i].first<< "   "<<vp[i].second<<endl;
}
  return 0;
}
