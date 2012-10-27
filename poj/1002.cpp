/*
 * =====================================================================================
 *
 *       Filename:  1002.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年10月26日 14时42分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

#define SIZE 1024
using namespace std;

typedef struct{
  string array;
  int time;
}Dial;

char num[] = "22233344455566670778889990";

string exchange(string c){
  string array;
  
  for(int i = 0; i < c.length(); i++){
    if(c[i] >= 'A' && c[i] <= 'Z'){
      array += num[c[i] - 'A' ];
    }
    else if(c[i] == '-')
      ;
    else 
      array += c[i];
  }

  return array;
}


int main(){
  int n;
  string c;
  int cnt = 0, flag = 0;
  Dial dial[SIZE];
  string array;
  cin >> n;

  while(n--){ 
    cin >> c;
    flag = 0; 
    array = exchange(c);

    for(int i = 0; i <= cnt; i++){
      if(array.compare(dial[i].array) == 0){
        dial[i].time++;
        flag = 1;
        break;
      }   
     }

    if(flag == 0){

      dial[cnt].array = array;
      dial[cnt].time = 1;     
      cnt++;
    }

  }

  for(int i = 0; i <= cnt; i++){
    for(int j = i; j <= cnt; j++)
      if(dial[i].array.compare(dial[j].array) > 0){
        Dial temp = dial[i];
        dial[i] = dial[j];
        dial[j] = temp;
      }
  }

  for(int i = 0; i <= cnt; i++){
    if(dial[i].time > 1){
        cout << dial[i].array[0] << dial[i].array[1] << dial[i].array[2] << '-' << dial[i].array[3] << dial[i].array[4] << dial[i].array[5] << dial[i].array[6];
        cout << " " << dial[i].time << endl;
    }
  }

  return 0;
}

