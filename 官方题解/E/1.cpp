#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	string s = "}pl|j€Hb8€g:Db";
	string sssss = "qwe|j€Hb8€zxDb";
	string ssss = "zpsczj€Hb8€g:qd";
	string sss = "aopqqj€Hb8€g:Db";
	string ss = "i48sz€Hb8*f:Db";
	string a; system("color 1F");
	puts("都知道大家没有系统的学过。所以这是一道很基础的题目。\n\n\n ");
	puts("海狗的心里想到了一个数字，范围是-2^100到2^100。\n你来猜一猜吧\n猜对了就会有ypctf{}的字样，也就是本题的密码，嘻嘻嘻！\n否则就会变成乱码呢\n");
	printf("请输入海狗心中的数字：");
	cin >> a;

	for(int i=0;i<s.size()&&i<a.size();i++)
	{
		s[i]-=a[i]-'0';
	}
	for(int i=0;i<ss.size()&&i<a.size();i++)
	{
		ss[i]-=a[i]-'0';
	}
	for(int i=0;i<sss.size()&&i<a.size();i++)
	{
		sss[i]-=a[i]-'0';
	}
	for(int i=0;i<ssss.size()&&i<a.size();i++)
	{
		ssss[i]-=a[i]-'0';
	}
	for(int i=0;i<sssss.size()&&i<a.size();i++)
	{
		sssss[i]-=a[i]-'0';
	}
       
        system("color 4F");
        if(a=="78945428901213"){cout<<ss;return 0;
		}
		else if(a=="11118711890121")
		{cout<<sss;return 0;
		}
		else {
			cout<<"unlucky boy!"<<endl;
		}
	if(a!="409845313789012")	
	cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
       else
       cout<<s<<endl;

       system("pause");;
	
	
	
	return 0;
}


