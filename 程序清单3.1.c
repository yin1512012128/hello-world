/* ��ʾ�������͵Ĵ�С */
/*   */

#include <stdio.h>
 
 int main(void)
 {
 	printf("\nA char is %d bytes", sizeof( char ));
 	printf("\nAn int  is %d bytes", sizeof( int ));
 	printf("\nA short is %d bytes", sizeof( short ));
 	printf("\nA long  is %d bytes", sizeof( long ));
 	printf("\nAn long long is %d", sizeof( long long ));
 	printf("\nAn unsigned char is %d bytes", sizeof( unsigned char ));
 	printf(" \nAn unsigned int is %d bytes", sizeof( unsigned short ));
 	printf("\nAn unsigned short is %d bytes",sizeof( unsigned short ));
 	printf("\nAn unsigned long is %d bytes", sizeof( unsigned short ));
 	printf("\nAn unsigned long long is %d bytes\n",
	                        sizeof( unsigned long long ));
	printf( "\nA float   is %d bytes", sizeof( float ));
	printf( "\nA double   is %d bytes\n", sizeof( double ));
	printf("\nA ling double is %d bytes\n", sizeof( long double ));
	
	return 0;
 }
