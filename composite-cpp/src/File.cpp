#include <File.h>

File::File(std::string nodeName){
    m_nodeName = nodeName;
}

File::~File(){}

void File::list(int depth){
    std::string newStr(depth, '-');
    std::cout << newStr << m_nodeName << " depth: " << depth << std::endl;
}