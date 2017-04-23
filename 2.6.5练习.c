/* 该程序计算用户输入的字符和空格数，并将结果显示到屏幕上。 */
#include <stdio.h>
#include <string.h>
int main(void)
{
	char buffer[256];
	
	printf( "Emert your name and press <Enter>:\n");
	gets( buffer );
	
	printf( "\nYour name has %d characters and spaces!",
	            strlen( buffer ));
	            
	return 0;
 } 
