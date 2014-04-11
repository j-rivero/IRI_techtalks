#include <boost/filesystem.hpp>
#include <iostream>

int main(int argc, char * argv[])
{
    boost::filesystem::path path;
    path = boost::filesystem::temp_directory_path() / "database";
    boost::filesystem::create_directory(path);

    if (boost::filesystem::is_directory(path))
        std::cout << "Looks like it works" << std::endl;

    return 0;
}
