# Ficha Médica - Centro de Salud (C++)

Programa secuencial en C++ que captura los datos de un paciente, calcula su
IMC y muestra una ficha médica formateada en consola.

## Conceptos aplicados
- Tipos de datos: `std::string`, `int`, `char`, `double`, `bool`
- Entrada: `std::cin`, `std::getline`, `std::cin.ignore`
- Operadores aritméticos: `IMC = peso / (altura * altura)`
- Formato de salida: `<iomanip>` (`setw`, `setprecision`, `fixed`)
- Clasificación del IMC con estructuras `if` simples

## Compilar y ejecutar
```bash
g++ main.cpp -o ficha
./ficha
```

## Clasificación del IMC
| IMC | Clasificación |
|---|---|
| < 18.5 | Bajo peso |
| 18.5 – 24.9 | Normal |
| ≥ 25 | Sobrepeso |
