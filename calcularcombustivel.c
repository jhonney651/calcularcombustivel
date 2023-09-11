#include <ncurses.h>

int main() {
    float distancia, litros, consumoMedio;
    initscr();
    printw("Calculadora de Consumo Medio de Combustível\n\n");
    printw("Informe a distancia percorrida km: ");
    scanw("%f", &distancia);
    printw("Informe o total de litros de combustivel gasto: ");
    scanw("%f", &litros);
    consumoMedio = distancia / litros;
    printw("O consumo medio do veiculo eh: %.2f km/l", consumoMedio);
    refresh();
    getch();
    endwin();
    return 0;
}
