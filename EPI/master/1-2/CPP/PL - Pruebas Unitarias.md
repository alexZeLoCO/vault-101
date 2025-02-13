# PL - Pruebas Unitarias
2025-02-04 (YYYY-MM-DD) @ 17:07
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #EPI
	Sobre #CPP
	Para #Apuntes
	Otros:
	Refs:
 
<hr>

## Ejecución Planes de Vuelo

- Función: startFlightPlan

Comprobar que el Drone Controller ejecuta planes de vuelo.

Comportamiento esperado:

- El drone debería comenzar a moverse desde su posición actual hacia el primer checkpoint de la ruta sin enviar payloads.
- El drone debería comenzar a enviar payloads al alcanzar el primer checkpoint de la ruta.
- El drone debería continuar enviando payloads durante la ejecución de su ruta.
- El drone debería dejar de enviar payloads al finalizar su ruta.
- El drone puede finalizar su ruta por dos razones:
	- La ruta es punto a punto, ha llegado al último checkpoint y ha llegado a su estación base.
	- La ruta es cíclica, su batería es inferior al 20% y ha llegado a su estación base.

### Clases de Equivalencia

#### Entrada
- Drone
	- double Batería
	- Waypoint nextWaypoint
- Waypoints[]
#### Salida

## Modo Manual

- Función: startFlightPlan