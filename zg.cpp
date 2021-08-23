#include "zg.h"
#include <ctime>
#include <cstdlib>
zg::zg() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
void zg :: setslovo() {
    srand(time(NULL));
    int a=(rand()%21)+1;
    string x;
    string y;
    switch (a) {
    case 1:
        x = "фарагонда";
        y = "Винкс. Школа волшебниц";
        break;
    case 2:
        x = "жопосрачик";
        y = "Рик и Морти";
        break;
    case 3:
        x = "освальд";
        y = "Доктор Кто";
        break;
    case 4:
        x="фергиссон";
        y="Звёздная принцесса против сил зла";
        break;
    case 5:
        x="марселин";
        y="Время Приключений";
        break;
    case 6:
        x="слоупок";
        y="Покемоны";
        break;
    case 7:
        x="катара";
        y="Аватар. Легенда об Аанге";
        break;
    case 8:
        x="ковальски";
        y="Пингвины из Мадагаскара";
        break;
    case 9:
        x="мориарти";
        y="Шерлок Холмс";
        break;
    case 10:
        x="макгакет";
        y="Гравити Фолз";
        break;
    case 11:
        x="абрахам";
        y="Симпсоны";
        break;
    case 12:
        x="сквидворд";
        y="Губка Боб Квадратные Штаны";
        break;
    case 13:
        x="толстопуз";
        y="Чип и Дейл спешат на помощь";
        break;
    case 14:
        x="зойдберг";
        y="Футурама";
        break;
    case 15:
        x="фаденберкер";
        y="По ту сторону изгороди";
        break;
    case 16:
        x="сакура";
        y="Наруто";
        break;
    case 17:
        x="такседо";
        y="Сэйлор Мун";
        break;
    case 18:
        x="кастиэль";
        y="Сверхъестественное";
        break;
    case 19:
        x="стервятник";
        y="Человек-Паук";
        break;
    case 20:
        x="марукура";
        y="Бакуганы";
        break;
    case 21:
        x="эггман";
        y="Соник Х";
        break;
    default:
        x="микеланджело";
        y="Черепашки Ниндзя";
    }
    w=x;
    o=y;
}
