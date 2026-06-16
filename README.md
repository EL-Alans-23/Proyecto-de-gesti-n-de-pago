📄 Sistema de Gestión de Nóminas y Sueldos

Este proyecto es una aplicación de consola desarrollada en C++ diseñada para automatizar el registro de empleados y el cálculo de sus sueldos netos. El sistema toma en consideración variables reales del entorno laboral como el salario base, las horas extras trabajadas y las deducciones por adelantos de efectivo o solicitud de provistas.

Proyecto académico desarrollado para la Universidad Americana.

✨ Características Principales

Registro Dinámico: Permite ingresar una cantidad indefinida de empleados durante una misma sesión utilizando estructuras de datos dinámicas (std::vector).

Cálculo Automatizado: Procesa matemáticamente la suma del sueldo base más las horas extras (valoradas a una tarifa fija) y resta automáticamente las deducciones.

Gestión de Deducciones: Lógica condicional para registrar si el empleado solicitó "Adelantos" o "Provistas" durante el mes.

Formateo de Consola: Uso de la librería <iomanip> para evitar la notación científica en montos grandes y mostrar los valores financieros de manera limpia y legible.

🛠️ Tecnologías y Librerías Utilizadas

Lenguaje: C++

Librerías Estándar:

<iostream>: Para el flujo de entrada y salida estándar (consola).

<vector>: Para el almacenamiento dinámico de la lista de empleados.

<string>: Para el manejo de cadenas de texto (nombres de empleados).

<iomanip>: Para manipular el formato de salida de los montos monetarios (ej. std::fixed, std::setprecision).

🚀 Compilación y Ejecución

Para ejecutar este programa, necesitas un compilador de C++ (como GCC o MinGW) instalado en tu sistema.

Desde la terminal o línea de comandos:

Clona este repositorio o descarga el archivo fuente (ej. main.cpp).

Abre la terminal en el directorio donde se encuentra el archivo.

Compila el código ejecutando el siguiente comando:

g++ main.cpp -o nominas


Ejecuta el programa compilado:

En Windows:

nominas.exe


En Linux/Mac:

./nominas


📖 Cómo funciona (Uso del Sistema)

Al iniciar el programa, se presentará un menú interactivo con las siguientes opciones:

Registrar nuevo empleado: - Solicita el ID, Nombre, Sueldo Base y cantidad de Horas Extras.

Pregunta interactivamente (S/N) si el empleado solicitó adelantos o provistas; en caso afirmativo, pide el monto.

Calcular y mostrar sueldos: - Recorre todos los empleados registrados.

Aplica la fórmula: (Sueldo Base + (Horas Extras * 50,000)) - (Adelanto + Provista).

Muestra en pantalla un desglose claro de los identificadores, base, descuentos y el total neto a pagar.

Salir: Finaliza la ejecución del programa.

👥 Autores e Integrantes

Patrick Lewkowicz

Thiago Colman

Alan Rolón
