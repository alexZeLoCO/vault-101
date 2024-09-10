# PA2
2024-03-12 (YYYY-MM-DD) @ 15:12
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #EPI
	Sobre #Proyectos 
	Para #Apuntes 
	Otros:
	Refs:
 
<hr>

El proyecto inicialmente es una idea abstracta sin desarrollar.
El proyecto es muy abierto, deja muchas cosas sin especificar.
A medida que se trabaja el proyecto, se van añadiendo restricciones sobre el qué hacer y el cómo.
El PPT, es la representación del proyecto cuando ya está restringido, ahora es una idea mucho más cerrada y controlada.

```mermaid
flowchart TD
	Descripción_Proyecto --> Definicion_Tareas --> Secuencia_Tareas & Tiempo_Tareas --> Programación --> Coste & Control_Programa
	Descripción_Proyecto --> Recursos_Necesarios --> Asignación_Recursos --> Programación
```

## EDT Diagrama de Descomposición de Trabajo

Se trata de descomponer un proyecto en varios paquetes de trabajo.

```mermaid
flowchart TD
	Proyecto --> Paquete_1 & Paquete_2
	Paquete_1 --> Paquete_11 & Paquete_12 & Paquete_13
	Paquete_11 --> Paquete_111 & Paquete_112
	Paquete_2 --> Paquete_21 & Paquete_22
```

Que los paquetes estén enumerados no implica que se tengan que hacer en el orden de los índices.
Actividad es un nodo no hoja.
Tarea es un nodo hoja.
