#include<iostream>
#include<fstream>
#include<Windows.h>
#include <string>
using namespace std;

class TextRedact
{
	string name;
public:
	TextRedact(string n)
	{
		name = n;
	}
	void CtrlZ()
	{

	}
	void CtrlX(string nach, string konc)
	{
		ifstream f(name, ios::out | ios::binary | ios::app);
		if (!f)
		{
			cout << "Файл не открылся для записи!!!";
			exit(1);
		}
		
	}
	string CtrlCA()
	{
		string text;
		ifstream f(name, ios::out | ios::binary | ios::app);
		if (!f)
		{
			cout << "Файл не открылся для записи!!!";
			exit(1);
		}
		while (!f.eof())
		{
			f >> text;
		}
		return text;
	}
	void CtrlV(string text)
	{
		ofstream f(name, ios::out | ios::binary | ios::app);
		if (!f)
		{
			cout << "Файл не открылся для записи!!!";
			exit(1);
		}
		f << text;
	}
};
class Comand
{
	string name;
	TextRedact t;

};
