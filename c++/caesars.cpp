#include<iostream>
using namespace std;
string encrypt(string s,int k)
{

    int l=s.length();
    string enc="";
    for(int i=0;i<l;i++)
        enc+=static_cast<char>(65+((s[i]-'A')+k)%26);

    return enc;
}
string decrypt(string s,int k)
{
    int l=s.length();
    string dec="";
    for(int i=0;i<l;i++)
        dec+=static_cast<char>(65+(s[i]-'A'+26-k)%26);
    return dec;
    
}
string upper(string s)
{
    int l=s.length();
    int x=32;
    for(int i=0;i<l;i++)
    {
        s[i]=s[i]&(~x); 
    }
    return s;
}
int bruteForceAttacks(string s)
{
    //just check for all the k's(0,25) if the sentence makes sense;
}
int main()
{

    string s="satInder";
    s=upper(s);
    cout<<s<<endl;
    int k=8;
    //cout<<"enter string and key"<<endl;
    //cin>>s;
    //cin>>k
    string enc=encrypt(s,k);
    cout<<enc<<endl;
    cout<<decrypt(enc,k);

    return 0;
}