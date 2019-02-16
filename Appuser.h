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
protected://该权限对象无法在外部函数中指针或对象调用
      /*
       数据：
       name -- 用户名
       userID -- 用户唯一标识号
       方法：
       getkey() -- 从数据库中读取密码，用于登陆验证
      */
     string name;
     int userID;
     void getkey(string k){
           key = k;
     }
public:
      /*
       方法：
       setName() -- 为name赋值
       setID() -- 为userID赋值
       getID() -- 返回用户的ID
       getName() -- 返回用户名
      */
      user();
      ~user();
      void setName(string name){
            user::name = name;
      }
      void setID(int ID){
            userID = ID;
      }
      int getID(){
            return userID;
      }
      string getName(){
            return name;
      }
};
class buyer : protected user{
private:
protected:
      /*
        数据：
        add[] -- 买家地址，应用“组”存储，设置上限
        len -- 存储user中地址的条数
        pay -- 购买书的金额
      */
      double pay;
      int len;
      address add[LONG];
public:
      /*
       方法：
       addAddress() -- 将参数加入到“地址类”组中
       setPay() -- 设置金额
      */
      buyer();
      buyer(string Name,int ID,int l,address addr[]){
            name = Name;
            userID = ID;
            len = l;
            for(int i=0;i<=l;i++)
                  add[i] = addr[i];
      }
      ~buyer();
      void addAddress(address a){
            add[len] = a;
            len++;
      }
      void setPay(double p){

      }
};
class address{
private:
protected:
     /* 数据：
            五个地址等级，对应“省市区街道和具体位置”
            level1 -- 具体位置
            level2 -- 街道
            level3 -- 区
            level4 -- 市
            level5 -- 省
      */
     string level1,level2,level3,level4,level5;
public:
      /* 
       方法：
       重写“=”运算符,没有必要，C++中允许对象之间的赋值
       printAddress() -- 返回整个string地址
       setLevles() -- 利用swich来设置各级别的数据
       getLevels() -- 利用swich来返回任意级别地址
      */
     void setLevles(){

     }
     string getLevels(){
           string level;
           return level;
     }
     string printAddress(){
           string Address;
           Address = level5+level4+level3+level2+level1;
           return Address;
     }
}