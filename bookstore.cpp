#include <iostream>
#include <string>
#include "AppUser.h"
#include "book.h"
using namespace std;//解决了最疑惑的问题，是我太傻
int main(){
      bool run = true;
      bool log = false;
      int userID;
      string userkey;
      while(run){
            cout<<"欢迎使用MS网络书店"<<endl;
            //cout<<"按esc键可退出"<<endl;
            while(!log){
                  cout<<"请您登陆"<<endl;
                  cout<<"账户：";
                  cin>>userID;
                  user u(userID);
                  cout<<"密码：";
                  cin>>userkey;
            }
      }
      return 0;
}