#include<iostream>
#include<memory>

using std::cout; using std::shared_ptr; using std::make_shared;

int main() 
{
	shared_ptr<int> num_sp1 = make_shared<int>(10);
	cout<<*num_sp1<<"\n";
	cout<<"Count: "<<num_sp1.use_count()<<"\n";

	shared_ptr<int> num_sp2 = num_sp1;
	cout<<*num_sp2<<"\n";
	cout<<"Count: "<<num_sp2.use_count()<<"\n";
	




	return 0;
}