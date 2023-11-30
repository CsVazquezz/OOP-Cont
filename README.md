# - Programa para gestion de despacho de contabilidad -


Este proyecto consiste en un sistema simple para la gestión de un despacho que maneja información sobre los clientes, empleados y carpetas. La estructura del código se organiza en 3 clases principales: “Person”,” Client” y “Employee”. La clase de “Person” es una clase base que contiene información común como seria el nombre, edad, género y numero de contacto. Las clases de “Client” y “Employee” herdean de la clase “Person” y representan a los clientes y empleados del despacho, además de esto hay una clase llamada “Folder” que representa carpetas con sus respectivos nombre, año y tipo sobre esta información deriva una clase llamada “FolderOrganizer” que organiza y muestra estas carpetas.

Funcionalidad del programa:

Clientes y Empleados: Capacidad de visualizar los detalles sobre los clientes y empleados almacenados en el sistema, también es posible modificar la información de un cliente o empelado especifico.

Carpetas: Las carpetas se pueden organizar de 3 maneras que son por año, nombre y tipo, la clase de “FolderOrganizer” permite agregar carpetas, organizarlas y mostrar el contenido dentro de estas.

Uso del programa:

1.	Al iniciar el programa este presentara un menú principal con las opciones para poder gestionar clientes, empelados, carpetas y salir del mismo programa.
2.	Para gestionar carpetas se pueden seleccionar la opción correspondiente en el menú principal y este programa las organizara respectivamente a conforme desee el usuario.
3.	La modificación de información de los clientes o empleados se realiza seleccionando la opción correspondiente, ingresando el tipo de persona ya sea cliente o empleado y el nombre del individuo al que se le desee modificar su información.



