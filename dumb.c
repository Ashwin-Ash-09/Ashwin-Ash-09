#include<windows.h>
#include<stdio.h>
int main()
{
    MessageBox
	(
	  FindWindowA("ConsoleWindowClass", NULL),
	  "You Are Dumb", 
	  "Iformation",
	   MB_DEFBUTTON1 | MB_ICONINFORMATION
	);

}
