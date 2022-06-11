#include <iostream>
#include <Folder.h>
#include <File.h>

int main()
{
    Folder* folder_01 = new Folder("folder_01");

    Folder* folder_02 = new Folder("folder_02");
    folder_01->add(folder_02);

    Folder* folder_03 = new Folder("folder_03");
    File* file_a = new File("file A");
    folder_03->add(file_a);
    File* file_b = new File("file A");
    folder_03->add(file_b);
    
    folder_02->add(folder_03);
    folder_01->list(1);

    delete folder_03;
    delete file_a;
    delete file_b;
    delete folder_02;
    delete folder_01;
    return 0;
}