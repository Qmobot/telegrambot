// Данный кусочек кода отвечает за внедрения "Шапки", в которой прописаны детали библиотеки
#include "qmobot.h"


// Есть два вида комментариев:
// 1. Комментарии, которые начинаются и идут на всю линию с "// Comment"
// 2. Комментарии на отрывок, которые идут внутри скобок "/* Comment */"

// Декларируем все функции, чтобы программа знала, что такие функции есть
void vars();
void calc();

// Настройка чипа
void setup(){
  delay(2000);
    Qchip.begin(
      /* Нужно ли подключать экран - Нет */false, 
      /* Нужно ли подключение по последовательному порту? - Да */true
        );
    // vars();
    // calc();
    // chat();
    sumit();
}

// Данная часть кода будет выпонятся постоянно в цикле
void loop(){
    
}

// Переменные - место хранения данных внутри программного кода,
// например: значение числа, строчку текста или логический операнд,
// правильно(true) или неправильно(false).
void vars(){
  Serial.println();
  Serial.println("Переменные: ");
  Serial.println();

  int number = 1;
  Serial.println(number);
  // Это называется декларирование переменной - ее создание.
  // В начале пишется тип переменной (целое число, буква, текст),
  // затем название переменной и потом ее значение.
  number = 3;
  Serial.println(number);
  // После декларирования переменной, ее можно менять или использовать.
  // Имена переменных должы быть текстом (number, n2, awdawd)

  // Типы числовых переменных
  int number2 = 5; // int - целое число, цифра от -32768 до 32767
  Serial.println(number2);

  float number3 = 5.5; // float - большое плавающее число от -3.4028235E38 до 3.4028235E38
  Serial.println(number3);

  Serial.println();
  Serial.println("Логика: ");
  bool smt = true; // bool - логическое true/false, можно также писать 1/0
  Serial.println(smt);

  bool smt2 = 1; // Есть еще виды переменных, но их используют реже
  Serial.println(smt2);

  Serial.println();
  Serial.println("Буква: ");
  // Текстовые переменные
  char aC = 'A'; // char - буква, пишется внутри одинарных скобок, хранит значение буквы.
  Serial.println(aC);

  Serial.println();
  Serial.println("Строка: ");
  String Privet = "Privet"; // String - строка, набор букв.
  Serial.println(Privet);

  Serial.println();
  Serial.println("Массивы:");
  // Массивы
  int numbers[] = {1, 2, 3}; // Массив - переменная, которая хранит много значений.
  // Serial.println(numbers[]); - Выдаст ошибку, так как он не может перевести массив цифр в текст.

  numbers[0] = 5; // В массиве можно получить доступ к каждой переменной по индексу (начинается с 0).
  Serial.println(numbers[0]);
  Serial.println(numbers[1]);
  Serial.println(numbers[2]);
  Serial.println(numbers[3]);

  char stringlike[] = {'A', 'B'}; // Можно сделать массив букв.
  Serial.println(stringlike[0]);
  Serial.println();

  // Простые операции с числами:
  float sum;
  int sum2;
  float first = 50.5;
  int second = 4;

  // sum = float, если во float присвоить integer, то он integer станет float-ом
  sum = first + second;
  Serial.print("Float + interger = float: 50.5 + 4 = "); // Вывести без новой строки в конце.
  Serial.println(sum);
  Serial.println();

  // И наоборот, float округлится, если отправить его в integer
  sum2 = first + second;
  Serial.print("Integer + float = integer: 4 + 50.5 = "); // Вывести без новой строки в конце.
  Serial.println(sum2);
  Serial.println();

  // Можно integer превратить во float путем функции (float)
  float conv;
  conv = (float)first/2;
  Serial.println();
  Serial.print("4/2= ");
  Serial.println(conv);
  Serial.println();

  // Даль идут стандартные функции
  float newsum;
  float a = 3;
  float b = 2;

  // Деление
  newsum = a/b;
  Serial.print("3/2=");
  Serial.println(newsum);
  // Умножение
  newsum = a*b;
  Serial.print("3*2=");
  Serial.println(newsum);
  // Сумма
  newsum = a+b;
  Serial.print("3+2=");
  Serial.println(newsum);
  // Разница
  newsum = a-b;
  Serial.print("3-2=");
  Serial.println(newsum);

  Serial.println();

  // Также есть функция высчитывания остатка % (работает только с integer)
  int ostatok;
  int J = 5;
  int K = 2;
  ostatok = J%K;
  // То есть посчитать деление с остатком
  int celoe;
  celoe = J/K;
  Serial.print("5/2 = ");
  Serial.print(celoe);
  Serial.print(" с остатком ");
  Serial.println(ostatok);
  Serial.println();

  // Простые операции с текстом
  String Sum = "";
  String A = "qmobot.";
  String B = "com";
  Sum = A + B;
  Serial.print("qmobot. + com = ");
  Serial.println(Sum);
  Serial.println();

  // Простые методы с массивами и строками
  String firstS = "ABCDE";
  int len = firstS.length();
  Serial.print("Длина 'ABCDE' равна ");
  Serial.println(len);
  Serial.println();

  String secondS = "23";
  int num = secondS.toInt();
  num += 5;
  Serial.println(num);
}

