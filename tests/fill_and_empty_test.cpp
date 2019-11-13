#include <cstdlib>
#include <vector>
#include "bst.hpp"
using namespace std;
#define SZ 100
#define MAX_POINTS 5

int main()
{
    BST<int> bst;
    vector<int> data;
    int i, points = 0;

    data.push_back(75);
    data.push_back(40);
    data.push_back(89);
    data.push_back(128);
    data.push_back(12);
    data.push_back(9);
    data.push_back(1);
    data.push_back(2);
    data.push_back(7);
    data.push_back(3);
    data.push_back(99);
    data.push_back(35);
    data.push_back(36);
    data.push_back(4);
    data.push_back(27);
    data.push_back(66);
    data.push_back(55);

cout<<"1st Fill data:"<<endl;
    for(i=0;i<data.size();i++)
    {
        cout<<"iter: "<<i<<" insert: "<<data[i]<<endl;
        bst.insert(data[i]);
    }
cout<<endl<<"1st remove loop"<<endl;
    for(i=0;i<data.size();i++)
    {
        cout<<"node count: "<<bst.get_size()<<" iteration: "<<i<<" data to remove: "<<data[i]<<endl;
        bst.remove(data[i]);
    }
cout<<"2nd Fill data:"<<endl;
    for(i=0;i<data.size();i++)
    {
        cout<<"iter: "<<i<<" insert: "<<data[i]<<endl;
        bst.insert(data[i]);
    }
cout<<endl<<"2nd remove loop"<<endl;
    for(i=0;i<data.size();i++)
    {
        cout<<"node count: "<<bst.get_size()<<" iteration: "<<i<<" data to remove: "<<data[i]<<endl;
        bst.remove(data[i]);
    }

    cout <<"[-->] Test passed!\n";
    return MAX_POINTS;
}