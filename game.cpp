#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

void VeTraiTim()
{

	printf("                       .:*\"\"\"\"\"*:.         .:*\"\"\"\"\"*:.                   .:*\"\"\"\"\"*:.         .:*\"\"\"\"\"*:.  \n");
	printf("                      *...........*       *...........*                 *...........*       *...........*                     \n");
	printf("                     \".............\\     /.............\"               \".............\\     /.............\"              \n");
	printf("                     \"..............*. .*..............\"               \"..............*. .*..............\"                \n");
	printf("                      \"...............*...............\"                 \"...............*...............\"                 \n");
	printf("                       \".............................\"                   \".............................\"                  \n");
	printf("                         \".........................\"                       \".........................\"                    \n");
	printf("                           \".....................\"                           \".....................\"                      \n");
	printf("                             \".................\"                               \".................\"                        \n");
	printf("                               \".............\"                                   \".............\"                          \n");
	printf("                                 \".........\"                                       \".........\"                            \n");
	printf("                                   \".....\"                                           \".....\"                              \n"); 
	printf("                                     *.*                                               *.*                                    \n\n\n");
	printf("          *       *     *     * * * *    * * * *    *     *                                             \n");
	printf("          |       |    / \\    |       *  |       *   \\   /                                            \n");
	printf("          * ----- *   *---*   * * * *    * * * *       *                                                \n");
	printf("          |       |  /     \\  |          |             |                                               \n");
	printf("          *       * *       * *          *             *                                                \n\t\t\t\t\t\t\t\t\t\t\t/\n");
	printf("                                *       *       *   x * x    *.    .*  ******  *    *  /  .*****.           \n");
	printf("                                 \\     / \\     /   *     *   |  \\ / |  |       | \\  |    *                  \n");
	printf("                                  *   *   *   *   x       x  *   *  *  ******  *  * *     '*****.             \n");
	printf("                                   \\ /     \\ /     x     x   |      |  |       |   \\|    .      .*             \n");
	printf("                                    *       *       * x *    *      *  ******  *    *     ******                  \n\n");
	printf("                                                                                  * * * .       *     *   *           \n");
	printf("                                                                                  |      *     / \\     \\ /          \n");
	printf("                                                                                  *      *    * - *     *             \n");
	printf("                                                                                  |      *   /     \\    |            \n");
	printf("                                                                                  * * * '   *       *   *             \n");   Sleep(500);
	printf("                                                          HUY KHAC                                                     ");
	system("cls"); 
}

int main()
{
	while(true){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		VeTraiTim();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
		VeTraiTim();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		VeTraiTim();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
		VeTraiTim();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		VeTraiTim();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		VeTraiTim();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
		VeTraiTim();
	}
}

