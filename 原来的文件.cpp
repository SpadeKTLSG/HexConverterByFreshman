#include<iostream>
#include<cmath>
#include<cstdio>
#include<stdlib.h>
#include<iomanip>
#include <stdio.h>
#include <tchar.h>
#include<string>
#include <sstream>
using namespace std;
//the controlers:
#define MAX 100
bool running = true;
bool positive = true;
int PR = 6; //set precision : six

//The definition of menus:
void firstmenu();
void secondmenu_2();
void secondmenu_8();
void secondmenu_10();
void secondmenu_16();

//The definition of functions:
void fun2(int object);
void fun8(int object);
void fun10(int object);
void fun16(int object);
;
void make2(double ten);
void make8(double ten);
void make16(double ten);

//The definition of printers
  void display(string out);
  void fastout(double ten);

int main()
{
	  while (running)
	  {
		  firstmenu();
	  }

	  cout << "\n\n欢迎您下次使用!!\n";
	  system("pause");
	  system("cls");
	  return 0;
}

void firstmenu()
  {
	  system("cls");
	  int button = 0;

	  cout << "*******************************\n\n";
	  cout << "   1.     2进制数转换\n";
	  cout << "   2.     8进制数转换\n";
	  cout << "   3.     10进制数转换\n";
	  cout << "   4.     16进制数转换\n";
	  cout << "   0.     退出\n\n";
	  cout << "*******************************\n\n";
	  cout << "请输入功能号0-4 : )  ";
	  cin >> button;
	  if (button < 0 || button>4)
	  {
		  cout << "请输入功能号0-5 : (\n\n";
		  cin >> button;
		  system("cls");
	  }
	  else
	  {
		  switch (button)
		  {

		  case(1):
		  {
			  system("cls");
			  secondmenu_2();
			  break;
		  }
		  case(2):
		  {
			  system("cls");
			  secondmenu_8();
			  break;
		  }
		  case(3):
		  {
			  system("cls");
			  secondmenu_10();
			  break;
		  }
		  case(4):
		  {
			  system("cls");
			  secondmenu_16();
			  break;
		  }

		  default:
		  {
			  system("cls");
			  running = false;
			  return;
		  }
		  }
	  }
  }

void secondmenu_2()
  {
	  int button = 0;
	  cout << "*******************************\n\n";
	  cout << "1.  2进制数 ---> 8进制数\n";
	  cout << "2.  2进制数 ---> 10进制数\n";
	  cout << "3.  2进制数 ---> 16进制数\n";
	  cout << "0.  返回上级目录\n\n";
	  cout << "*******************************\n\n";
	  cout << "请输入功能号0-3 : )  ";
	  cin >> button;
	  if (button < 0 || button>3)
	  {
		  cout << "请输入功能号0-3 : (\n\n";
		  cin >> button;
		  system("cls");
	  }
	  else
	  {
		  switch (button)
		  {
		  case(1):
		  {
			  system("cls");
			  fun2(8);
			  break;

		  }
		  case(2):
		  {
			  system("cls");
			  fun2(10);
			  break;
		  }
		  case(3):
		  {
			  system("cls");
			  fun2(16);
			  break;
		  }
		  default:
		  {
			  system("cls");
			  firstmenu();
			  break;
		  }
		  }
	  }
  }

void secondmenu_8()
  {
	  int button = 0;
	  cout << "*******************************\n\n";
	  cout << "1.  8进制数 ---> 2进制数\n";
	  cout << "2.  8进制数 ---> 10进制数\n";
	  cout << "3.  8进制数 ---> 16进制数\n";
	  cout << "0.  返回上级目录\n\n";
	  cout << "*******************************\n\n";
	  cout << "请输入功能号0-3 : )  ";
	  cin >> button;
	  if (button < 0 || button>3)
	  {
		  cout << "请输入功能号0-3 : (\n\n";
		  cin >> button;
	  }
	  else
	  {
		  switch (button)
		  {
		  case(1):
		  {
			  system("cls");
			  fun8(2);
			  break;
		  }
		  case(2):
		  {
			  system("cls");
			  fun8(10);
			  break;
		  }
		  case(3):
		  {
			  system("cls");
			  fun8(16);
			  break;
		  }
		  default:
		  {
			  system("cls");
			  firstmenu();
			  return;
		  }
		  }
	  }
  }

