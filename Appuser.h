/*
类名：
      user -- 用户类，设置用户的各种属性
      address -- 地址存储类，按地域的级别进行分类
      buyer -- 消费者类，用于购物结算
*/
#include <string>
#define LONG 10
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
       方法：
       getkey() -- 从数据库中读取密码，用于登陆验证
      */
     string name,add[LONG];
     int userID;
public:
      user();
      ~user();
      void setName(string name){
            user::name = name;
      }
      void addAddress(address a){
            
      }
};
class buyer : protected user{
private:

};
class address{
private:
      /* 数据 */
protected:
      /*
      数据
      */
public:
      /* args */
}