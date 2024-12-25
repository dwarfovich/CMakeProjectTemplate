#pragma once

#include <boost/filesystem.hpp>

#include <string>

inline std::string lib1Func(){
    boost::filesystem::path path {"C:/"};



    return "lib1";
}