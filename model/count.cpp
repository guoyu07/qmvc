#include "count.h"

Count::Count() : mValue(0) {}

int Count::value()
{
    return mValue;
}

void Count::setValue(int value)
{
    mValue = value;
}
