// C2Cplusplus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//   Convert this program to C++
//	 change to C++ io
//   change to one line comments
//   change defines of constants to const
//   change array to vector<>
//   inline any short function

#include <iostream>
#include <vector>
using namespace std;
const int N = 40;

inline void sum(int*p, int n, const vector<int> &d)
{
  int i;
  *p = 0;
  for(i = 0; i < n; ++i)
     *p = *p + d[i];
}
int main()
{
   int i, s;
   int accum = 0;
   vector<int> data(N);
   for(i = 0; i < N; ++i)
		data[i] = i;

    sum(&accum, N, data);
    cout << "sum is " << accum << "" <<endl;
	cin >> s;
	return 0;
}

