#pragma once

#include <string>

inline std::string lib1Func(){
    auto identity = [](auto x) {
        return x;
    };
    identity(3);
    auto p = [](){return "hello";};
    return p();
}