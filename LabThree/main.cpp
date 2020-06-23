#include <QCoreApplication>
#include <iostream>
#include <time.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const int size = 15;
    const int max = 10;
    int i;
    int massA[size], massB[size], massC[max];
    srand(time(NULL));

    for (i = 0; i < size; i++)
    {
        massA[i] = rand() % max;
        std::cout << massA[i] << " ";
    }
     std::cout <<  std::endl;

    for (i = 0; i < max; i++)
        massC[i] = 0;

    int j = 0;
    for (i = 0; i < size; i++)
    {
        if (!massC[massA[i]])
        {
            massB[j++] = massA[i];
            massC[massA[i]] = 1;
        }
    }


    for (i = 0; i < j; i++)
    {
         std::cout << massB[i] << " ";
    }
     std::cout <<  std::endl;

    return a.exec();
}
