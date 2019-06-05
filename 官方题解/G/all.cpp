/*程序源码*/
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	string s = "soargtjWw";
	string a; system("color 3F");
	printf("小小龙很喜欢龙，于是他开始养龙。\n已知每只龙出生的第二天就会生下一只小龙\n且对于每头刚出生的小龙，在他生下第二头小龙后立马会逃走。\n假设在第一天，小小龙获得了一条龙，\n请问，在第40天晚上，小小龙还有几条龙？\n答对就能得到flag，格式ypctf{}\n你的答案：");
		cin >> a;

	for (int i = 0; i<s.size() && i<a.size(); i++)
	{
		s[i] -= a[i] - '7';
	}system("color 5F");

	cout << s << endl;

	system("pause");;



	return 0;
}


/*加密解密*/
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	string s = "ypctf{pZ}";
	int i;
	string a = "165580141";
	string a1 = "165580141";
	cout << s.size() << a.size()<<endl;
	for (i = 0; i < s.size(); i++)
	{
		 a[i]+=(s[i]-'7');
		
	}
	cout << a << endl;;
	for (i = 0; i < s.size(); i++)
	{
		a[i] -= (a1[i] - '7');

	}
	cout << a << endl;;
	system("pause");
	return 0;
}
*/

/* 程序代码
#include<stdio.h>
int main()
{
	__int64 m[365];int T,N,i,j;
	scanf("%d",&T);
	if(T<0) return -1;
	for(i=0;i<T;i++)
	{
		m[0]=0;m[1]=1;m[2]=2;
		scanf("%d",&N);
		
		if(N==1) printf("1\n");
		if(N==2) printf("2\n");
		if(N>2)
	    {
	    	for(j=3;j<=N;j++)
	    	m[j]=m[j-1]+m[j-2];
	    	printf("%I64d\n",m[N]);
		}
	}
	return 0;
}
*/