#include<stdio.h>
int main()
{
	int a = 2;
	int*b;//定义一个整形指针
	b = &a;//给指针赋值，使指针指向a的地址
	printf("%d", b);//输出的是a的地址
	printf("\n");//换行符
	printf("%d", *b);//*的作用是解引用，取出指针指向地址的内容，达到简
	return 0;
}
#include<stdio.h>
int main()
{
	printf("hello world");
	return 0;
}