void secondmenu_10()
  {
	  int button = 0;
	  cout << "*******************************\n\n";
	  cout << "1.  10进制数 ---> 2进制数\n";
	  cout << "2.  10进制数 ---> 8进制数\n";
	  cout << "3.  10进制数 ---> 16进制数\n";
	  cout << "0.  返回上级目录\n\n";
	  cout << "*******************************\n\n";
	  cout << "请输入功能号0-3 : )  ";
	  cin >> button;
	  if (button < 0 || button>3)
	  {
		  cout << "请输入功能号0-3 : (\n\n";
		  cin >> button;
	  }
	  else
	  {
		  switch (button)
		  {
		  case(1):
		  {
			  system("cls");
			  fun10(2);
			  break;
		  }
		  case(2):
		  {
			  system("cls");
			  fun10(8);
			  break;
		  }
		  case(3):
		  {
			  system("cls");
			  fun10(16);
			  break;
		  }
		  default:
		  {
			  system("cls");
			  firstmenu();
			  return;
		  }
		  }
	  }
  }

void secondmenu_16()
  {
	  int button = 0;
	  cout << "*******************************\n\n";
	  cout << "1.  16进制数 ---> 2进制数\n";
	  cout << "2.  16进制数 ---> 8进制数\n";
	  cout << "3.  16进制数 ---> 10进制数\n";
	  cout << "0.  返回上级目录\n\n";
	  cout << "*******************************\n\n";
	  cout << "请输入功能号0-3 : )  ";
	  cin >> button;
	  if (button < 0 || button>3)
	  {
		  cout << "请输入功能号0-3 : (\n\n";
		  cin >> button;
	  }
	  else
	  {
		  switch (button)
		  {
		  case(1):
		  {
			  system("cls");
			  fun16(2);
			  break;
		  }
		  case(2):
		  {
			  system("cls");
			  fun16(8);
			  break;
		  }
		  case(3):
		  {
			  system("cls");
			  fun16(10);
			  break;
		  }
		  default:
		  {
			  system("cls");
			  firstmenu();
			  return;
		  }
		  }
	  }
  }

void fun2(int object)
{
	string original;
	bool ok = false;

	while (ok == false)
	{
		int i;
		int xiaoshu = 0;


		cin >> original;
		int le;
		le = original.length();

		ok = true;

		for (i = 0; i < le; i++)
		{
			bool okpoint = false;
			if (original[0] == '-')
			{
				positive = false;
			}

			if (original[i] == '-' && i != 0)
			{
				ok = false;
			}

			if (original[0] == '.' || original[le - 1] == '.')
			{
				ok = false;
			}

			if (original[i] == '.')
			{
				xiaoshu++;
			}

			if (xiaoshu > 1)
			{
				ok = false;

			}
			for (int i = 0; i < (original.length()); i++)
			{
				if (original[i] == '.')
					okpoint = true;
			}

			if (okpoint == true)
			{
				int sit = 0;
				for (int i = 0; i <( original.length()); i++)
				{
					if (original[i] == '.')
					{
						sit = i;
					}
				}			
			}
			else
			{
				if (original[0] == '0')
					ok = false;
			}

			if (original[i] != '0' && original[i] != '1' && original[i] != '.' && original[i] != '-')
			{
				ok = false;
			}

		}

		if (ok == false)
		{
			cout << "\n\n你搞砸了，重来！\n\n";
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n\n转换已开始，请稍候......\n\n";
			system("pause");
			system("cls");
		}
	}

	double ten = 0.0;
	if (positive == true)
	{
		int le;
		le = original.length();
		int sit = 0;
		bool xiaoshu = false;
		for (int o = 0; o < le; o++)
		{
			if (original[o] == '.')
			{
				xiaoshu = true;
				sit = o;
			}
		}

		if (xiaoshu == true)
		{
			int upmi = sit - 1;
			int downmi = -1;
			int i;
			int j;
			int upor[MAX] = { 0,0,0,0,0,0 };
			int downor[MAX] = { 0,0,0,0,0,0 };


			for (i = 0; i < sit; i++)
			{
				if (original[i] == '1')
				{
					upor[i] = 1;
				}
				if (original[i] == '0')
				{
					upor[i] = 0;
				}


				ten += ((pow(2, upmi) * upor[i]));

				upmi--;

			}

			for (j = sit + 1; j < le; j++)
			{
				int u = 0;
				if (original[j] == '1')
				{
					downor[u] = 1;
				}

				if (original[j] == '0')
				{
					downor[u] = 0;
				}

				ten += ((pow(2, downmi) * downor[u]));

				downmi--;

			}
		}

		else
		{
			int mi = le - 1;  
			int i;
			int ori[MAX] = { 0,0,0,0,0,0 };

			for (i = 0; i < le; i++)
			{
				if (original[i] == '1')
				{
					ori[i] = 1;
				}

				if (original[i] == '0')
				{
					ori[i] = 0;
				}


				ten += ((pow(2, mi) * ori[i]));

				mi--;
			}
		}
	}

	else
	{

		int le;
		le = original.length();
		int sit = 0;
		bool xiaoshu = false;
		for (int o = 0; o < le; o++)
		{
			if (original[o] == '.')
			{
				xiaoshu = true;
				sit = o;
			}
		}

		if (xiaoshu == true)
		{
			int upmi = sit - 2;
			int downmi = -1;
			int i;
			int j;
			int upor[MAX] = { 0,0,0,0,0,0 };
			int downor[MAX] = { 0,0,0,0,0,0 };   //对半分

			for (i = 1; i < sit; i++)
			{
				if (original[i] == '1')
				{
					upor[i] = 1;
				}
				if (original[i] == '0')
				{
					upor[i] = 0;
				}
				//ori存放各个位置的数值

				ten += ((pow(2, upmi) * upor[i]));

				upmi--;

			}

			for (j = sit + 1; j < le; j++)
			{
				int u = 0;
				if (original[j] == '1')
				{
					downor[u] = 1;
				}

				if (original[j] == '0')
				{
					downor[u] = 0;
				}

				ten += ((pow(2, downmi) * downor[u]));
				downmi--;
			}
		}

		else
		{
			int mi = le - 2;    //!
			int i;
			int ori[MAX] = { 0,0,0,0,0,0 };//

			for (i = 1; i < le; i++)
			{
				if (original[i] == '1')
				{
					ori[i] = 1;
				}

				if (original[i] == '0')
				{
					ori[i] = 0;
				}
				ten += ((pow(2, mi) * ori[i]));

				mi--;
			}
		}
	}

	if (object == 10)
	{
		fastout(ten);
	}
	else switch (object)
	{
	case 16:
	{
		make16(ten);
		break;
	}
	case 8:
	{
		make8(ten);
		break;
	}
	}
}//

