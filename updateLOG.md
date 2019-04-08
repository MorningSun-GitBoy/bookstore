# bookstore updateLOG
```
This file is aim to log the update informations including the test and formal versions, which writen in Chinese and English.

本文件用于记录版本更新信息，包括测试和正式版本，中英双语录入。
```
### test 0.0.01
With the efforts I made, the application have been compiled.But I met a great trouble soon,which is called "Segment fault".
I avoided the errore tips of compiler to complete compiling through making destructor an annotation and using no body and no parameter constructor.Abort Segment fault,perhaps it links with memory and some troubles about null pointer.

经过我的努力，程序终于完成了编译。但是很快就遇到了麻烦，叫做段错误。
我通过注释析构函数和使用空函数体空参构造函数的方式规避了编译器的报错，完成了编译。而段错误，应该是和文件的内存有关，还有空指针的一些事情。烦。

### test 0.0.02
Knowing the flaut reason,I understand the grammar of C++ more deeply.Because of too many code which need
to correct,I short so many code and pass the debug.From now on,I make the code on book come ture almostly.

在找到错误后，我终于对C++的语法规则更加熟知了。由于要改的代码太多，我简要地更改了代码，使之可以通过调试。目前来看，我已经把书上上的代码实现了。

I begain to improve user login fuction.Build up the data floder and manage head file.Repair to update.

我开始改进用户登录功能。建立了数据文件夹和管理头文件。准备开始迭代。