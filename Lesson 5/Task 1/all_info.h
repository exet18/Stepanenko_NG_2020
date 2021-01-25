#ifndef ALL_INFO_H
#define ALL_INFO_H
#include<string>

using namespace std;


class all_info
{
    public:
        all_info();

        int getPrice(){return price;};
        void setPrice(int value){price = value;};

        void setname(string value){name=value;};
        string getname(){return name;};

        int getscore(){return score;};
        void setscore(int value){score = value;};


    private:

        string name;
        int score;
        int price;
};


#endif // ALL_INFO_H
