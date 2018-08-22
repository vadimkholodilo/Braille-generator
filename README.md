# Braille-generator
Простой гениратор брайлевского кода Unicode
На выходе выдаёт код символа из таблицы Unicode.
Принимает двоичную запись брайлевского символа.
Работает как с 8-ми точечным брайлем, так и с 6. Причем, если вы ввели только 6 точек, то остальные точки программа дополнит сама.
Запись двоичного числа составляется следующим образом:
Если точка в символе присутствует, то пишем 1, иначе 0.
Например, у нас есть буква л, которая состоит из точек 123, то двоичное число, являющееся кодом этого символа будет 111000.
Буква р состоит из точек 1235, двоичное число будет 111010.
Вы можете полностью не дописывать нули, например в букве л, можно программе передать только 111, нужное количество нулей она доставит сама, но это только в том случае, если нули идут подряд, например, в букве р такое сделать нельзя, так как между нулями находится единица.
## Системные требования
Сразу говорю, что тестировал программу только на Windows 10, а собирал в Microsoft visual studio 2017, но так как программа не имеет зависимостей, то её спокойно можно собрать на любой платформе, где есть g++.
## Сборка
Если вы пользователь Windows, то откройте проект в Visual studio и нажмите ctrl+shift+b или Проект > Собрать решение.
Если вы пользователь Linux, то в терминале напишите следующее:
"git clone https://github.com/vadimkholodilo/Braille-generator
cd Braille-generator
g++ main.cpp -o braille_generator",
## Связь с автором
Обо всех предложениях и пожеланиях пишите мне на почту: vadimkholodilo@gmail.com или если вы в состоянии, то сделайте Pull request