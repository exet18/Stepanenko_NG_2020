#ifndef GPU_H
#define GPU_H
#include<string>
#include <all_info.h>
using namespace std;

class gpu:public all_info
{
public:
    gpu();

    void setName(string nameR){name = nameR;}
    string getName(){return name;}

    void setBenchmark(float benchmarkR){benchmark = benchmarkR;}
    float getBenchmark(){return benchmark;}

    void setPrice(double priceR){price = priceR;}
    double getPrice(){return price;}

    void setFamily(string familyR){family = familyR;}
    string getFamily(){return family;}


private:

    string name;
    string family;
    float benchmark;
    double price;

};

#endif // GPU_H
