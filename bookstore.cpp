#include <iostream>
#include <string>
#include "AppUser.h"
#include "book.h"
using namespace std;//��������ɻ�����⣬����̫ɵ
int main(){
      bool run = true;
      bool log = false;
      int userID;
      string userkey;
      while(run){
            cout<<"��ӭʹ��MS�������"<<endl;
            //cout<<"��esc�����˳�"<<endl;
            while(!log){
                  cout<<"������½"<<endl;
                  cout<<"�˻���";
                  cin>>userID;
                  user u(userID);
                  cout<<"���룺";
                  cin>>userkey;
            }
      }
      return 0;
}