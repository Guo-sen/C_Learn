//#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL],int row,int col);//初始化棋盘
void DisplayBoard(char board[ROW][COL],int row, int col);//打印棋盘
void PlayerMove(char board[ROW][COL],int row,int col);//玩家下棋
void MachineMove(char board[ROW][COL], int row,int col);//电脑下棋，找空白的位置随机下


//玩家赢 返回    *
//电脑赢 返回    #
//平局 返回      q
//继续游戏 返回  c

char IsWin(char board[ROW][COL],int row, int col);//判断输赢

