#include <iostream>
using namespace std;
int TOH(int n, char src, char dest, char tmp1, char tmp2){
 ///if you have only 1 disk left then directly move the disk from src to dest i.e. 1 move required
 if(n<2){
 return 1;
 }
 else{
	///first friend will move the top n-2 disks from src to tmp1
	int friend1moves=TOH(n-2, src, tmp1, dest, tmp2);
	int friend3moves = TOH(1,src,tmp2,dest,tmp1);
	///then I will move the remaining last 1 disk from src to dest
	int mymove=TOH(1,src,dest,tmp1,tmp2);

	int friend4moves = TOH(1,tmp2,dest,src,tmp1);

	///then second friend will move back the n-1 disks from tmp to dest pole
	int friend2moves=TOH(n-2,tmp1,dest,src,tmp2);
	///so total moves required
	int totalmoves=friend1moves+mymove+friend2moves+friend3moves+friend4moves;
	return totalmoves;
 }
}
int main()
{
 cout << TOH(6, 'S', 'D', 'T', 'X') << endl;
 return 0;
}

