#include<stdio.h>
#include<windows.h>
#define sleep(n) Sleep(n * 1000)//そして1秒へ


typedef struct {
	int hp;
	int mp;
	int lv;
}character;

void end(int h,int m)//画面
{
	printf("君:Lv1\n");
	printf("HP:%d/15  MP:%d/10\n",h,m);
	printf("---------------------\n\n");
	printf("   (^× ×^)  \n");
	printf("   [つ   つ  \n");
	printf("   (      )  \n");
	printf("    U^^^^^U   \n\n");
	printf("さまよう猫:Lv2\n");
	printf("---------------------\n");
}
	

void battle(int h,int m,int comd)//ドラクエのさまよう鎧ってホイミスライムとなんで一緒に出てくるのかな？
{
	printf("君:Lv1\n");
	printf("HP:%d/15  MP:%d/10\n",h,m);
	printf("---------------------\n\n");
	printf("   (^・・^)  \n");
	printf("   [つ   つ  \n");
	printf("   (      )  \n");
	printf("    U^^^^^U   \n\n");
	printf("さまよう猫:Lv2\n");
	printf("---------------------\n");
	
	if(comd==0)//ウィンドウ
	{
		printf("1 攻撃\n");
		printf("2 魔法\n");
		printf("---------------------------\n");
	}
	
	else if(comd==1)
	{
		printf("1>攻撃\n");
		printf("2 魔法\n");
		printf("---------------------------\n");
	}
	
	else if(comd==2)
	{
		printf("1 攻撃\n");
		printf("2>魔法\n");
		printf("---------------------------\n");
	}
	
	else
	{
		printf("1 攻撃\n");
		printf("2>魔法\n");
		printf("???>製作者の怒り\n");
		printf("---------------------------\n");
	}
}



int main (void)
{
	character p1={15,10,1};//ステータス
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
			
			printf("君の攻撃!\n");
			printf("さまよう猫に2のダメージ!!\n");
			
			m1.hp=m1.hp-2;
			sleep(2);
			system("cls");
			
			battle(p1.hp,p1.mp,a);
			
			printf("さまよう猫のひっかく!\n");
			printf("君に1のダメージ!!\n");
			
			p1.hp=p1.hp-1;
			sleep(2);
			system("cls");
		}
		
		
		else if(a==2&&p1.mp>=2)
		{
			system("cls");
			battle(p1.hp,p1.mp,a);
			
			printf("君の魔法!\nMPを2消費し魔法を唱えた!!\n");
			printf("さまよう猫に3のダメージ!!\n");
			
			m1.hp=m1.hp-3;
			p1.mp=p1.mp-2;
			sleep(2);
			system("cls");
			
			battle(p1.hp,p1.mp,a);
			
			printf("さまよう猫はおびえている!\n");
			
			sleep(2);
			system("cls");
		}
		else
		{
			system("cls");
			battle(p1.hp,p1.mp,a);
			
			printf("不正コマンドを検出\n");
			printf("君に999のダメージ!!\n");
			
			p1.hp=p1.hp-999;
			sleep(2);
			system("cls");
			
			battle(p1.hp,p1.mp,a);
			
			printf("さまよう猫は怒っている!\n");
			
			sleep(2);
			system("cls");
		}
	}
	
	
	if(p1.hp>0)
	{
		end(p1.hp,p1.mp);
		printf("さまよう猫を倒した");
	}
	else
	{
		battle(p1.hp,p1.mp,a);
		printf("君は力尽きた");
	}
	return 0;
}