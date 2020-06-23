#include <QCoreApplication>
#include <iostream>
#include <string>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
        setlocale(0, "UA");
        int k=0;
        double ch=0.0;
        std :: string str;
        std :: cout<<"Enter a text: ";
        std::getline(std::cin,str);

        char *mass=new char[str.length()];
        int *arr=new int [str.length()];
        for (int i=0;i<str.length();i++)
        arr[i]=0;
        while (k<str.length())
        {
        for (int i=0; i<str.length();i++)
        if (str[k]==str[i])
        arr[k]++;
        mass[k]=str[k];
        k++;
        }

        for (int i=0; i<str.length();i++){
        if (arr[i]>1)
        ch+=arr[i];
        std :: cout<<mass[i]<<" - "<<arr[i]<<std :: endl;}
        std :: cout<<"Answer: "<<(ch/2)/str.length();
    return a.exec();
}
