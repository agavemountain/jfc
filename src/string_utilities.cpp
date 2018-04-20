#include <string_utilities.hpp>

namespace JFC
{

std::string wordwrap( std::string str, int width = 80 )
{
    size_t curWidth = width;

    while( curWidth < str.length() ) {
        std::string::size_type spacePos = str.rfind( ' ', curWidth );
        if( spacePos == std::string::npos )
            spacePos = str.find( ' ', curWidth );
        if( spacePos != std::string::npos ) {
            str[ spacePos ] = '\n';
            curWidth = spacePos + width + 1;
        }
    }

    return str;

}


};
