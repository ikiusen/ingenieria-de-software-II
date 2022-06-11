#ifndef ILISTABLE_H
#define ILISTABLE_H
class IListable
{
    public:
        virtual ~IListable(){};
        virtual void list(int depth) = 0;
};
#endif

