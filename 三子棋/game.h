//#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL],int row,int col);//��ʼ������
void DisplayBoard(char board[ROW][COL],int row, int col);//��ӡ����
void PlayerMove(char board[ROW][COL],int row,int col);//�������
void MachineMove(char board[ROW][COL], int row,int col);//�������壬�ҿհ׵�λ�������


//���Ӯ ����    *
//����Ӯ ����    #
//ƽ�� ����      q
//������Ϸ ����  c

char IsWin(char board[ROW][COL],int row, int col);//�ж���Ӯ

