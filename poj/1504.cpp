/*
 * =====================================================================================
 *
 *       Filename:  1504.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年10月19日 19时41分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
using namespace std;

int reverse(int n){
  int r = 0;
  while(n){
    r = r * 10 + n % 10;
    n /= 10;
  }
  return r;
}

int main(){
  int time;
  int s1, s2;
  
  cin >> time;
  while(time--){
    cin >> s1 >> s2;
    cout << reverse(reverse(s1) + reverse(s2)) << endl;
  }
  
  return 0;
}

