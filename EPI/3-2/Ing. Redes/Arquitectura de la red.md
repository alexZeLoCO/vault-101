# Arquitectura de la red
<% tp.file.creation_date() %> (YYYY-MM-DD) @ 12:14
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #EPI
	Sobre #Redes 
	Para #Apuntes 
	Otros:
	Refs:
 
<hr>

- HFC: Hybrid Fiber Coaxial.
- HTTX: ? To The X.

La cabecera del proveedor reparte conexiones de fibra, a medida que se acerca al usuario, se van sustituyendo por cable coaxial.
Se trata de hacer que la fibra llegue directamente hasta el usuario.

```mermaid
flowchart LR
	Red_Operador --Fibra--> CMTS 
	T0 --coax--> T1
	CMTS --coax--> clients
	subgraph clients
		direction LR
		subgraph T0
			direction TB
			TAP_0 --coax--> CM_0
			CM_0 --eth--> PC_0
		end
		subgraph T1
			TAP_1 --coax--> CM_1
			CM_1 --eth--> PC_1
		end
	end
	CMTS <--Docsis--> clients
```

Docsis: Data Over Cable Service Interface Specification