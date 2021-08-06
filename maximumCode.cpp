#include <iostream>
using namespace std;

int max_elm(int val){
 ///if the array contains only 1 element then that element is the maximum itself
	if(val==0){
		return 0;
	}
	else{
	///keeping the last array element for myself
		int mypart=val%10;
		///forwarding the rest of the array elements to my friend to search for maximum element
		int friendmax=max_elm(val/10);
		if(mypart>friendmax){
			return mypart;
		}
		else{
			return friendmax;
		}
	}
}
int main()
{
	int val;
	cin >> val;
	cout<<"The maximum is: "<<max_elm(val)<<endl;
	return 0;
}
