// ============================================================
// Taller: Manejo de entrada y salida de datos con variables
// Programa: Ficha de admisión - Centro de Salud
// ============================================================
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <limits>

int main() {
    // ---------- 1. Declaración de variables ----------
    std::string nombre;
    int edad;
    char genero;      // M / F / O
    char estrato;     // 1 - 6 (se guarda como carácter)
    double peso;      // kg
    double altura;    // metros
    bool alergias;    // true = tiene alergias conocidas
    char respAlergias;

    std::string direccion;
    std::string telefono;   // string para evitar desbordamiento de enteros
    std::string correo;

    double imc;
    std::string clasificacion;

    // ---------- 2. Captura de datos ----------
    std::cout << "==============================================\n";
    std::cout << "      CENTRO DE SALUD - ADMISION DE PACIENTES\n";
    std::cout << "==============================================\n\n";

    std::cout << "Nombre completo: ";
    std::getline(std::cin, nombre);

    std::cout << "Edad (anios): ";
    std::cin >> edad;

    std::cout << "Genero (M/F/O): ";
    std::cin >> genero;
    genero = std::toupper(genero);

    std::cout << "Estrato socioeconomico (1-6): ";
    std::cin >> estrato;

    std::cout << "Peso (kg): ";
    std::cin >> peso;

    std::cout << "Altura (m, ej. 1.70): ";
    std::cin >> altura;

    std::cout << "Tiene alergias conocidas? (S/N): ";
    std::cin >> respAlergias;
    alergias = (std::toupper(respAlergias) == 'S');

    // Limpiar el buffer antes de usar getline después de cin >>
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Direccion de residencia: ";
    std::getline(std::cin, direccion);

    std::cout << "Telefono: ";
    std::getline(std::cin, telefono);

    std::cout << "Correo electronico: ";
    std::getline(std::cin, correo);

    // ---------- 3. Procesamiento: cálculo del IMC ----------
    imc = peso / (altura * altura);

    // Clasificación (estructuras if simples)
    if (imc < 18.5) {
        clasificacion = "Bajo peso";
    }
    if (imc >= 18.5 && imc < 25.0) {
        clasificacion = "Normal";
    }
    if (imc >= 25.0) {
        clasificacion = "Sobrepeso";
    }

    // ---------- 4. Salida formateada ----------
    std::cout << "\n\n==============================================\n";
    std::cout << "              FICHA MEDICA DEL PACIENTE\n";
    std::cout << "==============================================\n";
    std::cout << std::left;

    std::cout << "--- DATOS PERSONALES ---\n";
    std::cout << std::setw(22) << "Nombre:"   << nombre  << "\n";
    std::cout << std::setw(22) << "Edad:"     << edad    << " anios\n";
    std::cout << std::setw(22) << "Genero:"   << genero  << "\n";
    std::cout << std::setw(22) << "Estrato:"  << estrato << "\n";

    std::cout << "\n--- CONTACTO ---\n";
    std::cout << std::setw(22) << "Direccion:" << direccion << "\n";
    std::cout << std::setw(22) << "Telefono:"  << telefono  << "\n";
    std::cout << std::setw(22) << "Correo:"    << correo    << "\n";

    std::cout << "\n--- DATOS CLINICOS ---\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::setw(22) << "Peso:"   << peso   << " kg\n";
    std::cout << std::setw(22) << "Altura:" << altura << " m\n";
    std::cout << std::setw(22) << "Alergias conocidas:"
              << (alergias ? "Si" : "No") << "\n";
    std::cout << std::setw(22) << "IMC:" << imc << "\n";
    std::cout << std::setw(22) << "Clasificacion:" << clasificacion << "\n";
    std::cout << "==============================================\n";

    return 0;
}
