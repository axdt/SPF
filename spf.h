#ifndef SPF_H
#define SPF_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class SPF
{
private:
    ofstream fout;
    ifstream fin;
    string filename;
public:
    SPF(string filename);
    int readoutasint(int treeid);
        int readoutasint(string elementname);
        string readoutasstring(int treeid);
        string readoutasstring(string elementname);
        bool readoutasbool(int treeid);
        bool readoutasbool(string elementname);

};

#endif // SPF_H
