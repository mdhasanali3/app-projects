#include<bits/stdc++.h>
#include<iterator>
#include<sstream>
#include<istream>
#include<fstream>
#include<string>
#include<iostream>

#define ll long long

using namespace std;
//ll s,y,v,x,k=1,m,d,n,o=73568475;

class csvrow
{

    public:
    string const& operator[](size_t index)const
    {
        return m_data[index];
    }
    size_t size()const
    {
        return m_data.size();
    }
    string readnextrow(istream& str)
    {
        string line;
        getline(str,line);
        stringstream lineStream(line);
       string cell;

        m_data.clear();

        while(getline(lineStream,cell,','))
        {
            m_data.push_back(cell);

        }
        if(!lineStream && cell.empty())
           {
              m_data.push_back("");
           }
    }
  private:
    vector<string>m_data;

};
istream& operator>>(istream& str,csvrow& data)
{
    data.readnextrow(str);
    return str;
}
int main()
{

string food,diss,dis,rating,price,district,restu,item;
cout<<"enter district :  ";
cin>>diss;
 ifstream data("Document.csv");
//csvrow row;
ifstream ata("Document.csv");
if(data.is_open()){
while(getline(data,food))
{
    stringstream ss(food);
    getline(ss,district,',');
    getline(ss,restu,',');

    if(district==diss)
        cout<<restu<<endl;

}
}
else
    cout<<"error";
data.close();

string itemname,line;
    cout<<"enter food name  : ";
    cin>>itemname;
    if(ata.is_open()){
while(getline(ata,line))
{
    stringstream ds(line);
    getline(ds,district,',');
    getline(ds,restu,',');
     getline(ds,item,',');
    getline(ds,price,',');
    getline(ds,rating,',');


    if(district==diss&&item==itemname)
        cout<<district<<"  "<<restu<<"  "<<item<<"  "<<price<<"  "<<rating<<endl;

}}
else
    cout<<"error";
ata.close();
















































































}
