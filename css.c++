#include<bits/stdc++.h>
using namespace std;

int main()
{
    string msg;
    cout<<"enter the message to encrypt: ";

    getline(cin , msg);

    for(int i=0 ;i<msg.length();i++)
    {
       char ch = msg[i];
       msg[i]=ch+3;
    }
    cout<<"encrypted message is "<<msg;    

    bool decrypt;
    cout<<"\nwant to decrypt? (0/1)";
    cin>>decrypt;
    if(decrypt==1)
    {
        
    for(int i=0 ;i<msg.length();i++)
    {
       char ch = msg[i];
       msg[i]=ch-3;
    }
    cout<<"decrypted message is "<<msg;
    }
  return 0;
}