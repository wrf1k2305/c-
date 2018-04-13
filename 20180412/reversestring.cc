 ///
 /// @file    reversestring.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-12 22:48:58
 ///
 
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{	
	string s = "hello";
	cout << s << endl;
	int i =0;
	int length = s.size();
	char temp;
	--length;
	while(i<length)
	{
	 temp = s[i];
	 s[i] = s[length];
	 s[length] = temp;
	 if(i<length)
	 {
		i++;
		length--;
	 }else{
		break;
	 }
	}
	cout << s << endl;
}
