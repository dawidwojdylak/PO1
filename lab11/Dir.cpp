#include "Dir.h"

void Dir::print(unsigned indent) const
{
    for (size_t i = 0; i < indent; i++)
        std::cout << "  ";
    std::cout << "\\ " << _name << "\n";
    for (const auto & i : _vec)
        i -> print(indent + 1);
}  

void Dir::add(std::shared_ptr<FSElement> el)
{
    _vec.push_back(el);
}

std::shared_ptr<FSElement> Dir::get(std::string name)
{
    for(auto i : _vec)
    {
        if ( i -> name().compare(name) == 0 )
            return i;
        std::shared_ptr<Dir> d = std::dynamic_pointer_cast<Dir> (i);
        if(d != 0)
        {
            std::shared_ptr<FSElement> in_el = d -> get(name);
            if (in_el) 
                return in_el;
        }
    }
    return nullptr;          
}

std::shared_ptr<Dir> Dir::findDir(std::string name)
{
    std::shared_ptr< FSElement > el = get(name);
    std::shared_ptr< Dir > dir = std::dynamic_pointer_cast< Dir >(el);
    if( dir )
        return dir;
    return nullptr;
}

void Dir::rem(std::string name)
{
    for (size_t i = 0; i < _vec.size(); ++i)
    {
        if(_vec[i] -> name().compare(name) == 0)
            _vec.erase(std::begin(_vec) + i);
        std::shared_ptr<Dir> d = std::dynamic_pointer_cast<Dir> (_vec[i]);
        if(d)
        {
            std::shared_ptr<FSElement> in_el = d -> get(name);
            if (in_el)
                _vec.erase(std::begin(_vec) + i);
        }
    }
}