#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
    fs::create_directory("temp");
    fs::copy("temp", "temp_copy");
    fs::remove("temp");
    fs::remove("temp_copy");
        
    return 0;
}
