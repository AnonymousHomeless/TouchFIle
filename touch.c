//***********************************************************//
//程序功能：创建一个文件
//实现方法 windows API
//***********************************************************//

#include <windows.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("创建新文件的格式：touch <文件名1> <文件名2> ...");
		return 0;
	}
	
	for (i = 1; i < argc; i++)
	{
		CreateFileA(
			argv[i],
			GENERIC_ALL,
			0,
			NULL,
			OPEN_ALWAYS ,
			FILE_ATTRIBUTE_NORMAL,
			NULL
			);
		printf("%s创建成功！\n", argv[i]);
	}
	
	return 0;
}