void fun8(int object)
{

		string original;
		bool ok = false;

		while (ok == false)
		{
			int i;
			int xiaoshu = 0;

			cin >> original;
			int le;
			le = original.length();

			ok = true;

			for (i = 0; i < le; i++)
			{
				bool okpoint = false;
				if (original[0] == '-')
				{
					positive = false;
				}

				if (original[i] == '-' && i != 0)
				{
					ok = false;
				}

				if (original[0] == '.' || original[le - 1] == '.')
				{
					ok = false;
				}

				if (original[i] == '.')
				{
					xiaoshu++;
				}

				if (xiaoshu > 1)
				{
					ok = false;

				}
				for (int i = 0; i < (original.length()); i++)
				{
					if (original[i] == '.')
						okpoint = true;
				}

				if (okpoint == true)
				{

					int sit = 0;
					for (int i = 0; i < (original.length()); i++)
					{
						if (original[i] == '.')
						{
							sit = i;
						}
					}
					
				}
				else
				{
					if (original[0] == '0')
						ok = false;
				}


				if (original[i] != '0' && original[i] != '1' && original[i] != '.' && original[i] != '-' && original[i] != '2' && original[i] != '3' && original[i] != '4' && original[i] != '5' && original[i] != '6' && original[i] != '7')
				{
					ok = false;
				}

			}

			if (ok == false)
			{
				cout << "\n\n你搞砸了，重来！\n\n";
				system("pause");
				system("cls");
			}
			else
			{
				cout << "\n\n转换已开始，请稍候......\n\n";
				system("pause");
				system("cls");
			}
		}


		double ten = 0.0;
		if (positive == true)
		{
			int le;
			le = original.length();
			int sit = 0;
			bool xiaoshu = false;
			for (int o = 0; o < le; o++)
			{
				if (original[o] == '.')
				{
					xiaoshu = true;
					sit = o;
				}
			}

			if (xiaoshu == true)
			{
				int upmi = sit - 1;
				int downmi = -1;
				int i;
				int j;
				int upor[MAX] = { 0,0,0,0,0,0 };
				int downor[MAX] = { 0,0,0,0,0,0 };


				for (i = 0; i < sit; i++)
				{
					if (original[i] == '0')
					{
						upor[i] = 0;
					}
					if (original[i] == '1')
					{
						upor[i] = 1;
					}
					if (original[i] == '2')
					{
						upor[i] = 2;
					}
					if (original[i] == '3')
					{
						upor[i] = 3;
					}
					if (original[i] == '4')
					{
						upor[i] = 4;
					}
					if (original[i] == '5')
					{
						upor[i] = 5;
					}
					if (original[i] == '6')
					{
						upor[i] = 6;
					}
					if (original[i] == '7')
					{
						upor[i] = 7;
					}
					
					ten += ((pow(8, upmi) * upor[i]));

					upmi--;

				}

				for (j = sit + 1; j < le; j++)
				{
					int u = 0;
					if (original[j] == '0')
					{
						downor[u] = 0;
					}
					if (original[j] == '1')
					{
						downor[u] = 1;
					}
					if (original[j] == '2')
					{
						downor[u] = 2;
					}
					if (original[j] == '3')
					{
						downor[u] = 3;
					}
					if (original[j] == '4')
					{
						downor[u] = 4;
					}
					if (original[j] == '5')
					{
						downor[u] = 5;
					}
					if (original[j] == '6')
					{
						downor[u] = 6;
					}
					if (original[j] == '7')
					{
						downor[u] = 7;
					}

					ten += ((pow(8, downmi) * downor[u]));

					downmi--;

				}
			}

			else
			{
				int mi = le - 1;    //!
				int i;
				int ori[MAX] = { 0,0,0,0,0,0 };//只是为了初始化

				for (i = 0; i < le; i++)
				{
					if (original[i] == '0')
					{
						ori[i] = 0;
					}
					if (original[i] == '1')
					{
						ori[i] = 1;
					}
					if (original[i] == '2')
					{
						ori[i] = 2;
					}
					if (original[i] == '3')
					{
						ori[i] = 3;
					}
					if (original[i] == '4')
					{
						ori[i] = 4;
					}
					if (original[i] == '5')
					{
						ori[i] = 5;
					}
					if (original[i] == '6')
					{
						ori[i] = 6;
					}
					if (original[i] == '7')
					{
						ori[i] = 7;
					}

					ten += ((pow(8, mi) * ori[i]));

					mi--;
				}
			}
		}

		else
		{

			int le;
			le = original.length();
			int sit = 0;
			bool xiaoshu = false;
			for (int o = 0; o < le; o++)
			{
				if (original[o] == '.')
				{
					xiaoshu = true;
					sit = o;
				}
			}

			if (xiaoshu == true)
			{
				int upmi = sit - 2;
				int downmi = -1;
				int i;
				int j;
				int upor[MAX] = { 0,0,0,0,0,0 };
				int downor[MAX] = { 0,0,0,0,0,0 };   //对半分


				for (i = 1; i < sit; i++)
				{
					if (original[i] == '0')
					{
						upor[i] = 0;
					}
					if (original[i] == '1')
					{
						upor[i] = 1;
					}
					if (original[i] == '2')
					{
						upor[i] = 2;
					}
					if (original[i] == '3')
					{
						upor[i] = 3;
					}
					if (original[i] == '4')
					{
						upor[i] = 4;
					}
					if (original[i] == '5')
					{
						upor[i] = 5;
					}
					if (original[i] == '6')
					{
						upor[i] = 6;
					}
					if (original[i] == '7')
					{
						upor[i] = 7;
					}
					//ori存放各个位置的数值

					ten += ((pow(8, upmi) * upor[i]));

					upmi--;

				}

				for (j = sit + 1; j < le; j++)
				{
					int u = 0;
					if (original[j] == '0')
					{
						downor[u] = 0;
					}
					if (original[j] == '1')
					{
						downor[u] = 1;
					}
					if (original[j] == '2')
					{
						downor[u] = 2;
					}
					if (original[j] == '3')
					{
						downor[u] = 3;
					}
					if (original[j] == '4')
					{
						downor[u] = 4;
					}
					if (original[j] == '5')
					{
						downor[u] = 5;
					}
					if (original[j] == '6')
					{
						downor[u] = 6;
					}
					if (original[j] == '7')
					{
						downor[u] = 7;
					}
					ten += ((pow(8, downmi) * downor[u]));

					downmi--;

				}
			}


			else
			{
				int mi = le - 2;    //!
				int i;
				int ori[MAX] = { 0,0,0,0,0,0 };//

				for (i = 1; i < le; i++)
				{
					if (original[i] == '0')
					{
						ori[i] = 0;
					}
					if (original[i] == '1')
					{
						ori[i] = 1;
					}
					if (original[i] == '2')
					{
						ori[i] = 2;
					}
					if (original[i] == '3')
					{
						ori[i] = 3;
					}
					if (original[i] == '4')
					{
						ori[i] = 4;
					}
					if (original[i] == '5')
					{
						ori[i] = 5;
					}
					if (original[i] == '6')
					{
						ori[i] = 6;
					}
					if (original[i] == '7')
					{
						ori[i] = 7;
					}

					ten += ((pow(8, mi) * ori[i]));

					mi--;
				}
			}
		}

		if (object == 10)
		{
			fastout(ten);
		}
		else switch (object)
		{
		case 2:
		{
			make2(ten);
			break;
		}
		case 16:
		{
			make16(ten);
			break;
		}
		}

}

