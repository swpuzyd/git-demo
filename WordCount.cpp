#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	char ch,fr[100];//文件路径 
	string s;
	FILE *f;
	int res1=0,res2=0;
	
	cout<<"请输入控制参数（-c/-w）: ";
	cin>>s;
	cout<<"请输入文件路径: ";
	cin>>fr;
	
	if((f = fopen(fr,"r")) == NULL)
    {
        printf("未找到指定目录文件：%s\n",fr);
        return 0;
    }
    
    bool flag=true;
	while((ch = fgetc(f)) != EOF)
	{
		res1++;
		if(ch!=' ' && ch!=',' && flag == true)
		{
			res2++;
			flag = false;
		}
		if(ch==' ' || ch==',' || ch=='\n') flag = true;
	} 	
	
	if(s=="-c") cout<<"字符数: "<<res1;
	else if(s == "-w") cout<<"单词数: "<< res2;
	
} 
