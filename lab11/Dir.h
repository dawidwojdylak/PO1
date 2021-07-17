#pragma once 

#include <memory>
#include <vector>
#include <iostream>
#include "FSElement.h"
#include <cstring>

class Dir : public FSElement
{
public:
    Dir(const char * name) : FSElement(name) {}
    void print(unsigned indent = 0) const override;
    void add(std::shared_ptr<FSElement> el);
    std::shared_ptr<FSElement> get(std::string name);
    std::shared_ptr<Dir> findDir(std::string name);
    void rem(std::string name);
private:
    std::vector<std::shared_ptr<FSElement>> _vec;
};


