#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main()
{
    vector<int> nums{3, 7, 9};

    cout<<"size: "<<nums.size()<<"\n";
    cout<<"capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(5);

    cout<<"size: "<<nums.size()<<"\n";
    cout<<"capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(8);
    nums.push_back(1);

    cout<<"size: "<<nums.size()<<"\n";
    cout<<"capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(10);
    cout<<"size: "<<nums.size()<<"\n";
    cout<<"capacity: "<<nums.capacity()<<"\n\n";

    return 0;
}