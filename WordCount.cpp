#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	char ch,fr[100];//�ļ�·�� 
	string s;
	FILE *f;
	int res1=0,res2=0;
	
	cout<<"��������Ʋ�����-c/-w��: ";
	cin>>s;
	cout<<"�������ļ�·��: ";
	cin>>fr;
	
	if((f = fopen(fr,"r")) == NULL)
    {
        printf("δ�ҵ�ָ��Ŀ¼�ļ���%s\n",fr);
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
	
	if(s=="-c") cout<<"�ַ���: "<<res1;
	else if(s == "-w") cout<<"������: "<< res2;
	
} 