// Далее создадим функцию, в которой посмотрим как можно работать с логикой.
void calc(){
  Serial.println("Работа с логикой и циклами: ");
  Serial.println();

  bool a = true;
  bool b = false;
  bool c = true;
  bool e;

  // Далее пойдут примеры сравнений:

  e = a == b;
  Serial.println("true и false равны?: ");
  Serial.println(e);

  e = a == c;
  Serial.println("true и true равны?: ");
  Serial.println(e);

  e = 5 > 3;
  Serial.println("5 больше чем 3?: ");
  Serial.println(e);

  Serial.println("5 больше или равно 5?: ");
  Serial.println(5>=5);

  Serial.println("5+5 больше чем 3?: ");
  Serial.println((5+5)>3);

  // Также можно сравнивать буквы и строки:
  char C = 'A';
  char P = 'A';
  Serial.println("A равно A?: ");
  Serial.println(C==P);

  String G = "Privet";
  Serial.println("Privet равно Privet?: ");
  Serial.println(G=="Privet");

  Serial.println("Privet равно privet?: ");
  Serial.println(G=="privet");

  // Можно делать многоуровневые условия
  int a1 = 1;
  int a2 = 2;
  int a3 = 3;

  Serial.print("3 больше чем 2 и 3 больше чем 1?: ");
  Serial.println(a3>a1 && a3>a2);
  Serial.print("3 больше чем 2 или 1 больше чем 2?: ");
  Serial.println(a3>a1 || a1>a2);

  // Когда выражение true или false, можно запускать функции:

  Serial.println();
  Serial.println();
  if(5==5){
    Serial.println("5==5!!!");
  }

  // Также можно их использовать при невыполнении условия:
  int pp = 5;
  if(pp > 10){
    Serial.println("pp > 10!!!");
  }else{
    Serial.println("pp <= 10!!!");
  if(true){

  }
  }
  

  // Можно создавать многоуровневые условия:
  int qq = 6;
  Serial.println();

  bool na2 = false;
  bool na3 = false;
  bool na4 = false;

  if(qq%2 == 0){
    Serial.println("Цифра делится на 2");
    na2 = true;
  }
  if(qq%3 == 0){
    Serial.println("Цифра делится на 3");
    na3 = true;
  }
  if(qq%4 == 0){
    Serial.println("Цифра делится на 4");
    na4 = true;
  }

  // Циклы
  
  int aa = 0;

  while(aa<10){ // While - пока, что есть делай что-то пока значение равно истине, 
              // то есть пока a меньше 10-ти
    aa ++; // Увеличивай а на одно значение вверх

    Serial.print("Значение аa равно: ");
    Serial.println(aa);
  }
  Serial.println("Цикл окончен! ");
  Serial.print("Значение аa равно: ");
  Serial.println(aa);
  Serial.println();

  // Когда ваше условие меняется внутри цикла, можно использовать цикл for
  // Разница в том, что значение меняется внутри начала цикла, то есть
  // тут значение дойдет до 9, а не десяти как в while цикле
  for(int i = 0; i < 10; i++){
    Serial.print("Значение i равно: ");
    Serial.println(i);
  }
  Serial.println("Цикл окончен! ");
  Serial.println();

}
