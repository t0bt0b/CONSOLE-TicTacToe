#include <stdio.h>
#include <Windows.h>
#include <time.h>

void delay();

typedef struct {
	char playerOneName[20];
	char playerTwoName[20];
}PLAYER;

void willkommen() {
	printf("-------------------------------------------------------------------------------------------------------------\n");
	printf(" ________   ___   _______        ________    ________      _______     ________	   __________    __________\n");
	printf("|___  ___| |___| |  ___	 |	|___  ___| _|        |_   |  ___  |   |___  ___|  |  ______  |  |    ______|\n");
	printf("   |  |     ___  | |   |_|	   |  |	  | |	     | |  | |   |_|      |  |     | | 	   | |  |   |\n");
	printf("   |  |	   |   | | |		   |  |	  | |________| |  | | 	         |  |     | |	   | |  |   |______\n");
	printf("   |  |	   |   | | |    	   |  |	  | |________| |  | |	         |  |     | |	   | |  |   _______|\n");
	printf("   |  |    |   | | | 	_          |  |	  | |	     | |  | |    _       |  |     | |      | |  |   |\n");
	printf("   |  |	   |   | | |___| |         |  |	  | |	     | |  | |___| |      |  |     | |______| |  |   |______\n");
	printf("   |__|    |___| |_______|	   |__|	  |_|        |_|  |_______|      |__|     |__________|  |__________|\n");
	printf("-------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\t\t\t     v~1.0\n\t\t\t\t\t\t    made by\n\t\t\t\t\t\t  Tobias Rath\n\t\t\t\t\t\tMarkus Schwarzl");
	delay();
}
void GotoXY(int x, int y) {
	HANDLE a;
	COORD b;
	fflush(stdout);
	b.X = x;
	b.Y = y;
	a = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(a, b);
}
void clear() {
	system("cls");
}
void X(int x, int y)
{

	GotoXY(x, y);
	printf("xxx         xxx\n");
	y++;
	GotoXY(x, y);
	printf(" xxx       xxx\n");
	y++;
	GotoXY(x, y);
	printf("  xxx     xxx\n");
	y++;
	GotoXY(x, y);
	printf("   xxx   xxx\n");
	y++;
	GotoXY(x, y);
	printf("    xxx xxx \n");
	y++;
	GotoXY(x, y);
	printf("     xxxxx    \n");
	y++;
	GotoXY(x, y);
	printf("    xxx xxx\n");
	y++;
	GotoXY(x, y);
	printf("   xxx   xxx\n");
	y++;
	GotoXY(x, y);
	printf("  xxx     xxx\n");
	y++;
	GotoXY(x, y);
	printf(" xxx       xxx\n");
	y++;
	GotoXY(x, y);
	printf("xxx         xxx");

}
void O(int x, int y)
{

	GotoXY(x, y);
	printf(" 00000000000000\n");
	y++;
	GotoXY(x, y);
	printf(" 000        000\n");
	y++;
	GotoXY(x, y);
	printf(" 000        000\n");
	y++;
	GotoXY(x, y);
	printf(" 000        000\n");
	y++;
	GotoXY(x, y);
	printf(" 000        000\n");
	y++;
	GotoXY(x, y);
	printf(" 000        000\n");
	y++;
	GotoXY(x, y);
	printf(" 000        000\n");
	y++;
	GotoXY(x, y);
	printf(" 000        000\n");
	y++;
	GotoXY(x, y);
	printf(" 000        000\n");
	y++;
	GotoXY(x, y);
	printf(" 000        000\n");
	y++;
	GotoXY(x, y);
	printf(" 00000000000000");
}
int placeIt(int field, int round) {
	
	int a_1 = 8, b_1 = 3;
	int a_2 = 37, b_2 = 3;
	int a_3 = 67, b_3 = 3;
	int a_4 = 8, b_4 = 18;
	int a_5 = 37, b_5 = 18;
	int a_6 = 67, b_6 = 18;
	int a_7 = 8, b_7 = 33;
	int a_8 = 37, b_8 = 33;
	int a_9 = 67, b_9 = 33;

	if (round % 2 == 0) {
		switch (field)
		{
		case 1:	X(a_1, b_1);
			break;
		case 2:	X(a_2, b_2);
			break;
		case 3:	X(a_3, b_3);
			break;
		case 4:	X(a_4, b_4);
			break;
		case 5:	X(a_5, b_5);
			break;
		case 6:	X(a_6, b_6);
			break;
		case 7:	X(a_7, b_7);
			break;
		case 8:	X(a_8, b_8);
			break;
		case 9:	X(a_9, b_9);
			break;
		default:clear();
				printf("ERROR!\nPlace not found!");
				exit(0);
			break;
		}
	}
	if (round % 2 == 1) {
		switch (field)
		{
		case 1:	O(a_1, b_1);
			break;
		case 2:	O(a_2, b_2);
			break;
		case 3:	O(a_3, b_3);
			break;
		case 4:	O(a_4, b_4);
			break;
		case 5:	O(a_5, b_5);
			break;
		case 6:	O(a_6, b_6);
			break;
		case 7:	O(a_7, b_7);
			break;
		case 8:	O(a_8, b_8);
			break;
		case 9:	O(a_9, b_9);
			break;
		default:clear();
			printf("ERROR!\nPlace not found!");
			exit(0);
			break;
		}
	}
	return 1;
}
int win(int *playerArray) {
	int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
	int winner = 0;
	for (int i = 0; i <= 8; i++) {
		if (playerArray[i] == 1)f1 = 1;
		if (playerArray[i] == 2)f2 = 1;
		if (playerArray[i] == 3)f3 = 1;
		if (playerArray[i] == 4)f4 = 1;
		if (playerArray[i] == 5)f5 = 1;
		if (playerArray[i] == 6)f6 = 1;
		if (playerArray[i] == 7)f7 = 1;
		if (playerArray[i] == 8)f8 = 1;
		if (playerArray[i] == 9)f9 = 1;
	}
	if ((f1 == 1 && f2 == 1 && f3 == 1) || (f4 == 1 && f5 == 1 && f6 == 1) || (f7 == 1 && f8 == 1 && f9 == 1) ||
		(f1 == 1 && f4 == 1 && f7 == 1) || (f2 == 1 && f5 == 1 && f8 == 1) || (f3 == 1 && f6 == 1 && f9 == 1) ||
		(f1 == 1 && f5 == 1 && f9 == 1) || (f3 == 1 && f5 == 1 && f7 == 1))return 1;
	return 0;
}
int input(PLAYER* player) {
	int feldzahl;
	static int round = 0;
	int failures = 0;
	int failure;
	int var;
	static int playerOneInput[9] = { 0 };
	static int OnePTR = playerOneInput;
	static int playerTwoInput[9] = { 0 };
	static int TwoPTR = playerTwoInput;
	GotoXY(30, 50);
	printf("--------------------------------------------------");
	GotoXY(30, 53);
	printf("--------------------------------------------------");
	while (1) {
		if (round % 2 == 0) {
			GotoXY(32, 51);
			printf("%s! ", player->playerOneName);
			do {
				failure = 0;
				GotoXY(32, 52);
				printf("Wo willst du dein Zeichen setzen? ");
				printf("  ");
				printf("\b\b");
				for (int i = 0; i < failures; i++) {
					printf("  ");
					printf("\b\b");
				}
				scanf_s("%d", &feldzahl);
				for (int i = 0; i <= 8; i++) {
					if (feldzahl == playerOneInput[i] || feldzahl == playerTwoInput[i])failure = 1;
				}
				failures++;
			} while (feldzahl > 9 || feldzahl < 1 || failure == 1);
			playerOneInput[round] = feldzahl;
			var = placeIt(feldzahl, round);
			int winner = win(OnePTR);
			round++;
			failure = 0, failures = 0;
			if (winner == 1) {
				GotoXY(32, 55);
				printf("%s hat gewonnen!", player->playerOneName);
				getchar();
				getchar();
				GotoXY(32, 65);
				exit(0);
			}
		}
		else if (round >= 8) {
			GotoXY(32, 55);
			printf("Keiner hat gewonnen!");
			getchar();
			getchar();
			GotoXY(32, 65);
			exit(0);
		}
		else if (round % 2 == 1) {
			GotoXY(32, 51);
			printf("%s! ", player->playerTwoName);
			do {
				failure = 0;
				GotoXY(32, 52);
				printf("Wo willst du dein Zeichen setzen? ");
				printf("  ");
				printf("\b\b");
				for (int i = 0; i < failures; i++) {
					printf("  ");
					printf("\b\b");
				}
				scanf_s("%d", &feldzahl);
				for (int i = 0; i <= 8; i++) {
					if (feldzahl == playerTwoInput[i] || feldzahl == playerOneInput[i])failure = 1;
				}
				failures++;
			} while (feldzahl > 9 || feldzahl < 1 || failure == 1);
			playerTwoInput[round] = feldzahl;
			var = placeIt(feldzahl, round);
			int winner = win(TwoPTR);
			round++;
			failure = 0, failures = 0;
			if (winner == 1) {
				GotoXY(32, 55);
				printf("%s hat gewonnen!", player->playerTwoName);
				getchar();
				getchar();
				GotoXY(32, 65);
				exit(0);
			}
		}
	}
}
void spielfeld_klein() {
	printf("       |  __   |  ___\n");
	printf("  /|   | /  \\  | |   |\n");
	printf("   |   |   /   |   __|\n");
	printf("   |   |  /    |     |\n");
	printf("  _|_  | /____ | |___|\n");
	printf("-----------------------\n");
	printf("       |  ____ |  ___\n");
	printf("  /    | |     | |   \n");
	printf(" /     | |____ | |___\n");
	printf("/___|_ |      || |   |\n");
	printf("    |  |  ____|| |___|\n");
	printf("-----------------------\n");
	printf("_____  |  ___  |  ___\n");
	printf("    /  | |   | | |   |\n");
	printf("   /   | |___| | |___|\n");
	printf("  /    | |   | |     |\n");
	printf(" /     | |___| |     |\n");
}
void spielfeld(PLAYER* player) {
	system("cls");
	int i;
	// __
	for (i = 0; i <= 89; i++) {
		GotoXY(i, 0);
		printf("#");
		GotoXY(i, 15);
		printf("#");
		GotoXY(i, 30);
		printf("#");
		GotoXY(i, 45);
		printf("#");
	}
	// |
	for (i = 0; i <= 45; i++) {
		GotoXY(0, i);
		printf("#");
		GotoXY(30, i);
		printf("#");
		GotoXY(59, i);
		printf("#");
		GotoXY(90, i);
		printf("#");
	}
	GotoXY(92, 2);
	printf("------------------");
	GotoXY(93, 3);
	printf("%s -> X", player->playerOneName);
	GotoXY(93, 4);
	printf("%s -> O", player->playerTwoName);
	GotoXY(92, 5);
	printf("------------------");

	GotoXY(0, 46);
	spielfeld_klein();
	input(player);
}
int Eingabe(){
	PLAYER player;
	clear();
	
	printf("Spieler 1 W\x84hle deinen Namen: ");
	gets(player.playerOneName);
	printf("\n%s ---> X \n\n", player.playerOneName);
	printf("Spieler 2 W\x84hle deinen Namen: ");
	gets(player.playerTwoName);

	while (strcmp(player.playerOneName, player.playerTwoName) == 0){
		printf("Name ist bereits vergeben!\nGeben sie ihren Namen erneut ein!\n");
		gets(player.playerTwoName);
	}
	printf("\n%s ---> O \n\n", player.playerTwoName);
	printf("\nDr\x81 \bcken Sie Enter um zu starten...");
	getchar();
	spielfeld(&player);
}
void delay(){
	int sec = 4000;
	time_t startTime = clock();
	while (clock() < startTime + sec);
}
void main() {
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_SHOWMAXIMIZED);
	system("COLOR 04");
	willkommen();
	Eingabe();
}