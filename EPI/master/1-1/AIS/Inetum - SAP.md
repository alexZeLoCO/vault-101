# Inetum - SAP
2024-12-12 (YYYY-MM-DD) @ 17:09
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #EPI
	Sobre #AIS
	Para #Apuntes
	Otros:
	Refs:
 
<hr>

- Inetum era parte de El Corte Inglés.
- Se vendió a un fondo Katarí y después a uno Americano.
- SAP es un ERP (Enterprise Resourcing Planning).

## Introducción

- SAP está compuesto por varios módulos:
	- Cada empresa puede optar por implementar los módulos que vea convenientes.
- SAP está compuesto por varios componentes:
	- SAP ERP (Backend principal).
	- BI Java (Data Warehouse).
	- BI Reporting (Herramienta de reporting).
	- Cada componente con su propia pila (i.e. tiene backend y bbdd propia).

## Implantación Técnica

- Implementación:
	1. Conocer necesidades de la empresa.
	2. Diseñar una arquitectura que de soporte a las necesidades.
	3. Implementar el sistema.
- Etapas del proyecto de implantación:
	1. Observar: Inicio del proyecto.
	2. Diseñar: Organización y preparación.
	3. Implementar: Ejecuciónd el trabajo.
	4. Cierre.

## Implantación Funcional

- Toma de datos funcionales: Averiguar cómo funciona ahora la empresa y cómo va a variar cuando se instale SAP.
	- Documento AS IS: Cómo funciona la empresa antes de SAP.
	- Documento TO BE: Cómo funcionará la empresa después de SAP.
- Roles de usuario: SAP utiliza roles para cada usuario para decidir qué puede y qué no puede hacer cada usuario
- SAP tiene otros módulos adicionales para aplicaciones logísticas.

## HANA

- BBDD in-memory (utilizan servidores con terabytes de RAM).
- Propia de SAP.
- Indexa los values en un map de ints.
- Las columnas son todo ints que se leen utilizando los maps de cada columna.
- Registra tanto el int que corresponde a la fila actual como el número de ints iguales consecutivos que la siguen.

> [!info] 
> En lugar de: 1, 1, 1, 2, 2, 3
> Tiene: 3x1, 2x2, 1x3

## Código Abierto

- La especificación para la empresa en particular está implementada utilizando código ABAP.
- El código ABAP es abierto y se puede consultar desde SAP.

## Innovaciones

- Modelo de subscripción, no licencia.
- Cloud, no local.
- IA.
