#include<stdio.h>
#include<windows.h>
#define sleep(n) Sleep(n * 1000)//������1�b��


typedef struct {
	int hp;
	int mp;
	int lv;
}character;

void end(int h,int m)//���
{
	printf("�N:Lv1\n");
	printf("HP:%d/15  MP:%d/10\n",h,m);
	printf("---------------------\n\n");
	printf("   (^�~ �~^)  \n");
	printf("   [��   ��  \n");
	printf("   (      )  \n");
	printf("    U^^^^^U   \n\n");
	printf("���܂悤�L:Lv2\n");
	printf("---------------------\n");
}
	

void battle(int h,int m,int comd)//�h���N�G�̂��܂悤�Z���ăz�C�~�X���C���ƂȂ�ňꏏ�ɏo�Ă���̂��ȁH
{
	printf("�N:Lv1\n");
	printf("HP:%d/15  MP:%d/10\n",h,m);
	printf("---------------------\n\n");
	printf("   (^�E�E^)  \n");
	printf("   [��   ��  \n");
	printf("   (      )  \n");
	printf("    U^^^^^U   \n\n");
	printf("���܂悤�L:Lv2\n");
	printf("---------------------\n");
	
	if(comd==0)//�E�B���h�E
	{
		printf("1 �U��\n");
		printf("2 ���@\n");
		printf("---------------------------\n");
	}
	
	else if(comd==1)
	{
		printf("1>�U��\n");
		printf("2 ���@\n");
		printf("---------------------------\n");
	}
	
	else if(comd==2)
	{
		printf("1 �U��\n");
		printf("2>���@\n");
		printf("---------------------------\n");
	}
	
	else
	{
		printf("1 �U��\n");
		printf("2>���@\n");
		printf("???>����҂̓{��\n");
		printf("---------------------------\n");
	}
}



int main (void)
{
	character p1={15,10,1};//�X�e�[�^�X
	character m1={10,15,2};
	
	int a;
	
	
	while(p1.hp>0&&m1.hp>0)
	{
		battle(p1.hp,p1.mp,0);
		scanf("%d",&a);
		
		if(a==1)
		{
			system("cls");
			battle(p1.hp,p1.mp,a);
			
			printf("�N�̍U��!\n");
			printf("���܂悤�L��2�̃_���[�W!!\n");
			
			m1.hp=m1.hp-2;
			sleep(2);
			system("cls");
			
			battle(p1.hp,p1.mp,a);
			
			printf("���܂悤�L�̂Ђ�����!\n");
			printf("�N��1�̃_���[�W!!\n");
			
			p1.hp=p1.hp-1;
			sleep(2);
			system("cls");
		}
		
		
		else if(a==2&&p1.mp>=2)
		{
			system("cls");
			battle(p1.hp,p1.mp,a);
			
			printf("�N�̖��@!\nMP��2������@��������!!\n");
			printf("���܂悤�L��3�̃_���[�W!!\n");
			
			m1.hp=m1.hp-3;
			p1.mp=p1.mp-2;
			sleep(2);
			system("cls");
			
			battle(p1.hp,p1.mp,a);
			
			printf("���܂悤�L�͂��т��Ă���!\n");
			
			sleep(2);
			system("cls");
		}
		else
		{
			system("cls");
			battle(p1.hp,p1.mp,a);
			
			printf("�s���R�}���h�����o\n");
			printf("�N��999�̃_���[�W!!\n");
			
			p1.hp=p1.hp-999;
			sleep(2);
			system("cls");
			
			battle(p1.hp,p1.mp,a);
			
			printf("���܂悤�L�͓{���Ă���!\n");
			
			sleep(2);
			system("cls");
		}
	}
	
	
	if(p1.hp>0)
	{
		end(p1.hp,p1.mp);
		printf("���܂悤�L��|����");
	}
	else
	{
		battle(p1.hp,p1.mp,a);
		printf("�N�͗͐s����");
	}
	return 0;
}