/*
 类名：
      book -- 书本类，存储书本信息
*/
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
protected:
      /*
       方法：
       getID() -- 
       getBookName() -- 
       getAuthor() -- 
       getoublishing() -- 
       getprice() -- 
      */
     book();
     ~book();
     void dispaly(){}
     string getID(){}
     string getBookName(){}
     string getAuthor(){}
     string getoublishing(){}
     double getprice(){}
}