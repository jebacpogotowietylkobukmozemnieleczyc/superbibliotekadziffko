#include <QtGui>
#include "widget.h"
/*
template <typename T>
T f(T x)
{
    T m(2);
    return x*x-m;
}
template <typename T>
T df(T x)
{
    T m(2);
    return m*x;
}
*/
template <typename T>
T f(T x)
{
    T m(0.5);
    return x.sin().get()*(m+x.sin().get())-m;
}
template <typename T>
T df(T x)
{
    T m(2);
    T m2(0.5);
    return (x*m).sin().get()+m2*x.cos().get();
}
