#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));



/*	const int row = 3, col = 4;

	int arr[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}*/

/*	const int size = 10;

	int arr[size]{}, sum_all = 0, sum = 0, som = 0;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
		sum_all += arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 0)
		{
			sum += arr[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] <= 0)
		{
			som += arr[i];
		}
	}
	std::cout << "\nСумма положительных чисел: " << sum;
	std::cout << "\nСумма отрицательных чисел: " << som;
	std::cout << "\nСредние арифметическое: " << sum_all / size;*/

/*	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int choose = 0, randomNumber = 0, hp = 0, number = 0;
	int maxHp = 25, maxHpHard = 25, chance = 30;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\t Игра \"Угадай число\"\n\n\n";
		std::cout << "1 - Начать игру\n";
		std::cout << "2 - Настройки\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			system("cls");
			std::cout << "\n\n\n\t\tВыберите уровень сложности\n\n\n";
			std::cout << "1 - Лёгкий (1 - 500)\n";
			std::cout << "2 - Сложный (1 - 5000)\n";
			std::cout << "0 - Выход в меню\n\n";
			std::cout << "Ввод: ";
			std::cin >> choose;
			if (choose == 1)
			{
				randomNumber = rand() % 500 + 1;
				hp = maxHp;

				while (true)
				{	
					std::cout << "Кол-во жизней: " << hp << "\n";
					std::cout << "Введите число от 1 до 500: ";
					std::cin >> number;

					if (number == randomNumber)
					{
						std::cout << "Вы угадали! Поздравляем!\n";

						system("pause");
						break;
					}
					else if (number < 1 || number > 500)
					{
						std::cout << "Вы вышли за лимиты\n";
						Sleep(1000);
					}
					else
					{
						hp--;
						if (hp <= 0)
						{
							std::cout << "Вы проиграли!\n";
							std::cout << "Число компьютера было: " << randomNumber << "\n\n";
							system("pause");
							break;
						}

						std::cout << "\nНе верно\n";
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Взять подсказку за 1 жизнь?\n";
						std::cout << "1 - ДА\nЛюбое число - Нет\nВвод: ";
						std::cin >> choose;

						if (choose == 1)
						{

							if (rand() % 101 <= chance)
							{
								std::cout << "Халява\n";
								Sleep(1000);
							}
							else
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли!\n";
									std::cout << "Число компьютера было: " << randomNumber << "\n\n";
									system("pause");
									break;
								}
							}

							if (number < randomNumber)
							{
								std::cout << "Ваше число меньше числа компьютера\n";
							}
							else
							{
								std::cout << "Ваше число больше числа компбютера\n";
							}
							Sleep(1500);
						}
						else
						{
							std::cout << "Отказ от подсказок\n";
							Sleep(500);
						}
					}
				}
			}
			else if (choose == 2)
			{
					randomNumber = rand() % 5000 + 1;
					hp = maxHp;

					while (true)
					{
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "Вы угадали! Поздравляем!\n";

							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли за лимиты\n";
							Sleep(1000);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число компьютера было: " << randomNumber << "\n\n";
								system("pause");
								break;
							}

							std::cout << "\nНе верно\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - ДА\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{

								if (rand() % 101 <= chance)
								{
									std::cout << "Халява\n";
									Sleep(1000);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли!\n";
										std::cout << "Число компьютера было: " << randomNumber << "\n\n";
										system("pause");
										break;
									}
								}

								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компбютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказок\n";
								Sleep(500);
							}
						}
					}
			}
			else if (choose == 0)
			{
				break;
			}
			else
			{
				std::cout << "\nНекорректный ввод\n";
				Sleep(1500);
			}
		}
		else if (choose == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tНастройки игры\"\n\n\n";
				std::cout << "1 - Изменить кол-во жизней для легкой игры\n";
				std::cout << "2 - Изменить кол-во жизней для сложной игры\n";
				std::cout << "3 - Изменить шанс бесплатной подсказки для сложной игры\n";
				std::cout << "0 - Выход\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						std::cout << "Введите кол-во жизней для легкой сложности: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимое значения от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							maxHp = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						std::cout << "Введите кол-во жизней для сложной сложности: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимое значения от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							maxHp = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 3)
				{
					while (true)
					{
						std::cout << "Введите шанс бесплатной подсказки для сложной игры: ";
						std::cin >> choose;
						if (choose < 0 || choose > 100)
						{
							std::cout << "Допустимое значения от 0 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							chance = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "Некорректный ввод\n";
					Sleep(1000);
				}
			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
			break;
		}
		else
		{
			std::cout << "\nНекорректный ввод\n";
			Sleep(1500);
		}
	}*/

