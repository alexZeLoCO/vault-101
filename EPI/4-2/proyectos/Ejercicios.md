# Ejercicios
2024-05-09 (YYYY-MM-DD) @ 17:30
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #Los_Maizales
	Sobre #Proyectos
	Para #Apuntes 
	Otros:
	Refs:
 
<hr>

## Ejemplo de Asignación 1

![[Ejercicios 2024-05-09 17.31.40.excalidraw|1900]]

## Nivelación de Recursos

Cuando el problema trata de nivelar el número de recursos necesarios para desarrollar el proyecto a lo largo de las distintas semanas (o meses) del mismo, se trata de un problema de nivelación de recursos.
Cuando se parte de un número máximo de recursos (como en el ejercicio anterior), el problema es de asignación de recursos, no nivelación.

Sobre los problemas de nivelación de recursos:

1. Filtrar las tareas por aquellas que no sean críticas.
2. Ordenar las tareas en función de su fecha de fin, de mayor a menor.
3. Para cada tarea del conjunto:
	1. Desde 1 hasta la holgura total de la tarea:
		1. Calcular las diferencias entre cuadrados del número de recursos necesarios en cada semana / mes
4. Seleccionar la solución que haya reportado la menor diferencia.

### Ejemplo de Nivelación

![[Ejercicios 2024-05-09 18.40.52.excalidraw|1900]]

## Problema de Examen

![[Ejercicios 2024-05-09 19.07.40.excalidraw|1900]]

El problema del examen pide hacer una reducción del tiempo aumentando el coste del proyecto.
Para ello, se calcula el coste de reducir en una unidad el tiempo de duración de cada tarea.
En algunos casos no será posible, o la división dará indeterminado, estas tareas no se podrán reducir.
Se selecciona de las tareas críticas (marcadas con una cruz roja en el dibujo) la que tenga menor coste de reducción por unidad de tiempo, y se le reducirá en una unidad la duración.
Esta reducción afecta a las $H^T$ del resto de tareas del proyecto, por lo que hay que recalcular las $H^T$ para conocer las nuevas tareas críticas y volver a seleccionar aquella con menor coste de reducción por unidad de tiempo.
Repetir este algoritmo hasta haber reducido las unidades requeridas.
