#include<iostream>
using namespace std;
#include "Dayofyear.h"
#include <string.h>
#include <vector>

int main()
{ 
   DayofYear dy1;
   DayofYear dy2(26,7);
   DayofYear dy3;
   DayofYear dy4(12);
   DayofYear dy5(14,1);

   cin >> dy1;
   cin >> dy2;
   cin >> dy3;
   cin >> dy4;
   cin >> dy5;
   
   cout << "dy1 = " << dy1 << endl << "dy2 = " << dy2 << endl << "dy3 = " << dy3 << endl;
   cout << "dy4 = " << dy4 << endl << "dy5 = " << dy5 << endl;

   cout << "dy1 == dy2 is " << (dy1 == dy2) << endl;
   cout << "dy1 < dy2 is " << (dy1 < dy2) << endl;
   cout << "dy2 < dy1 is " << (dy2 < dy1) << endl;
   cout << endl;

   cout << "dy1 + dy2 = " << dy1 + dy2;
   cout << "dy1 - dy2 = " << dy1 - dy2;
   cout << "\n- dy2 = " << -dy2;
   cout << endl;

   cout << "dy2[1] = " << dy2[1] << "  dy2[2] = " << dy2[2];
   cout << "  dy2[3] = " << dy2[3] << "  dy2[0] = " << dy2[0] << endl;
   cout << endl;

   cout << "dy1 pre-incremented thrice is " << ++(++(++dy1));
   cout << "dy1 is " << dy1;
   cout << endl;

   cout << "dy3 post-incremented once is " << dy3++;
   cout << "dy3 is " << dy3;
   cout << endl;

   cout << "dy2 pre-decremented thrice is " << --(--(--dy2));
   cout << "dy2 is " << dy2;
   cout << endl;

   cout << "dy4 post-decremented once is " << dy4--;
   cout << "dy4 is " << dy4;
   cout << endl;

   cout << "dy5 is " << dy5;
   cout << endl;

   vector<DayofYear> days(6, DayofYear());
   days[1] = dy1;
   days[2] = dy2;
   days[3] = dy3;
   days[4] = dy4;
   days[5] = dy5;
   DayofYear dy6(4,7);
   days[6] = dy6;
   
   for(int i = 0; i <= days.size(); i++)
   {
	   cout<< "days[" << i << "] = " << days[i] << endl;
   }
   
   return 0;
}