void fun10(int object)
{

	string original;
	bool ok = false;

	while (ok == false)
	{
		int i;
		int xiaoshu = 0;


		cin >> original;
		int le;
		le = original.length();

		ok = true;

		for (i = 0; i < le; i++)
		{
			bool okpoint = false;
			if (original[0] == '-')
			{
				positive = false;
			}

			if (original[i] == '-' && i != 0)
			{
				ok = false;
			}

			if (original[0] == '.' || original[le - 1] == '.')
			{
				ok = false;
			}

			if (original[i] == '.')
			{
				xiaoshu++;
			}

			if (xiaoshu > 1)
			{
				ok = false;

			}
			for (int i = 0; i < (original.length()); i++)
			{
				if (original[i] == '.')
					okpoint = true;
			}

			if (okpoint == true)
			{

				int sit = 0;
				for (int i = 0; i < (original.length()); i++)
				{
					if (original[i] == '.')
					{
						sit = i;
					}
				}
				
			}
			else
			{
				if (original[0] == '0')
					ok = false;
			}


			if (original[i] != '0' && original[i] != '1' && original[i] != '.' && original[i] != '-' && original[i] != '2' && original[i] != '3' && original[i] != '4' && original[i] != '5' && original[i] != '6' && original[i] != '7' && original[i] != '8' && original[i] != '9')
			{
				ok = false;
			}

		}

		if (ok == false)
		{
			cout << "\n\n你搞砸了，重来！\n\n";
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n\n转换已开始，请稍候......\n\n";
			system("pause");
			system("cls");
		}
	}
	double ten;

	if (positive == true)
	{ 
	stringstream Oss;
	Oss << original;
	Oss >> ten;
	}
	else
	{

		int n = original.length();
		for (int i = 0; i < n-1; i++)
		{
			original[i] = original[i + 1];
		}
		stringstream Oss;
		Oss << original;
		Oss >> ten;
	}


	switch (object)
	{
	case 2:
	{
		make2(ten);
		break;
	}
	case 8:
	{
		make8(ten);
		break;
	}
	case 16:
	{
		make16(ten);
		break;
	}
	}
}//

