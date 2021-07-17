#include "FSElement.h"

std::ostream& operator<<(std::ostream& str, const FSElement& el)
{
    el.print();
    return str;
}