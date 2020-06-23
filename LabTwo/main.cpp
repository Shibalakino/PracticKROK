#include <QCoreApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    using namespace std;

        const auto N = 10;
        double A[N];
        for (int i(0); i < N; i++)
        {
            cout << "Enter " << i << " element: ";
            cin >> A[i];
        }
        cout << "Ishodniy massiv:" << endl;
        for (int i(0); i < N; i++) cout << A[i] << " ";
        double max = A[0];
        for (int i(0); i < N; i++)
        {
            if (A[i] > max)
            {
                max = A[i];
            }
        }
        cout << "MAX element: " << max << endl;
        for (int i(0); i < N; i++)
        {
            if (A[i] == max)
            {
                A[i] = 0;
                break;
            }
        }
        cout << "Noviy massiv:" << endl;
        for (int i(0); i < N; i++) cout << A[i] << " ";
        cin.get();

    return a.exec();
}
