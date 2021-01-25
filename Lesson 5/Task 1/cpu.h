#ifndef CPU_H
#define CPU_H
#include<all_info.h>
#include<string>
using namespace std;

class cpu:public all_info

{
public:
    cpu();

     void setmanuf(string value){manuf=value;};
     string getmanuf(){return manuf;};

     float getGHZ(){return ghz;};
     void setGHZ(float value){ghz = value;};

     int getgeneric(){return generic;};
     void setgeneric(int value){generic = value;};

     void setsocket(string value){socket=value;};
     string getsocket(){return socket;};

private:

    string name;
    string manuf;
    float ghz;
    int generic;
    int price;
    int score;
    string socket;
};

#endif // CPU_H
