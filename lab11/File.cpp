#include "File.h"

void File::print(unsigned indent) const
{
    for (size_t i = 0; i < indent; i++)
        std::cout << "  ";
    std::cout << ". " <<_name << "\n";
    
}