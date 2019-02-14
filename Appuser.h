/*
类名：
      user -- 用户类，设置用户的各种属性
      address -- 地址存储类，按地域的级别进行分类
      buyer -- 消费者类，用于购物结算
*/
#include <string>
#define LONG 10 //用户可添加并使用的地址条数
using namespace std;//这句话似乎没用
class user{
private:
      /* 数据：
       key -- 用户的密码
       status -- 用户的登陆状态
      */
     string key;
     bool status;
protected:
      /*
       数据：
       name -- 用户名
       userID -- 用户唯一标识号
       address -- 用户地址，应用“组”存储，设置上限
       len -- 存储user中地址的条数
       方法：
       getkey() -- 从数据库中读取密码，用于登陆验证
      */
     string name,add[LONG];
     int userID,len;
public:
      user(){
            len = 0;
      }
      ~user();
      void setName(string name){
            user::name = name;
      }
      void setID(int ID){
            userID = ID;
      }
      void addAddress(address a){
            add[len] = a;
            len++;
      }
};
class buyer : protected user{
private:
protected:
      double pay; //购买书的金额
public:
      buyer();
      buyer(user User){
            name = User.name;
            userID = User.userID;
            for(int i=0;i<=len;i++)
                  add[i] = User.add[len];
      }
      ~buyer();
      int getID(){
            return userID;
      }
      string getBuyerName(){
            return name;
      }
};
class address{
private:
      /* 数据 */
protected:
      /*
      数据
      */
public:
      /* 
       重写“=”运算符
      */
     address operator=(address a,address b){//重写赋值运算符
            //a.~=b.~;等写完了数据再写
            return address a;
     }
}