#pragma once
#include "Stratiflow.h"
#include <string>

std::string ExecuteShell(const std::string& cmd);

void MakeCleanDir(const std::string& dir);

void MoveDirectory(const std::string& from, const std::string& to);

template<typename T>
void LoadVariable(const std::string& filename, T& into, int index)
{
    std::ifstream filestream(filename, std::ios::in | std::ios::binary);

    filestream.seekg(N1*N2*N3*index*sizeof(stratifloat));
    into.Load(filestream);
}