/*	double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;

	std::cout << "Решение полниго квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";
	std::cout << "Введите А: ";
	std::cin >> a;
	std::cout << "Введите B: ";
	std::cin >> b;
	std::cout << "Введите C: ";
	std::cin >> c;

	std::cout << "\n" << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

	d = std::pow(b, 2) - 4 * a * c;

	std::cout << "\nДискриминант: " << d << "\n\n";

	if (d < 0)
	{
		std::cout << "Нет корней\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень: " << x1 << "\n\n";
	}
	else
	{
		x1 = (-b + std::sqrt(b)) / (2 * a);
		x2 = (-b - std::sqrt(b)) / (2 * a);
		std::cout << "Первый корень: " << x1 << "\n\n";
		std::cout << "Второй корень: " << x2 << "\n\n";
	}*/
	return 0;
}








/*int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	double a = 0;
	double b = 0;
	double d = 0;
	char c = 0;

	std::cout << "\t\t\tКалькулятор\n";
	std::cout << "Введите первое число ";
	std::cin >> a;
	std::cout << "Введите второе число ";
	std::cin >> b;
	std::cout << "Введите знак(+ - * /) ";
	std::cin >> c;
	if (c == '+')
	{
		std::cout << a + b;
	}
	else if (c == '-')
	{
		std::cout << a - b;
	}
	else if (c == '*')
	{
		std::cout << a * b;
	}
	else if (c == '/')
	{
		if (b != 0)
		{
			std::cout << "Частное: " << a / b;
		}
		else
		{
			std::cout << "Нельзя\n";
		}
	}
	else 
	{
		std::cout << "Ошибка";
	}
	


	return 0;
}*/

/*int main()
{
	double a = 4.3;
	float b = 4.3f;


	if (3.4f + 2.5 == 5.9) {
		std::cout << "Sebastian";
	}


	return 0;
}*/

/*int main()
{
	int b = 0;
	int a = 0;

	std::cin >> a >> b;

	std::cout << a << " " << b;



	return 0;
}*/

/* int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	std::cout << "Как вас зовут?\n";
	std::cout << "\tЗачем нужна еда?\n";
	std::cout << "\t\tЗачем вам ваш сосед?\n";
	std::cout << "\t" << 200 << " Сколько он стоит?\n";
	std::cout << "Что такое что?\n";

	return 0;
}
*/
/*

	Типы данных:

	bool				true/false   0 - false
	char				'+'		43		-128 -- 127
	unsigned char		'#'				0 -- 255

	short				123				-32768 -- 32767
	unsigned short		123				0 -- 65535

	int					456326			-2147483648 -- 2147483647
	long long int		12345678		дофига
	unsigned int		123465463		0 -- 4294967295

	float				12345.4561		3.4E+-38
	double				12345687.10536	1.7E+-308
	lond double			no comment		3.4e-4932 -- 1.1e+4932

	Операторы:

	математические: + - * / = % ++  -- += -= *= /= ()
	сравнительные: > < >= <= != == <=>
	логические: && (и)    || (или)    ! (не)

	ТАБУ:  goto   and or not   int имяПеременной


*/







