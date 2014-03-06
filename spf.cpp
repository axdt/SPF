#include "spf.h"

using namespace std;
SPF::SPF(string filename)
{
    SPF::filename=filename;
}
int SPF::readoutasint(int treeid)
{
    int a=0;
    fin.open(SPF::filename);
    string avail;
    getline(fin,avail);
    cout<<avail<<endl;
    if(avail!="{begin lpi properties file}")
    {
        cout<<"Illegal lpi file:No begin block"<<endl;
    a=1;
    }
    return a;
}
int SPF::readoutasint(string elementname)
{
    int a;
    return a;
}
