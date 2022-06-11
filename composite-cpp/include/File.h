#ifndef FILE_H
#define FILE_H
#include <IComposableOfListable.h>
#include <iostream>

class File : public IListable
{
    private:
        std::string m_nodeName;
    public:
        File(std::string nodeName);
        ~File();
        void list(int depth);
};
#endif

