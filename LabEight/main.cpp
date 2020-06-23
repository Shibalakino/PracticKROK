#include <QCoreApplication>
#include <iostream>
long long factorial(long long);
namespace {
struct sf_t {
  long long fact;
   long long  sum;
};
sf_t sum_factorials_( long long  n)
{
  sf_t t;

  switch (n) {
  case 0u:
    t.fact = 0u;
    t.sum = 0u;
    break;
  case 1u:
    t.fact = 1u;
    t.sum = 1u;
    break;
  default:
    t = sum_factorials_(n - 1u);
    t.fact *= n;
    t.sum += t.fact;
  }
  return t;
}
}

unsigned sum_factorials(unsigned n)
{
  return sum_factorials_(n).sum;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   long long num;
    std::cout << "Enter N-factorial" << std::endl;
    std::cin >> num;
    std::cout << "Factorial is :" << sum_factorials(num)<< std::endl;
    return a.exec();
}
