/*
��Ѷ������ 
*/

#include <iostream>

using namespace std;

int main(){
	int ID1,ID2;//�������������ID
	while(cin>>ID1>>ID2){
		// ��������Ƿ�������� 
		if(ID1<1||ID1>1024 || ID2<1|| ID2>1024){
			cout<<-1<<endl;
			continue;
		}
		// ����32��unsigned int 
		unsigned int tag[32];
		
		int index=0;
		index=(ID1-1)/32;//��������洢���ֵ�λ�� 
		
		int temp=0;
		temp=(ID1-1)%32;//����������ڵ��±�
		
		tag[index]|=(1<<temp);//��ǵ�һ������Ϊ�����״̬ 
		
		index=(ID2-1)/32;
		temp=(ID2-1)%32;
		
		if((1<<temp)&tag[index]){
			cout<<1<<endl;
		} else{
			cout<<0<<endl;
		}
		
	}
	return 0;
	
} 
