#include <iostream>
using namespace std;

int distance(int val){
 ///if the array contains only 1 element then that element is the maximum itself
	if(val<0){
		return 0;
	}else if(val == 0){
		return 1;
	}else{
		int total1=0,total2=0,total3=0;
		if(val>=3){
			int mypart = 3;
			int friendpart = distance(val-3);
			total1 = friendpart;
			mypart = 2;
			friendpart = distance(val-2);
			total2 = friendpart;
			mypart = 1;
			friendpart = distance(val-1);
			total3 = friendpart;
		}else if(val>=2){
			int mypart = 2;
			int friendpart = distance(val-2);
			total2 = friendpart;
			mypart = 1;
			friendpart = distance(val-1);
			total3 = friendpart;
		}else if(val>=1){
			int mypart = 1;
			int friendpart = distance(val-1);
			total3 = friendpart;
		}
		return total1+total2+total3;
	}
}
int main()
{
	int val;
	cin >> val;
	cout<<"The maximum is: "<<distance(val)<<endl;
	return 0;
}



