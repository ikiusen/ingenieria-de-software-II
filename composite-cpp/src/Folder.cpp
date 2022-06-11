#include <Folder.h>

Folder::Folder(std::string nodeName){
    m_nodeName = nodeName;
}

Folder::~Folder(){}

void Folder::list(int depth){
    std::string newStr(depth, '-');
    std::cout << newStr << m_nodeName << " depth: " << depth << std::endl;
    for(IListable* child : m_children){
        if(child != 0){
            child->list(depth + 1);
        }
    }
}
void Folder::add(IListable* component){
    m_children.push_back(component);
}

void Folder::remove(IListable* component){
    m_children.erase(std::remove(m_children.begin(), m_children.end(), component), m_children.end());
}
