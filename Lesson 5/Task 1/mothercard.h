#ifndef MOTHERCARD_H
#define MOTHERCARD_H
#include<all_info.h>
using namespace std;


class mothercard:public all_info
{
public:
    mothercard();

   void setmodel(string value){model=value;};
   string getmodel(){return model;};

   void setsocket(string value){socket=value;};
   string getsocket(){return socket;};

   void setmanuf(string value){manuf=value;};
   string getmanuf(){return manuf;};

private:
   string manuf;
   string model;
   string socket;

   int price = 0;
};

#endif // MOTHERCARD_H