void fun16(int object)
{
	string original;
	bool ok = false;

	while (ok == false)
	{
		int i;
		int xiaoshu = 0;


		cin >> original;
		int le;
		le = original.length();

		ok = true;

		for (i = 0; i < le; i++)
		{
			bool okpoint = false;
			if (original[0] == '-')
			{
				positive = false;
			}

			if (original[i] == '-' && i != 0)
			{
				ok = false;
			}

			if (original[0] == '.' || original[le - 1] == '.')
			{
				ok = false;
			}

			if (original[i] == '.')
			{
				xiaoshu++;
			}

			if (xiaoshu > 1)
			{
				ok = false;

			}
			for (int i = 0; i < (original.length()); i++)
			{
				if (original[i] == '.')
					okpoint = true;
			}

			if (okpoint == true)
			{
	
				int sit = 0;
				for (int i = 0; i < (original.length()); i++)
				{
					if (original[i] == '.')
					{
						sit = i;
					}
				}
			
			}
			else
			{
				if (original[0] == '0')
					ok = false;
			}


			if (original[i] != '0' && original[i] != '1' && original[i] != '.' && original[i] != '-' && original[i] != '2' && original[i] != '3' && original[i] != '4' && original[i] != '5' && original[i] != '6' && original[i] != '7' && original[i] != '8' && original[i] != '9' && original[i] != 'A' && original[i] != 'B' && original[i] != 'C' && original[i] != 'D' && original[i] != 'E' && original[i] != 'F')
			{
				ok = false;
			}

		}

		if (ok == false)
		{
			cout << "\n\n你搞砸了，重来！\n\n";
			system("pause");
			system("cls");
		}
		else
		{
			cout << "\n\n转换已开始，请稍候......\n\n";
			system("pause");
			system("cls");
		}
	}


	double ten = 0.0;
	if (positive == true)
	{
		int le;
		le = original.length();
		int sit = 0;
		bool xiaoshu = false;
		for (int o = 0; o < le; o++)
		{
			if (original[o] == '.')
			{
				xiaoshu = true;
				sit = o;
			}
		}

		if (xiaoshu == true)
		{
			int upmi = sit - 1;
			int downmi = -1;
			int i;
			int j;
			int upor[MAX] = { 0,0,0,0,0,0 };
			int downor[MAX] = { 0,0,0,0,0,0 };


			for (i = 0; i < sit; i++)
			{
				if (original[i] == '0')
				{
					upor[i] = 0;
				}
				if (original[i] == '1')
				{
					upor[i] = 1;
				}
				if (original[i] == '2')
				{
					upor[i] = 2;
				}
				if (original[i] == '3')
				{
					upor[i] = 3;
				}
				if (original[i] == '4')
				{
					upor[i] = 4;
				}
				if (original[i] == '5')
				{
					upor[i] = 5;
				}
				if (original[i] == '6')
				{
					upor[i] = 6;
				}
				if (original[i] == '7')
				{
					upor[i] = 7;
				}
				if (original[i] == '8')
				{
					upor[i] = 8;
				}
				if (original[i] == '9')
				{
					upor[i] = 9;
				}
				if (original[i] == 'A')
				{
					upor[i] = 10;
				}
				if (original[i] == 'B')
				{
					upor[i] = 11;
				}
				if (original[i] == 'C')
				{
					upor[i] = 12;
				}
				if (original[i] == 'D')
				{
					upor[i] = 13;
				}
				if (original[i] == 'E')
				{
					upor[i] = 14;
				}
				if (original[i] == 'F')
				{
					upor[i] = 15;
				}
	
				ten += ((pow(16, upmi) * upor[i]));
				upmi--;

			}

			for (j = sit + 1; j < le; j++)
			{
				int u = 0;

				if (original[j] == '0')
				{
					downor[u] = 0;
				}
				if (original[j] == '1')
				{
					downor[u] = 1;
				}
				if (original[j] == '2')
				{
					downor[u] = 2;
				}
				if (original[j] == '3')
				{
					downor[u] = 3;
				}
				if (original[j] == '4')
				{
					downor[u] = 4;
				}
				if (original[j] == '5')
				{
					downor[u] = 5;
				}
				if (original[j] == '6')
				{
					downor[u] = 6;
				}
				if (original[j] == '7')
				{
					downor[u] = 7;
				}
				if (original[j] == '8')
				{
					downor[u] = 8;
				}
				if (original[j] == '9')
				{
					downor[u] = 9;
				}
				if (original[j] == 'A')
				{
					downor[u] = 10;
				}
				if (original[j] == 'B')
				{
					downor[u] = 11;
				}
				if (original[j] == 'C')
				{
					downor[u] = 12;
				}
				if (original[j] == 'D')
				{
					downor[u] = 13;
				}
				if (original[j] == 'E')
				{
					downor[u] = 14;
				}
				if (original[j] == 'F')
				{
					downor[u] = 15;
				}

				ten += ((pow(16, downmi) * downor[u]));
				downmi--;
			}
		}

		else
		{
			int mi = le - 1;    //!
			int i;
			int ori[MAX] = { 0,0,0,0,0,0 };//

			for (i = 0; i < le; i++)
			{
				if (original[i] == '0')
				{
					ori[i] = 0;
				}
				if (original[i] == '1')
				{
					ori[i] = 1;
				}
				if (original[i] == '2')
				{
					ori[i] = 2;
				}
				if (original[i] == '3')
				{
					ori[i] = 3;
				}
				if (original[i] == '4')
				{
					ori[i] = 4;
				}
				if (original[i] == '5')
				{
					ori[i] = 5;
				}
				if (original[i] == '6')
				{
					ori[i] = 6;
				}
				if (original[i] == '7')
				{
					ori[i] = 7;
				}
				if (original[i] == '8')
				{
					ori[i] = 8;
				}
				if (original[i] == '9')
				{
					ori[i] = 9;
				}
				if (original[i] == 'A')
				{
					ori[i] = 10;
				}
				if (original[i] == 'B')
				{
					ori[i] = 11;
				}
				if (original[i] == 'C')
				{
					ori[i] = 12;
				}
				if (original[i] == 'D')
				{
					ori[i] = 13;
				}
				if (original[i] == 'E')
				{
					ori[i] = 14;
				}
				if (original[i] == 'F')
				{
					ori[i] = 15;
				}

				ten += ((pow(16, mi) * ori[i]));
				mi--;
			}
		}
	}


	else
	{

		int le;
		le = original.length();
		int sit = 0;
		bool xiaoshu = false;
		for (int o = 1; o < le; o++)
		{
			if (original[o] == '.')
			{
				xiaoshu = true;
				sit = o;
			}
		}

		if (xiaoshu == true)
		{
			int upmi = sit - 2;
			int downmi = -1;
			int i;
			int j;
			int upor[MAX] = { 0,0,0,0,0,0 };
			int downor[MAX] = { 0,0,0,0,0,0 };   //对半分

			for (i = 1; i < sit; i++)
			{
				if (original[i] == '0')
				{
					upor[i] = 0;
				}
				if (original[i] == '1')
				{
					upor[i] = 1;
				}
				if (original[i] == '2')
				{
					upor[i] = 2;
				}
				if (original[i] == '3')
				{
					upor[i] = 3;
				}
				if (original[i] == '4')
				{
					upor[i] = 4;
				}
				if (original[i] == '5')
				{
					upor[i] = 5;
				}
				if (original[i] == '6')
				{
					upor[i] = 6;
				}
				if (original[i] == '7')
				{
					upor[i] = 7;
				}
				if (original[i] == '8')
				{
					upor[i] = 8;
				}
				if (original[i] == '9')
				{
					upor[i] = 9;
				}
				if (original[i] == 'A')
				{
					upor[i] = 10;
				}
				if (original[i] == 'B')
				{
					upor[i] = 11;
				}
				if (original[i] == 'C')
				{
					upor[i] = 12;
				}
				if (original[i] == 'D')
				{
					upor[i] = 13;
				}
				if (original[i] == 'E')
				{
					upor[i] = 14;
				}
				if (original[i] == 'F')
				{
					upor[i] = 15;
				}
				ten += ((pow(16, upmi) * upor[i]));

				upmi--;

			}

			for (j = sit + 1; j < le; j++)
			{
				int u = 0;
				if (original[j] == '0')
				{
					downor[u] = 0;
				}
				if (original[j] == '1')
				{
					downor[u] = 1;
				}
				if (original[j] == '2')
				{
					downor[u] = 2;
				}
				if (original[j] == '3')
				{
					downor[u] = 3;
				}
				if (original[j] == '4')
				{
					downor[u] = 4;
				}
				if (original[j] == '5')
				{
					downor[u] = 5;
				}
				if (original[j] == '6')
				{
					downor[u] = 6;
				}
				if (original[j] == '7')
				{
					downor[u] = 7;
				}
				if (original[j] == '8')
				{
					downor[u] = 8;
				}
				if (original[j] == '9')
				{
					downor[u] = 9;
				}
				if (original[j] == 'A')
				{
					downor[u] = 10;
				}
				if (original[j] == 'B')
				{
					downor[u] = 11;
				}
				if (original[j] == 'C')
				{
					downor[u] = 12;
				}
				if (original[j] == 'D')
				{
					downor[u] = 13;
				}
				if (original[j] == 'E')
				{
					downor[u] = 14;
				}
				if (original[j] == 'F')
				{
					downor[u] = 15;
				}
				ten += ((pow(16, downmi) * downor[u]));

				downmi--;

			}
		}


		else
		{
			int mi = le - 2;    //!
			int i;
			int ori[MAX] = { 0,0,0,0,0,0 };//只是为了初始化

			for (i = 1; i < le; i++)
			{
				if (original[i] == '0')
				{
					ori[i] = 0;
				}
				if (original[i] == '1')
				{
					ori[i] = 1;
				}
				if (original[i] == '2')
				{
					ori[i] = 2;
				}
				if (original[i] == '3')
				{
					ori[i] = 3;
				}
				if (original[i] == '4')
				{
					ori[i] = 4;
				}
				if (original[i] == '5')
				{
					ori[i] = 5;
				}
				if (original[i] == '6')
				{
					ori[i] = 6;
				}
				if (original[i] == '7')
				{
					ori[i] = 7;
				}
				if (original[i] == '8')
				{
					ori[i] = 8;
				}
				if (original[i] == '9')
				{
					ori[i] = 9;
				}
				if (original[i] == 'A')
				{
					ori[i] = 10;
				}
				if (original[i] == 'B')
				{
					ori[i] = 11;
				}
				if (original[i] == 'C')
				{
					ori[i] = 12;
				}
				if (original[i] == 'D')
				{
					ori[i] = 13;
				}
				if (original[i] == 'E')
				{
					ori[i] = 14;
				}
				if (original[i] == 'F')
				{
					ori[i] = 15;
				}
				ten += ((pow(16, mi) * ori[i]));
				mi--;
			}

		}

	}

	if (object == 10)
	{
		fastout(ten);
	}
	else switch (object)
	{
	case 2:
	{
		make2(ten);
		break;
	}
	case 8:
	{
		make8(ten);
		break;
	}
	}

}//

