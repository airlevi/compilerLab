ECHO = echo       #将编译器选项定义为变量，提高makefile文件的可移植性           
CC   = gcc 
FLEX = flex
BISON = bison
 

MID_LEX_C = lex.yy.c
MIDFILE_LEX = lrlex
MIDFILE_BISON = lrparser
MID_BISON_C = $(MIDFILE_BISON).tab.c
MID = $(MIDFILE_BISON).tab.h
MID += $(MIDFILE_BISON).output
MID += $(MID_BISON_C)
MID += $(MID_LEX_C)

# SUBDIR := $(shell pwd)
O_PATH := ./obj
OBJECTS = $(O_PATH)/$(MID_BISON_C:.c=.o)
OBJECTS += $(O_PATH)/$(MID_LEX_C:.c=.o)
OBJECTS += $(O_PATH)/ast.o
OBJECTS += $(O_PATH)/main.o
# OBJECTS += $(O_PATH)/rightAns.o

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
$(MID_LEX_C) :$(MIDFILE_LEX).l
		$(FLEX) -o $@  $<
		
$(MID_BISON_C):$(MIDFILE_BISON).y
		$(BISON) -vdty $< -o $@
 
clean:#make clean执行非第一个target子程序的clean target
	  @$(ECHO) cleaning......
	  rm $(OBJECTS) $(MID) $(TARGET) -f
 
.PHONY : clean