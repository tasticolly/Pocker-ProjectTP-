# Pocker-ProjectTP-
Игра «Покер»

Структура

Имеется карточный стол. Игра ведется в Безлимитный Техасский Холдем, идет турнир. В игре могут быть как живые игроки, так и боты. Живые игроки перед началом партии регистрируются.


Детали реализации

У всех игроков изначально равное количество денег. В начале игры игрокам случайным образом раздаются по 2 карты. У каждой карты есть индивидуальные номинал и масть.
Пользователи по очереди ходят (делают ставки, повышают/уравнивают/сбрасывают),  сменяются стадии игры (префлоп, флоп, терн, ривер). Время на ход ограничено. 
В конце раунда, исходя из карт на столе и на руках у оставшихся игроков, определяется победитель, который забирает банк. Игроки, у которых не осталось денег, выбывают, после чего начинается новый раунд. В определенные промежутки времени повышаются блайнды(минимальные ставки).
Игра ведется до тех пор, пока не останется один победитель.


Полезные паттерны и хинты
1. Strategy - разделение стратегий игры бота и игрока
2. Command - действия игрока

