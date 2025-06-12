# Proyecto_Final_A01668790_TC1030
Cristhian Viery Maida Suarez - A01668790

En este proyecto estoy desarrollando una plataforma en C++ que simula un sistema de pedidos y reservaciones de comida para diferentes restaurantes. El objetivo es que el usuario pueda elegir entre varios restaurantes, consultar su menú, hacer un pedido y generar una factura al finalizar. También se puede registrar una reservación indicando el nombre del cliente y la cantidad de personas.Es una forma práctica de entender cómo funcionan estas plataformas en la vida real. Me gustó la idea porque es algo que usamos todos los días y ahora puedo simularlo desde la programación.

Aunque todavía estoy en una etapa inicial, este proyecto ya me está ayudando a aplicar los conceptos que hemos aprendido. Estoy utilizando herencia, clases abstractas y también polimorfismo para que los objetos puedan comportarse de forma distinta según su tipo. Poco a poco voy viendo cómo todo se conecta entre sí. Mi objetivo es que el sistema funcione de forma clara y ordenada, ya que lo que trato de lograr es que el codigo tenga una estructura funcional y no redundante.

## En que casos habria fallas del proyecto:
- Si el usuario ingresa un número de restaurante o plato que no existe, el programa puede omitir la acción o comportarse inesperadamente.
- Si el usuario escribe letras o caracteres especiales en campos que esperan números (cin >>), el programa puede quedar en un estado de error sin dar respuesta ni recuperación clara.
- Si se excede el límite de platos (MAX = 100) en una orden, no se agregan más y no se notifica al usuario.
- En Pedido y Reservacion, si el usuario falla los tres intentos de contraseña, la operación se cancela.
## Consideraciones
El programa esta desarrollado con C++ estandar y corre en consalo en los siguientes sistemas operativos:

Compilacion:
"g++ main.cpp -o proyecto"

Ejecución:
- En Linux y macOS "./proyecto"
- En Windows "proyecto.exe"
  
Este es el digrama UML del programa:

![DiagramaUMLPF](https://github.com/user-attachments/assets/c724723b-57b5-4ea0-81f6-42ccaff49751)






