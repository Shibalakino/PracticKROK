#include <QCoreApplication>
#include <string>
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    char lat[100];
    int count = 0 ;

    std::cin.getline(lat,100);

    for (int i = 0; i < strlen(lat);i++){

        switch(lat[i]){

         case 'M':
            count += 1000;
            break;
        case 'D':
            count += 500;
            break;
        case 'C':

            if ( i+1 < strlen(lat) && (lat[i + 1] == 'D' || lat[i + 1] == 'M' ) )
                count -= 100;
            else
                count += 100;
            break;
        case 'L':
            count += 50;
            break;
        case 'X':
            if (i+1 < strlen(lat) && (lat[i + 1] == 'L' || lat[i + 1] == 'C' || lat[i + 1] == 'M')  )
                count -= 10;
            else
                count += 10;

            break;
        case 'V':
            count += 5;
            break;
        case 'I':
           if (i+1 < strlen(lat) && (lat[i + 1] == 'V' || lat[i + 1] == 'X' || lat[i + 1] == 'C'))
                count -= 1;
           else count +=1;

            break;

        }


    }

    std::cout << count << std::endl;
    return a.exec();
}
