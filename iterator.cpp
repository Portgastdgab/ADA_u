#include <vector>
#include <list>
#include <iostream>

template <typename Container> 
void Write(Container &ds, std::ostream &os)
{
    typename Container::iterator iter = ds.begin();
    for (; iter != ds.end(); ++iter)
    {
        os << *iter << "\n";
    }
}

int main(int argc, char* argv[])
{
    std::list<float> mylist;
    std::vector<float> myvector;

    for (int i = 0; i < 10; ++i)
    {
        mylist.push_back(i);
        myvector.push_back(i + 10);
    }

    Write(mylist, std::cout);
    Write(myvector, std::cout);
    
    return 0;
}