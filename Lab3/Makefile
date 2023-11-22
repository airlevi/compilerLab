ECHO = echo       #将编译器选项定义为变量，提高makefile文件的可移植性           
CC   = gcc 
FLEX = flex
BISON = bison
 
MID = lex.yy.c
LEXFILE = sysy_lex.l
# SUBDIR := $(shell pwd)
O_PATH := ./obj
OBJECTS = $(O_PATH)/rightAns.o
OBJECTS += $(O_PATH)/lex.yy.o
OBJECTS += $(O_PATH)/y.tab.o

TARGET = ./testDemo
CFLAGS = -Wall -g
LIBS   = -lfl
 
TARGET: $(OBJECTS)  #make命令默认执行第一个target及其依赖项
		$(CC) -g -o $(TARGET) $(OBJECTS) $(LIBS) $(CFLAGS)
		@$(ECHO) compiling is finished!
 
#.c.o :   一种旧格式写法
$(O_PATH)/%.o : %.c#这一步是将所有的.c文件编译成.o文件，不链接,这里的$@是目标文件(也就是.o文件)，第一个参数，$<是第一个依赖文件，第二个参数
				$(CC) -g -o $@ -c $< 

 
#.l.c :
$(MID) :$(LEXFILE)
		$(FLEX) -o $@  $<
		

 
clean:#make clean执行非第一个target子程序的clean target
	  @$(ECHO) cleaning......
	  rm $(OBJECTS) $(MID) $(TARGET) -f
 
.PHONY : clean