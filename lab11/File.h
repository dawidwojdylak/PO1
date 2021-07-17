#pragma once
#include "FSElement.h"

class File : public FSElement
{
public:
    File(const char * name) : FSElement(name) {}
    void print(unsigned indent = 0) const override;
};

