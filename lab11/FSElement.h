#pragma once
#include <memory>
#include <string>
#include <iostream>

class FSElement
{
public:
    FSElement(const char * name) : _name(name) {}
    virtual ~FSElement() = default;
    virtual void print(unsigned indent = 0) const = 0;
    std::string name() const { return _name; }
protected:
    std::string _name;
};

std::ostream& operator<<(std::ostream& str, const FSElement& el);