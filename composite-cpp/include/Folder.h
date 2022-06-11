#ifndef FOLDER_H
#define FOLDER_H
#include <IListable.h>
#include <IComposableOfListable.h>
#include <iostream>
#include <vector>
#include <algorithm>

class Folder : public IListable, public IComposableOfListable
{
    private:
        std::string m_nodeName;
        std::vector<IListable*> m_children;
    public:
        Folder(std::string nodeName);
        ~Folder();
        void list(int depth);
        void add(IListable* component);
        void remove(IListable* component);
};
#endif