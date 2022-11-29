void say(int a,int ty,int e){
	printf("你的分数是%d,满分%d分\n",a,ty*10);
	printf("欢迎来到计算大卖场！每题十分\n请输入你想练习的练习题：\n0.退出\n1.四则运算练习\n2.加法专项练习\n3.减法专项练习\n4.乘法专项练习\n5.除法专项练习\n6.加减法专项练习\n7.乘除法专项练习\n");
	scanf("%d",&e);
}   
int main(){
	int x,y,s,ans,n,t,b,c,d,sum=0,exit,tishu,fanwei1,fanwei2;
	srand(time(0));
	printf("欢迎来到计算大卖场！每题十分\n请输入你想练习的练习题：\n0.退出\n1.四则运算练习\n2.加法专项练习\n3.减法专项练习\n4.乘法专项练习\n5.除法专项练习\n6.加减法专项练习\n7.乘除法专项练习\n");
	scanf("%d",&exit);
	while(exit!=0){
		if(exit==1){
			sum=0;
			printf("请输入你想做的题数：");
			scanf("%d",&tishu);
			printf("请输入加减法数字范围（填最大数）：");
			scanf("%d",&fanwei1);
			printf("请输入乘除法数字范围（填最大数）：");
			scanf("%d",&fanwei2);
			for(int i=1;i<=tishu;i++){ 
				x=rand()%fanwei1+1;
				y=rand()%fanwei1+1;
				c=rand()%fanwei2+1;
				d=rand()%fanwei2+1;
				if(x<y&&s==1){ //交换两个数 
					t=x;
					x=y;
					y=t;
				}
				if(s==3&&x%y!=0){ //整除除法 
					b=c*d;
				}
				while(x==0||y==0||c==0||d==0){ //不能出现0 
					x=rand()%fanwei1+1;
					y=rand()%fanwei1+1;
					c=rand()%fanwei2+1;
					d=rand()%fanwei2+1;
				}
				switch(s){
					case 0: //加法 
						ans=x+y;
						printf("%d+%d=",x,y);
						break;
					case 1: //减法 
						ans=x-y;
						printf("%d-%d=",x,y);
						break;
					case 2: //乘法 
						ans=c*d;
						printf("%d×%d=",c,d);
						break;
					case 3: //除法 
						ans=d;
						printf("%d÷%d=",b,c);
						break;
				}
				scanf("%d",&n); //输入答案 
				if(n==ans){ //判断答案是否正确 
					sum+=10; //加十分 
					printf("对啦!\n");
				}else{
					printf("错啦!\n");
				}
			}
			say(sum,tishu,exit);
		}else if(exit==2){
			sum=0;
			printf("请输入你想做的题数：");
			scanf("%d",&tishu);
			printf("请输入加法数字范围（填最大数）：");
			scanf("%d",&fanwei1);
			for(int i=1;i<=tishu;i++){ 
				x=rand()%fanwei1+1;
				y=rand()%fanwei1+1;
				while(x==0||y==0){ //不能出现0 
					x=rand()%fanwei1+1;
					y=rand()%fanwei1+1;
				}
				ans=x+y;
				printf("%d+%d=",x,y);
				scanf("%d",&n); //输入答案 
				if(n==ans){ //判断答案是否正确 
					sum+=10; //加十分 
					printf("对啦!\n");
				}else{
					printf("错啦!\n");
				}
			}
			say(sum,tishu,exit);
		}else if(exit==3){
			sum=0;
			printf("请输入你想做的题数：");
			scanf("%d",&tishu);
			printf("请输入减法数字范围（填最大数）：");
			scanf("%d",&fanwei1);
			for(int i=1;i<=tishu;i++){ //十道题 
				x=rand()%fanwei1+1;
				y=rand()%fanwei1+1;
				if(x<y){ //交换两个数 
					t=x;
					x=y;
					y=t;
				}
				while(x==0||y==0){ //不能出现0 
					x=rand()%fanwei1+1;
					y=rand()%fanwei1+1;
				}
				ans=x-y;
				printf("%d-%d=",x,y);
				scanf("%d",&n); //输入答案 
				if(n==ans){ //判断答案是否正确 
					sum+=10; //加十分 
					printf("对啦!\n");
				}else{
					printf("错啦!\n");
				}
			}
			say(sum,tishu,exit);
		}else if(exit==4){
			sum=0;
			printf("请输入你想做的题数：");
			scanf("%d",&tishu);
			printf("请输入乘法数字范围（填最大数）：");
			scanf("%d",&fanwei2);
			for(int i=1;i<=tishu;i++){ //十道题 
				c=rand()%fanwei2+1; 
				d=rand()%fanwei2+1;
				while(c==0||d==0){ //不能出现0 
					c=rand()%fanwei2+1;
					d=rand()%fanwei2+1;
				}
				ans=c*d;
				printf("%d*%d=",c,d);
				scanf("%d",&n); //输入答案 
				if(n==ans){ //判断答案是否正确 
					sum+=10; //加十分 
					printf("对啦!\n");
				}else{
					printf("错啦!\n");
				}
			}
			say(sum,tishu,exit);
		}else if(exit==5){
			sum=0;
			printf("请输入你想做的题数：");
			scanf("%d",&tishu);
			printf("请输入除法数字范围（填最大数）：");
			scanf("%d",&fanwei2);
			for(int i=1;i<=tishu;i++){ //十道题 
				c=rand()%fanwei2+1; 
				d=rand()%fanwei2+1; 
				b=c*d; //整除除法
				while(c==0||d==0){ //不能出现0 
					c=rand()%fanwei2+1;
					d=rand()%fanwei2+1;
				}
				ans=d;
				printf("%d/%d=",b,c);
				scanf("%d",&n); //输入答案 
				if(n==ans){ //判断答案是否正确 
					sum+=10; //加十分 
					printf("对啦!\n");
				}else{
					printf("错啦!\n");
				}
			}
			say(sum,tishu,exit);
		}if(exit==6){
			sum=0;
			printf("请输入你想做的题数：");
			scanf("%d",&tishu);
			printf("请输入加减法数字范围（填最大数）：");
			scanf("%d",&fanwei1);
			for(int i=1;i<=tishu;i++){ //十道题 
				x=rand()%fanwei1+1;
				y=rand()%fanwei1+1;
				s=rand()%2;
				if(x<y&&s==1){ //交换两个数 
					t=x;
					x=y;
					y=t;
				}
				while(x==0||y==0){ //不能出现0 
					x=rand()%fanwei1+1;
					y=rand()%fanwei1+1;
				}
				switch(s){
					case 0: //加法 
						ans=x+y;
						printf("%d+%d=",x,y);
						break;
					case 1: //减法 
						ans=x-y;
						printf("%d-%d=",x,y);
						break;
				}
				scanf("%d",&n); //输入答案 
				if(n==ans){ //判断答案是否正确 
					sum+=10; //加十分 
					printf("对啦!\n");
				}else{
					printf("错啦!\n");
				}
			}
			say(sum,tishu,exit);
		}if(exit==7){
			sum=0;
			printf("请输入你想做的题数：");
			scanf("%d",&tishu);
			printf("请输入乘除法数字范围（填最大数）：");
			scanf("%d",&fanwei1);
			for(int i=1;i<=tishu;i++){ //十道题 
				c=rand()%fanwei2+1; 
				d=rand()%fanwei2+1;
				s=rand()%2;
				if(s==1&&x%y!=0){ //整除除法 
					b=c*d;
				}
				while(c==0||d==0){ //不能出现0 
					c=rand()%fanwei2+1;
					d=rand()%fanwei2+1;
				}
				switch(s){
					case 0: 
						ans=c*d;
						printf("%d×%d=",c,d);
						break;
					case 1:  
						ans=d;
						printf("%d÷%d=",b,c);
						break;
				}
				scanf("%d",&n); //输入答案 
				if(n==ans){ //判断答案是否正确 
					sum+=10; //加十分 
					printf("对啦!\n");
				}else{
					printf("错啦!\n");
				}
			}
			say(sum,tishu,exit);
		}else{
			printf("请输入0或1或2或3或4或5或6或7!\n"); 
			printf("欢迎来到计算大卖场！每题十分\n请输入你想练习的练习题：\n0.退出\n1.四则运算练习\n2.加法专项练习\n3.减法专项练习\n4.乘法专项练习\n5.除法专项练习\n6.加减法专项练习\n7.乘除法专项练习\n");
			scanf("%d",&exit);
		}
	}
	printf("感谢你的游玩！欢迎下次再来！\n");
	system("pause");
	return 0;
}
