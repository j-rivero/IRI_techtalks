/*
 * Code to demo shown features of boost filesystem
 *
 * Jose Luis Rivero 
 * jrivero@osrfoundation.org
 */

#include <boost/filesystem.hpp>
#include <iostream>

int main(int argc, char * argv[])
{
    boost::filesystem::path path(argv[1]);
    if (boost::filesystem::exists(path))
    {
        if (boost::filesystem::is_directory(path))
        {
            std::cout << "Directory exists" << std::endl;
            boost::filesystem::directory_iterator iter(path);
            boost::filesystem::directory_iterator end;
            for (iter ; iter !=end; ++iter)
                std::cout << iter->path() << std::endl;
        }
        else if (boost::filesystem::is_regular_file(path))
            std::cout << "File exists" << std::endl;
        else
            std::cout << "WTF is that" << std::endl;
    }

    return 0;
}
