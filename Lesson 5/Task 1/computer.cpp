#include "computer.h"


computer::computer()
{

}

void computer::list_info()
{
    computer pc;

    if(video.getPrice() > 0 && video.getBenchmark() > 0)
    {
        cout << "\nVideocard\n" << endl;
        cout << "Name:" << video.getName()  << endl;
        cout << "Family:"  << video.getFamily() << endl;
        cout << "Score:" << video.getBenchmark() << '\n' << endl;
    }
    if(processor.getPrice()>0&&processor.getscore()>0&&processor.getGHZ()>0&&processor.getgeneric()>0)
    {
        cout << "CPU\n" << endl;
        cout << "Name:" << processor.getname() << endl;
        cout << "Manufacture:" << processor.getmanuf() << endl;
        cout << "Frequency:" << processor.getGHZ() << endl;
        cout << "Generation:" << processor.getgeneric() << endl;
        cout << "Socket:" << processor.getsocket() << '\n' << endl;
    }
    if(mum.getPrice()>0)
        {
         cout << "Motherboard\n" << endl;
         cout << "Model:" << mum.getmodel() << endl;
         cout << "Manufacture:" << mum.getmanuf() << endl;
         cout << "Socket:" <<  mum.getsocket() << endl;
        }
         cout << "Everything will costs:" << getsum() << '\n' << endl;
}

void computer::addGPU(string name, string family, float benchmark, double price)
{
    gpu video;

    video.setName(name);
    video.setFamily(family);
    video.setBenchmark(benchmark);
    video.setPrice(price);

    if(price > 0 && benchmark > 0)
    {
        setGPU(video);
    }
    else cout <<"Error! Price or Score cannot be 0!";

}


void computer::addCpu(string name, string manuf, double price, int generic, float ghz, string socket, float score)
{
    cpu processor;

    processor.setname(name);
    processor.setmanuf(manuf);
    processor.setGHZ(ghz);
    processor.setgeneric(generic);
    processor.setPrice(price);
    processor.setsocket(socket);
    processor.setscore(score);

    if(price > 0 && ghz > 0 && generic > 0 && score > 0)
        setCPU(processor);
    else cout << "Error! Price or GHZ or Generic or Score cannot be 0!";

}



void computer::addMothercard(string manuf, int price, string socket, string model)
{
    mothercard mum;

    mum.setPrice(price);
    mum.setmanuf(manuf);
    mum.setsocket(socket);
    mum.setmodel(model);

    if(price > 0)
        setMothercard(mum);
    else cout << "Error! Price can't be zero!";

}

void computer::setCPU(cpu processorA)
{
    if(processorA.getsocket().compare(mum.getsocket()) == 0 ||mum.getsocket().compare("NOSOCKET") == 0)
    {
        processor = processorA;
        cpu_ghz = processor.getscore();
        PC_socket = processor.getsocket();
        appsum(processor.getPrice());
    }
    else cout <<"Error,socket does not fit! ";
}

void computer::setMothercard(mothercard mother)
{
    if(mother.getsocket().compare(processor.getsocket()) == 0 || processor.getsocket().compare("NOSOCKET") == 0)
    {
        mum = mother;
        sum += mother.getPrice();
    }
    else cout << "Error,socket does not fit!";
}

void computer::setGPU(gpu videoR)
{
    video = videoR;
    video_benchmark = video.getscore();
    sum += video.getPrice();
}