void make2(double ten)
{
	int i;
	int j;
	string first = { "                                                                                                                                      " };
	string end = { "                                                                                                                                    " };
	int temp;
	int left;
	int a = 0;
	float b = 0;  //整数小数部分

	//判断整数还是有小数。
	a = int(ten);
	b = ten - floor(ten);

	if (b == 0)
	{
		temp = a;
		for (i = 0;; i++)
		{
			left = temp % 2;
			first[i] = char(left) + '0';
			temp = temp / 2;

			if (temp == 0)
			{
				break;
			}
		}

		for (int j = 0; j <= i; j++)
		{
			end[j] = first[i - j];
		}


	}

	else
	{

		int pr = 0;
		temp = a;
		for (i = 0;; i++)
		{
			left = temp % 2;
			first[i] = char(left) + '0';
			temp = temp / 2;

			if (temp == 0)
			{
				break;
			}
		}
		for (int j = 0; j <= i; j++)
		{
			end[j] = first[i - j];
		}

		end[i + 1] = '.';


		for (j = i + 2;; j++)
		{
			b = b * 2;
			left = int(b);
			end[j] = char(left) + '0';
			b = b - left;

			pr++;
			if (b == 0)
			{
				break;
			}
			if (pr > PR)
			{
				break;
			}
		}
	}

	display(end);
}

