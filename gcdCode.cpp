#include <iostream>
using namespace std;
int two_gcd(int dividend, int divisor){
 ///if the divisor is zero then the dividend is the gcd solution
 if(divisor==0){
 return dividend;
 }
 else{
 ///calculating the new dividend and divisor value
 int new_dividend=divisor;
 int new_divisor=dividend%divisor;
 ///forwarding the new dividend and divisor to a friend for gcd calculation
 int friend_gcd=two_gcd(new_dividend,new_divisor);
 return friend_gcd;
 }
}
///implement this function
int n_gcd(int arr[], int sz){
 ///if array size is 2 then directly calculate the gcd between arr[0] and arr[1]
 ///call two_gcd() to calculate the gcd of two integers
	if(sz == 2){
		return two_gcd(arr[0], arr[1]);
	}
	else{
	///reserve the last array integer for yourself
		int mypart = arr[sz-1];
	///call your friend to find out the remaining array integers gcd value
	    int friendpart = n_gcd(arr, sz-1);
	///your gcd result is the gcd between your reserved integer and your friend gcd result
	///call two_gcd() for calculating the gcd value between your integer and friend result
	///return the calculated gcd value
		return two_gcd(mypart,friendpart);
	}
}
int main()
{
 int arr[]={8,6,4,2};
 int sz=sizeof(arr)/sizeof(int);
 cout<< n_gcd(arr,sz) <<endl; ///output will be: 2
 return 0;
}

