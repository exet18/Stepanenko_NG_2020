#ifndef COMPUTERPICKER_H
#define COMPUTERPICKER_H
#include<vector>
#include<computer.h>
#include<iostream>

using namespace std;




class computerpicker
{
public:
    computerpicker();

    void addComputer(computer pc);
    void findByPrice(int price);
    void findBySocket(string socket);
    void findByVideocardBenchmark(int score);
    void findByCpuBenchmark(int score);

    void Show_Everthing();



private:
    vector<computer> computers;
};

#endif // COMPUTERPICKER_H
