#ifndef COMPUTER_H
#define COMPUTER_H
#include<string.h>
#include<string>
#include <gpu.h>
#include <cpu.h>
#include <mothercard.h>
#include <iostream>

using namespace std;


class computer
{
public:
    computer();
    void list_info();

    void setNamePC(string name){PC_name = name;}
    string getName(){return PC_name;}

    void addGPU(string name,string family,float benchmark,double price);
    void setGPU(gpu videoR);
    gpu getGPU(){return video;};

    void addCpu(string name, string manuf, double price, int generic, float ghz, string socket, float score);
    void setCPU(cpu processorA);
    cpu getCPU(){return processor;}

    void addMothercard(string manuf, int price, string socket, string model);
    void setMothercard(mothercard mother);
    mothercard getMother(){return mum;}

    void appsum(int a){sum+=a;};
    int getsum(){return sum;};

    string getsocket(){return PC_socket;};

    int getVideocardBenchmark(){return video_benchmark;};

    int getCPUGhz(){return cpu_ghz;};

private:

   string PC_name;
   gpu video;
   cpu processor;
   mothercard mum;
   int sum = 0;
   int video_benchmark;
   int cpu_ghz;
   string PC_socket;


};

#endif // COMPUTER_H
