#include <QtGui>
#include "Interval.h"
#include "Number.h"

#if defined TEST
 #define TEST_COMMON_DLLSPEC Q_DECL_EXPORT
#else
 #define TEST_COMMON_DLLSPEC Q_DECL_IMPORT
#endif
template <typename T>
T f(T  x);
template <typename T>
T df(T  x);


extern "C" TEST_COMMON_DLLSPEC ean::Number<long double> function(ean::Number<long double> x)
{
    return f<ean::Number<long double>>(x);
}
extern "C" TEST_COMMON_DLLSPEC ean::Interval ifunction(ean::Interval x)
{
    return f<ean::Interval>(x);
}
extern "C" TEST_COMMON_DLLSPEC ean::Number<long double> dfunction(ean::Number<long double> x)
{
    return df<ean::Number<long double>>(x);
}
extern "C" TEST_COMMON_DLLSPEC ean::Interval idfunction(ean::Interval x)
{
    return df<ean::Interval>(x);
}
