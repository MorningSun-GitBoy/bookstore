/*
类名：
      user -- 用户类，设置用户的各种属性
      address -- 地址存储类，按地域的级别进行分类
      buyer -- 消费者类，用于购物结算
*/
#include <string>//好神奇
#include <iostream>
#define LONG 5 //用户可添加并使用的地址条数
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
       collateKey() -- 返回用户密码是否正确
      */
      user(){}
      //~user();
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
     address(){
           level1="";
           level2="";
           level3="";
           level4="";
           level5="";
     }
     address(string l){//为配合最初的代码设定
           level1=l;
           level2="";
           level3="";
           level4="";
           level5="";
     }
     //~address();
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
};
class buyer : public user{
      /*关于派生：
       public--派生类内部可以访问基类的protected和public属性的成员；派生类对象只能访问基类public属性的成员。
       protected--派生类内部可以访问基类的protected和public属性的成员；派生类对象无法访问基类任何成员；派生类子类内部对基类的访问权限同它的父类。
       private--派生类类内部可以访问基类的protected和public属性的成员；而派生类对象无法访问基类任何成员；派生类子类内部无法访问基类的任何成员
      */
private:
protected:
      /*
        数据：
        len -- 存储user中地址的条数
        pay -- 购买书的金额
      */
      double pay;
      int len;
      
public:
      /*
       数据：
       add[] -- 买家地址，应用“组”存储，设置上限//由于子类无法访问父类protected成员
       方法：
       addAddress() -- 将参数加入到“地址类”组中
       getAddress() -- 返回地址对象
       setPay() -- 设置金额
       getPay() -- 返回金额
       choseAddress -- 返回地址类
      */
      address add[LONG];
      buyer();
      buyer(string Name,int ID,int l,address *addr[],double p=0){
            name = Name;
            userID = ID;
            len = l;
            for(int i=0;i<=l;i++)
                  add[i] = *addr[i];
            pay = p;
      }
      //~buyer();
      void addAddress(address a){
            add[len] = a;
            len++;
      }
      address getAddress(int i){
            return add[i];
      }
      /*
       virtual void dispaly()=0;
       virtual void setPay(double p=0)=0;
       //如之前的问题只好先注释掉了
      */
};
/*
 member,honoured_guest,layfolk为buyer派生的子类
 用于分类计算购书人的折扣和最终消费
 每个类都会有一个或0个特征变量
*/
class member : public buyer{
      int leager_grade;//表示会员等级
public:
      member(string Name,int ID,int l,address *addr[],double p,int i)
       : buyer(Name,ID,l,addr,p){//父类参数列表不需要写参数的类型，只要与父类中参数名一致即可
             leager_grade = i;
      }
      void display(){
            cout<<"购书人："<<name<<"\t";
            cout<<"编号："<<userID<<"\t";
            cout<<"会员级别："<<leager_grade<<"\n";
            cout<<"地址："<<getAddress(1).printAddress()<<"\n";
      }
      void setpay(double p=0){
            if(leager_grade==1)
                  pay = 0.95*p+pay;
            else if(leager_grade==2)
                  pay = 0.90*p+pay;
            else if(leager_grade==3)
                  pay = 0.85*p+pay;
            else if(leager_grade==4)
                  pay = 0.80*p+pay;
            else if(leager_grade==5)
                  pay = 0.7*p+pay;
            else cout<<"级别错误！";
      }
};
class honoured_guest : public buyer{
      double discount_rate;//用以表示贵宾的折扣（0-1之间的小数）
public:
      honoured_guest(string Name,int ID,int l,address *addr[],double p,double r=0.5)
       : buyer(Name,ID,l,addr,p){
             discount_rate = r;
       }
      void display(){
            cout<<"购书人："<<name<<"\t";
            cout<<"编号："<<userID;
            cout<<"贵宾折扣："<<discount_rate*100<<"%\n";
            cout<<"地址："<<getAddress(1).printAddress()<<"\n";
      }
      void setpay(double p=0){
            pay = pay+(1-discount_rate)*p;
      }
};
class layfolk : public buyer{
public:
      layfolk(string Name,int ID,int l,address *addr[],double p)
       : buyer(Name,ID,l,addr,p){
       }
      void display(){
            cout<<"购书人："<<name<<"\t";
            cout<<"编号："<<userID<<"\t";
            cout<<"地址："<<getAddress(1).printAddress()<<"\n";
      }
      void setpay(double p=0){
            pay = pay+p;
      }
};