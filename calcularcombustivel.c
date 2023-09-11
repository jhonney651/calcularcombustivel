#include <ncurses.h>

int main() {
    float distancia, litros, consumoMedio;
    initscr();
    printw("Calculadora de Consumo Médio de Combustível\n\n");
    printw("Informe a distância percorrida (em quilômetros): ");
    scanw("%f", &distancia);
    printw("Informe o total de litros de combustível gasto: ");
    scanw("%f", &litros);
    consumoMedio = distancia / litros;
    printw("O consumo médio do automóvel é: %.2f km/l", consumoMedio);
    refresh();
    getch();
    endwin();
    return 0;
}
