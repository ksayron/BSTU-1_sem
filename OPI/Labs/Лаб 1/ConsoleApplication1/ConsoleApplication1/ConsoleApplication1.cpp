#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int kinx, bisx, rookx,knightx;//обьявляем переменные о месте фигуры по горизонтали
	char kiny, bisy, rooky,knighty;//обьявляем переменные о месте фигуры по вертикали
	cout << "Введите позицию короля:";
	cin >> kiny >> kinx;//вводим данные
	cout << "Введите позицию слона:";
	cin >> bisy >> bisx;//вводим данные
	cout << "Введите позицию ладьи:";
	cin >> rooky >> rookx;//вводим данные
	cout << "Введите позицию knight:";
	cin >> knighty >> knightx;//вводим данные
	int kiny2 = kiny;//присваеваем переменным номер символа в ASCII для дальнейших вычислений
	int bisy2 = bisy;//присваеваем переменным номер символа в ASCII для дальнейших вычислений
	int rooky2 = rooky;//присваеваем переменным номер символа в ASCII для дальнейших вычислений
	int knighty2 = knighty;
	int k = 0, collapsecheck = 0;//переменная для вывода различных вариантов ответа и для проверки столкновения фигур
	if ((bisy2 < rooky2 and bisy2 < kiny2 and kiny2 < rooky2) or (bisy2 > rooky2 and bisy2 > kiny2 and kiny2 > rooky2) or (bisy2 < rooky2 and bisy2 > kiny2 and kiny2 < rooky2) or (bisy2 > rooky2 and bisy2 < kiny2 and kiny2 > rooky2))//проверяем,чтобы белые фигуры не мешали друг другу
	{
		if (kiny2 + kinx == bisy2 + bisx or kiny2 - kinx == bisy2 - bisx) {//для того,чтобы проверить лежит ли король на диагонали слона мы сравниваем сумму или разность их координат, для чего мы и переводили символы в числа, а также не забываем предусмотреть,чтобы белые фигуры не мешали друг другу
			k = 1;//в зависимости от значения переменной k будут выведены разные варианты ответа
		}
	}
	if (rooky2 == bisy2) {// проаеряем не заграждает слон ладье путь,а т.к. ладья оперирует сразу в двух измерениях,то все в один оператор умещать нельзя
		if (rookx<kinx and bisx>rookx and bisx < kinx) {
			collapsecheck = 1;
		}
		if (rookx > kinx and bisx<rookx and bisx > kinx) {
			collapsecheck = 1;
		}

	}
	if (rookx == bisx) {
		if (rooky2<kinx and bisy2>rooky2 and bisy2 < kiny2) {
			collapsecheck = 1;
		}
		if (rooky2 > kiny2 and bisy2<rooky2 and bisy2 > kiny2) {
			collapsecheck = 1;
		}

	}

	if ((kiny2 == rooky2 or kinx == rookx) and collapsecheck == 0)//при отсутсвии заграждений для определания опасности от ладьи нужно посмотреть находяться ли они на одной координате
	{
		k = k + 2;
	}

	if ((abs(knightx - kinx) == 2 and abs(knighty2 - kiny2) == 1) or (abs(knightx - kinx) == 1 and abs(knighty2 - kiny2) == 2)) {
		cout << "knight"; return 0;
	}

	switch (k) {//с помощью оператора выбора выводим различные варианты ответа для задачи
	default:puts("В безопасности"); break;
	case 1:puts("В опасности из-за слона"); break;
	case 2:puts("В опасности из-за ладьи"); break;
	case 3:puts("В опасности из-за слона и ладьи"); break;
	}
}


