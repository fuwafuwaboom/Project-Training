#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("您好，此电脑将在60秒内关机\n");
again:
	printf("如果你输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input,"我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("电脑马上就要关机了哦\n");
		goto again;
	}
	return 0;
}