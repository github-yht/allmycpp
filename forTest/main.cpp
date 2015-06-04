#include<iostream>
using namespace std;
void returnnum(int &num)//返回函数的调用次数
{
	static int n=0;
     ++n;
	 num=n;
}


int main(void)
{
	int num=0;
	for(int i=0;i<10;++i)
		returnnum(num);

	cout<<num;
	return 0;
}