/* �ó�������û�������ַ��Ϳո��������������ʾ����Ļ�ϡ� */
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
