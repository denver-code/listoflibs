#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
int main()
{
    std::filesystem::path cwd = std::filesystem::current_path();
    cwd /= "bin";
    for (const auto & entry : fs::directory_iterator(cwd))
        if (entry.path().extension() == ".shed")
            std::cout << entry.path().filename().string().substr(0, entry.path().filename().string().find(".")) << std::endl;

}