#include<iostream>
#include<memory>

using std::cout; using std::shared_ptr; using std::make_shared;
using std::weak_ptr;

int main() 
{
	shared_ptr<int> num_sp1 = make_shared<int>(10);
	weak_ptr<int> num_wp = num_sp1;

	if(!num_wp.expired())
	{	shared_ptr<int> sp1 = num_wp.lock();

		cout<<*sp1<<"\n";
	}
	




	return 0;
}