void make8(double ten)
{
	int i;
	int j;
	string first = { "                                                                                                                                      " };
	string end = { "                                                                                                                                    " };
	int temp;
	int left;
	int a = 0;
	float b = 0;  

	a = int(ten);
	b = ten - floor(ten);

	if (b == 0)
	{
		temp = a;
		for (i = 0;; i++)
		{
			left = temp % 8;
			first[i] = char(left) + '0';
			temp = temp / 8;

			if (temp == 0)
			{
				break;
			}
		}

		for (int j = 0; j <= i; j++)
		{
			end[j] = first[i - j];
		}

	}

	else
	{

		int pr = 0;
		temp = a;
		for (i = 0;; i++)
		{
			left = temp % 8;
			first[i] = char(left) + '0';
			temp = temp / 8;

			if (temp == 0)
			{
				break;
			}
		}
		for (int j = 0; j <= i; j++)
		{
			end[j] = first[i - j];
		}

		end[i + 1] = '.';


		for (j = i + 2;; j++)
		{
			b = b * 8;
			left = int(b);
			end[j] = char(left) + '0';
			b = b - left;

			pr++;
			if (b == 0)
			{
				break;
			}
			if (pr > PR)
			{
				break;
			}
		}
	}

	display(end);
}

void make16(double ten)
{
	int i;
	int j;
	string first = { "                                                                                                                                      " };
	string end = { "                                                                                                                                    " };
	int temp;
	int left;
	int a = 0;
	float b = 0;  //整数小数部分

	//判断整数还是有小数。
	a = int(ten);
	b = ten - floor(ten);

	if (b == 0)
	{
		temp = a;
		for (i = 0;; i++)
		{
			left = temp % 16;
			if (left > 9)
			{
				first[i] = char(left) + '7';
			}
			else
			{
				first[i] = char(left) + '0';
			}
			temp = temp / 16;

			if (temp == 0)
			{
				break;
			}
		}

		for (int j = 0; j <= i; j++)
		{
			end[j] = first[i - j];
		}

	}

	else
	{

		int pr = 0;
		temp = a;
		for (i = 0;; i++)
		{
			left = temp % 16;
			if (left > 9)
			{
				first[i] = char(left) + '7';
			}
			else
			{
				first[i] = char(left) + '0';
			}
			temp = temp / 16;

			if (temp == 0)
			{
				break;
			}
		}
		for (int j = 0; j <= i; j++)
		{
			end[j] = first[i - j];
		}

		end[i + 1] = '.';

		for (j = i + 2;; j++)
		{
			b = b * 16;
			left = int(b);
			if (left > 9)
			{
				end[j] = char(left) + '7';
			}
			else
			{
				end[j] = char(left) + '0';
			}
			b = b - left;

			pr++;
			if (b == 0)
			{
				break;
			}
			if (pr > PR)
			{
				break;
			}
		}
	}
	display(end);
}

void display(string out)
{
	int button = 2;

	system("cls");
	cout << "\n\n";
	if (positive==false)
	{
		cout << "-";
	}
	cout << out;
	cout << "\n是转换得到的结果 ：） 单击以继续...\n\n";
	system("pause");
	cout<<"继续转换？ YES or NOT\n\n1 = yes, 2 = no.";
	cin >> button;

	if (button == 1)
	{
		cout << "我们的工作马上开始\n（为了运行的稳定，请一定使用英文输入法）\n\n\n";
		system("pause");
		system("cls");
		return ;
	}
	else
	{
		running = false;
	}
}

void fastout(double ten)
{
	int button = 2;

	system("cls");
	cout << "\n";
	if (positive == false)
	{
		cout << "-";
	}
	cout << std::to_string(ten) << "\n是转换得到的结果 ：） 单击以继续...\n\n";
	system("pause");
	cout << "继续转换？ YES or NOT\n\n1 = yes, 2 = no.";
	cin >> button;

	if (button == 1)
	{
		cout << "我们的工作马上开始\n（为了运行的稳定，请一定使用英文输入法）\n\n\n";
		system("pause");
		system("cls");
		return;
	}
	else
	{
		running = false;
	}
}