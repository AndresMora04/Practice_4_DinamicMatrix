#include <iostream>

const int NUM_MATERIAS = 4; 
const int NUM_TRIMESTRES = 3; 

void leerNotas(double notas[NUM_MATERIAS][NUM_TRIMESTRES]) {
    for (int i = 0; i < NUM_MATERIAS; ++i) {
        std::cout << "Ingrese las notas para la materia " << (char)('A' + i) << ":\n";
        for (int j = 0; j < NUM_TRIMESTRES; ++j) {
            std::cout << "Trimestre " << j + 1 << ": ";
            std::cin >> notas[i][j];
        }
    }
}

void calcularPromediosAnuales(const double notas[NUM_MATERIAS][NUM_TRIMESTRES], double promedios[NUM_MATERIAS]) {
    for (int i = 0; i < NUM_MATERIAS; ++i) {
        double suma = 0;
        for (int j = 0; j < NUM_TRIMESTRES; ++j) {
            suma += notas[i][j];
        }
        promedios[i] = suma / NUM_TRIMESTRES;
    }
}

int main() {
    double notas[NUM_MATERIAS][NUM_TRIMESTRES];
    double promedios[NUM_MATERIAS];

    std::cout << "=== Sistema de Registro de Notas ===\n";

    return 0;
}
