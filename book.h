/*
 类名：
      book -- 书本类，存储书本信息
*/
#include <iostream>
#include <string>
using namespace std;//必须有“namespace”才能使程序正常运行
class book{
private:
protected:
      /*
       数据：
       bookID -- 书号
       bookName -- 书名
       author -- 作者
       publishing -- 出版信息
       price -- 书本价格
      */
      string bookID,bookName,author,publishing;
      double price;
public:
      /*
       方法：
       getID() -- 
       getBookName() -- 
       getAuthor() -- 
       getPublishing() -- 
       getprice() -- 
      */
     book();
     book(string ID,string NAME,string au,string pu,double p){
           bookID = ID;
           bookName = NAME;
           author = au;
           publishing = pu;
           price = p;
     }
     ~book();
     void dispaly(){//输出各种参数
           cout<<"书号："<<bookID<<"\t";
           cout<<"书名："<<bookName<<"\t";
           cout<<"作者："<<author<<"\t";
           cout<<"出版社："<<publishing<<"\t";
           cout<<"定价："<<price<<"\t";
           //在最终版本中可能会删掉或者改用其他输出手段
     }
     string getID(){
           return bookID;
     }
     string getBookName(){
           return bookName;
     }
     string getAuthor(){
           return author;
     }
     string getPublishing(){
           return publishing;
     }
     double getPrice(){
           return price;
     }
};