#include <iostream>
#include <stdlib.h>

int main()

{  // Напоминание: в одной ячейке до 255
    
    // 0 0 0 69
    int i = 69; // Объявить i типа int и инициализировать на 69

    // 0 0 0 72
    int number = 72; // Определить переменную number типа int, дать значение 72

    // 0 0 0 141
    i = i + number; // Перезаписать значение i на 69 + 72

    // 0 0 0 0
    // 0 0 0 0
    // 0 0 0 0
    int arr[3] = {}; // Определить группу переменных (массив) из 3 элементов (инициализированных на 0)

    // 0 0 0 адрес
    int* iPointer = &i; // Создать указатель на i (iPointer)

    number = *iPointer;  // Считать данные по адресу из указателя в переменную number

    // 0 0 0 15
    *iPointer = 15; // Вписать в i через указатель значение 15

    // Сменить адрес в iPointer на первый элемент массива
    iPointer =&arr[0];

    // Переместиться на 3 элемент массива, используя pointer arithmetic
    iPointer = iPointer + 2;

    // Вписать в первый элемент массива напрямую, и в 3 через iPointer, значения 5 и 6
    // 0 0 0 5
    // 0 0 0 0
    // 0 0 0 6
    arr[0] = 5;
    *iPointer = 6;

    return 0;
}



