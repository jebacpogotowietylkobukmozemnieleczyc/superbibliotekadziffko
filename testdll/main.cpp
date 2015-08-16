#include <iostream>

#include <QLibrary>
using namespace std;

template <typename T>
double d(T i){
    return i*i;
}

//template <typename T> typedef double (*MyPrototype)(T);
int main()
{
/*
MyPrototype dfunction =
        (MyPrototype) QLibrary::resolve("testlib", "dfuntion");
if(dfunction==NULL)std::cout << "lipa ziomek dfunction" << std::endl;

MyPrototype function =
        (MyPrototype) QLibrary::resolve("testlib", "funtion");
if(function==NULL)std::cout << "lipa ziomek function" << std::endl;
    cout << "Hello World! " << function<int>(10)<< " " << dfunction<int>(10)<< endl;

    return 0;
    *
    */
    class Interval;
    typedef long double(*mp)(long double);
   // typedef Interval (*mp2)(Interval);
   mp m= //&d<int>;
        (mp) QLibrary::resolve("testlib", "function");
   mp m2= //&d<int>;
        (mp) QLibrary::resolve("testlib", "dfunction");
if(m==NULL)std::cout << "lipa ziomek function" << std::endl;
   //double (*p)(double) = &d<double>;
   std::cout << std::scientific <<m(5.5) << std::endl ;
   std::cout << std::scientific <<  m2(5.5) << std::endl ;
}


