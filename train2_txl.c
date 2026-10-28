////本程序用于实现通讯录作用
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
////全局变量所有函数都能看到
//char name[15531] = { 0 };//最多记录500个人的信息
//char number[6012] = { 0 };
////函数声明
//void save_to_file(void);
//void load_from_file(void);
//int main()
//{
//	load_from_file();
//	while (1)
//	{
//		int xp;//用以记录是否继续操作
//		int quse;//记录进入功能的序号
//		
//
//		printf("===== 通讯录 =====\n");
//		printf("1.添加联系人\n");
//		printf("2.删除联系人\n");
//		printf("3.修改联系人\n");
//		printf("4.查找联系人\n");
//		printf("5.显示全部\n");
//		printf("0.退出\n");
//		printf("请选择\n");
//		scanf("%d", &quse);
//		if (quse == 1)
//		{
//			printf("你已进入添加联系人\n");
//			while (1)
//			{
//
//
//				printf("请输入新联系人的姓名与号码(姓名最多有30个字)\n");
//				char new_name[31];//存入新用户姓名
//				char new_number[12];//存入新用户的电话号码
//				printf("姓名:");
//				scanf("%s", new_name);
//				printf("\n电话号码:");
//				scanf("%s", new_number);
//
//				for (int a = 0;a < 15500;a = a + 31)
//				{
//					if (name[a] == 0)
//					{
//						for (int b = 0;b < 31;b++)
//						{
//							name[a + b] = new_name[b];
//						}
//						break;
//					}
//				}
//				for (int a = 0;a < 6000;a = a + 12)
//				{
//					if (number[a] == 0)
//					{
//						for (int b = 0;b < 12;b++)
//						{
//							number[a + b] = new_number[b];
//						}
//						break;
//					}
//				}
//				//显示全部
//				for (int a = 0;a < 500;a = a + 1)
//				{
//					if (number[a * 12] != 0)//在中国个人手机号头不为0
//					{
//
//
//						printf("%s:", &name[a * 31]);
//						printf("%s\n", &number[a * 12]);
//
//					}
//				}
//
//				printf("存入成功");
//				printf("是否继续存入新联系人,如果是请输入1,如果否请输入2\n");
//				scanf("%d", &xp);
//				if (xp == 1)
//				{
//
//				}
//				else if (xp == 2)
//				{
//					break;
//				}
//			}
//		}
//		else if (quse == 2)
//		{
//			printf("你已进入删除联系人\n");
//			while (1)
//			{
//				printf("请输入你要删除的联系人姓名");
//				char dename[31];//用以记录要删除联系人的名称
//				scanf("%s", dename);
//				for (int a = 0;a < 500;a++)
//				{
//					
//					
//					
//					int b = strcmp(dename, name + a * 31);
//					if (b == 0)
//					{
//						for (int c = a * 31;c < 31 * 500;c++)
//						{
//							name[c] = name[c + 31];
//						}
//						for (int c = a * 12;c < 12 * 500;c++)
//						{
//							number[c] = number[c + 12];
//						}
//						break;
//					}
//				}
//
//				printf("是否继续删除联系人,如果是请输入1,回目录请按2.\n");
//
//				scanf("%d", &xp);
//				if (xp == 1)
//				{
//
//				}
//				else if (xp == 2)
//				{
//					break;
//				}
//
//
//			}
//
//
//		}
//		else if (quse == 3)
//		{
//			//修改联系人
//			char re_name[31];
//			printf("你已进入修改联系人");
//			while (1)
//			{
//				int find = 0;
//				char new_name[31];
//				printf("请输入你要修改的联系人名称");
//				scanf("%s", re_name);
//				for (int a = 0;a < 500;a++)
//				{
//					
//					if (strcmp(re_name, name + a * 31) == 0)
//					{
//
//						printf("你要修改联系人名称请输入1,修改联系人号码请输入2.\n");
//						scanf("%d", &xp);
//						if (xp == 1)
//						{
//							
//							printf("请输入新名称");
//							scanf("%s", new_name);
//							for (int b = 0;b < 31;b++)
//							{
//								name[a * 31 + b] = new_name[b];
//								
//							}
//							
//						}
//						if (xp == 2)
//						{
//							char new_number[12];
//							printf("请输入新号码");
//							scanf("%s", new_number);
//							for (int c = 0;c < 12;c++)
//							{
//								number[a * 12 + c] = new_number[c];
//								
//							}
//							
//						}
//						find = 1;
//						break;
//					}
//					
//				}
//		        if(find == 0)
//				{
//					printf("没有该联系人");
//			    
//			
//				}
//		
//				printf("是否继续修改联系人,如果是请输入1,如果返回目录请输入2");
//				scanf("%d", &xp);
//				if (xp == 1)
//				{
//
//				}
//				if (xp == 2)
//				{
//					break;
//				}
//			}
//
//		}
//		else if (quse == 4)
//		{
//			printf("已进入查找联系人\n");
//			while (1)
//			{
//				char print_number[12];
//				char find_name[31];
//				printf("请输入联系人名称\n");
//				scanf("%s", find_name);
//				int find = 0;
//				for (int a = 0;a < 500;a++)
//				{
//					
//					if (strcmp(find_name, name + a * 31) == 0)
//					{
//						
//						for (int b = 0; b < 12;b++)
//						{
//							print_number[b] = number[a * 12 + b];
//						}
//						printf("%s:%s\n", find_name, print_number);
//						find = 1;
//						
//						break;
//					}
//					
//					
//				}
//				if (find == 0)
//				{
//					printf("没有该联系人\n");
//
//				}
//				printf("是否继续查找联系人,如果是请输入1,返回目录输入2.\n");
//				scanf("%d", &xp);
//				if (xp == 1)
//				{
//
//				}
//				if (xp == 2)
//				{
//					break;
//				}
//			}
//
//		}
//		else if (quse == 5)
//		{
//			printf("显示全部联系人及其电话号码");
//			for (int a = 0;a < 500;a = a + 1)
//			{
//				if (number[a * 12] != 0)//在中国个人手机号头不为0
//				{
//
//
//					printf("%s:", &name[a * 31]);
//					printf("%s\n", &number[a * 12]);
//				}
//			}
//		}
//		else if (quse == 0)
//		{
//			save_to_file();
//			return 0;
//		}
//		else
//		{
//			printf("没有该选项");
//		}
//	}
//	
//}
//void save_to_file(void)
//{
//	//打开文件,"w"模式
//	FILE* fp = fopen("txmulu.txt", "w");
//	if (fp == NULL)
//	{
//		printf("保存失败\n");
//		return;
//
//	}
//	//遍历所有位置把非空的存进去
//	for (int a = 0;a < 500;a++)
//	{
//		if (number[a * 12] != 0)
//		{
//			fprintf(fp, "%s %s\n",
//				name + a * 31,
//				number + a * 12);
//
//		}
//	}
//	fclose(fp);
//	printf("已保存\n");
//}
//void load_from_file(void)
//{
//	//用"r"打开
//	FILE* fp = fopen("txmulu.txt", "r");
//	if (fp == NULL)
//	{
//		return;
//	}
//	char nm[31];
//	char ph[12];
//	while (fscanf(fp, "%s %s", nm, ph) == 2)
//	{
//		int slot = -1;
//		for (int i = 0;i < 500;i++)
//		{
//			if (name[i * 31] == 0)
//			{
//				slot = i;
//				break;
//			}
//		}
//		if (slot < 0)
//		{
//			break;
//		}
//		strcpy(name + slot * 31, nm);
//		strcpy(number + slot * 12, ph);
//
//	}
//	fclose(fp);
//}
