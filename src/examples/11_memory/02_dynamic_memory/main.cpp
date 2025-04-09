#include<iostream>
#include<memory>

using std::cout; using std::unique_ptr; using std::make_unique;

int main() 
{
	unique_ptr<int> num = make_unique<int>(150);
	cout<<*num<<"\n";

	//deleting the dynamic memory is handle by the unique ptr


	return 0;
}