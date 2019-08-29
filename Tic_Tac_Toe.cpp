#include<iostream>
#include<conio.h>
#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

void main()
{

	int n, i, j, c, r, draw;
	char grid[3][3];
	draw = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid[i][j] = '*';
			std::cout << "  " << grid[i][j] << "  ";
		}
		std::cout << std::endl;
	}
	 
	mark:
	std::cout << "Enter player number : ";

	std::cin >> n;
	switch (n)
	{
	case 1: 
			loop:
			std::cout << "Enter row number: ";
			std::cin >> r;
			std::cout << "Enter column number: ";
			std::cin >> c;


			if (grid[r][c] != '*') {
				std::cout << "invalid move"<<std::endl;
				goto loop;

			}
			else {
				grid[r][c] = 'X';
			}
			for (i = 0; i < 3; i++) {
				for (j = 0; j < 3; j++) {
					std::cout << "  " << grid[i][j] << "  ";
				}
				std::cout << std::endl;
			}
			if (grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X') {
				std::cout << std::endl << "Player 1 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X') {
				std::cout << std::endl << "Player 1 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X') {
				std::cout << std::endl << "Player 1 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X') {
				std::cout << std::endl << "Player 1 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X') {
				std::cout << std::endl << "Player 1 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X') {
				std::cout << std::endl << "Player 1 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X') {
				std::cout << std::endl << "Player 1 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X') {
				std::cout << std::endl << "Player 1 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}

			draw = draw + 1;
			if (draw == 9)
			{
				goto tie;
			}
			
			
			goto mark;
			break;


	case 2: 
			loops:
			std::cout << "Enter row number: ";
			std::cin >> r;
			std::cout << "Enter column number: ";
			std::cin >> c;
			if (grid[r][c] != '*') {
				std::cout << "invalid move" << std::endl;
				goto loops;
			}
			else {
				grid[r][c] = 'O';
			}


			for (i = 0; i < 3; i++) {
				for (j = 0; j < 3; j++) {
					std::cout << "  " << grid[i][j] << "  ";
				}
				std::cout << std::endl;
			}
			if (grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O') {
				std::cout << std::endl << "Player 2 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O') {
				std::cout << std::endl << "Player 2 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O') {
				std::cout << std::endl << "Player 2 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O') {
				std::cout << std::endl << "Player 2 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}if (grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O') {
				std::cout << std::endl << "Player 2 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O') {
				std::cout << std::endl << "Player 2 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O') {
				std::cout << std::endl << "Player 2 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O') {
				std::cout << std::endl << "Player 1 has one the game!!" << std::endl;
				Sleep(2000);
				goto gameover;
			}
			draw = draw + 1;
			
			if (draw == 9)
			{
				goto tie;
			}
			
			
			goto mark;
			break;
	}
	
tie:	
		std::cout << "Its a draw!";
		Sleep(1000);
	    std::cout << std::endl;
		std::cout << "Thank you for playing the game!";
		Sleep(5000);



gameover:
		std::cout << "Thank you for playing the game!";
		Sleep(5000);

	
}

