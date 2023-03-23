# Repartidores
<% tp.file.creation_date() %> (YYYY-MM-DD) @ 11:20
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #EPI
	Sobre #Redes
	Para #Apuntes 
	Otros:
	Refs:
 
<hr>

- RC - Repartidor de Campus.
- RE - Repartidor de Edificio.
- RP - Repartidor de Planta.
- CP - Consolidation point (Repetidor).
- TT - (RJ45).

```mermaid
graph TD;
	subgraph Campus SC
		subgraph Vertical SB
			RE_1 <--> RP_10
			RE_1 <--> RP_11
			RE_1 <--> RP_12
			subgraph Horizontal SH
				TT_120 <--> CP_122
				TT_121 <--> CP_122
				RP_12 <--> CP_122
			end
		end
		subgraph Vertical SB
			RE_0 <--> RP_00
			RE_0 <--> RP_01
			RE_0 <--> RP_02
			subgraph Horizontal SH
				TT_020 <--> RP_02
				TT_021 <--> RP_02
			end
		end
			RC <--> RE_0
			RC <--> RE_1
	end
```

1. Cableado de Campus ~ (SC)
	- Une RE con RC.
	- Dependiente de la aplicación.
	- Cableado:
		- Voz: Cobre de 2 pares UTP Cat 3.
		- Datos: Fibra óptica Monomodo.
3. Cableado Vertical ~ (SB)
	- Une RP con RE.
	- Dependiente de la aplicación.
	- Cableado:
		- Voz: Cobre de 2 pares UTP Cat 3.
		- Datos: Fibra óptica Multimodo.
4. Cableado horizontal ~ (SH)
	- Une TT con RP, RP con CP o CP con TT.
	- Independiente de la aplicación.
	- Cobre 4 pares UTP Cat. 6 o Fibra óptica (FTPH) Multimodo.