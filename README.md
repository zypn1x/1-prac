# 1-prac
1 prac - form.languages
(прак 1 - задача 7, Мусаев Садык Б05-123)
Для решения адачи заведем сласс regular с 3-мя полями:
Символ х (из условия)
Число num_of (в условии k)
Динамический двумерный массив buffer (длина каждого подмассива num_of + 1, а длина самого массива будет изменяться)
Во втором индексе массива (в индексе подмассива) мы будем хранить длину минимальной строки, которую нужно считать, чтоб в слове буква х встречалась количество раз, равное индексу.
Считывая символ у нас есть 2 поведения:

1. символ соответствует х, тогда в массив добавим еще один массив и изменим в добавленном в индексе 1 значение на 1 (buffer_[buffer_.size() - 1][1] = 1), потому что ровно столько столько символов мы считали и нашли 1 (индекс второй) букву x

2. Символ не равен х, тогда в массив все рано добавим подмассив, но в нем изменим в индексе значение на 1 (buffer_[buffer_.size() - 1][0] = 1), ведь мы считали 1 букву и получили 0 букв х


Считывая знак операции:

1. Звезда Клини (*):
       Вспоминая, как работает звезда Клини, мы обращаемся к последнему записанному                                  подмассиву. Достанем его и назовем Prev. Теперь будем идти по звезде лини до тех пор, пока у нас есть изменения в этом массиве, то есть пока мы считывая какое-то количество букв, мы будем получать различное число x. Так как нам хочется считывать наименьшее число букв, а получать наибольшее число букв i, мы пользуемся функцией tmp[i] = min(tmp[i], prev[j] + prev[i - j], в tmp изначально лежал массив аналогичный prev, но потом мы его начали менять потому, нам нужен был новый массив. Мы сравниваем какое минимальное количество букв мы должны отдать, чтоб получить i букв x , сравнивая tmp[i] и всевозможные  суммы last разбитые по индексам ( разбиваем индекс i на сумму двух, идем как нам будет выгоднее идти по звезде)

2.  Плюс (+): 
      Работает как обычный плюс в рег выражении (то есть подразумевает под собой исключающее или) то есть заходя в плюс достанем теперь уже два последних подмассива и пройдемся по ним, сравнивая значения в соответствующих индексах, так мы и поймем при каких индексах, нам выгоднее брать первое «слагаемое», а когда второе. Просто buffer_[buffer_.size() - 1][0] = min(first[I], second[I]).

3. Конкатенация (.)
    Работает примерно так же как и звезда (ведь звезда = конкатенация слова с собой) но теперь нам с одной стороны не надо думать, когда нам выйти из цикла, но с другой надо перебрать ве разбиения числа по которому идет цикл. То есть мы просто идем по парам (first[j];second[i - j]) и ищем ту, сумма которой наименьшая, ведь мы хоте получить наибольший индекс (а он уже равен i ) пройдя по минимальному кол-ву букв (отсюда и наименьший).


