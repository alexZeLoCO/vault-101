<% tp.file.creation_date() %> (YYYY-MM-DD) @ 11:48
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #EPI
	Sobre #Redes
	Para #Apuntes 
	Otros:
	Refs:
	 [Transparencias](https://www.campusvirtual.uniovi.es/pluginfile.php/976302/mod_resource/content/1/IRD_MPLS%202023.pdf)
 
<hr>

Multi Protocol Label Switching (MPLS) es un protocolo que permite direccionar paquetes utilizando etiquetas (Labels) en lugar de direcciones IP (Layer 3).
MPLS permite utilizar cualquier protocolo de capa 2 y 3. Al protocolo MPLS se le llama comúnmente capa 2.5.

Los routers que utilizan MPLS mantienen una tabla de etiquetas. Label Distribution Protocol (LDP)
| In-Label | Out-Label | Next Hop |
| --- | --- | --- |
| 22 | 11 | RouterX |

Esto implica que cuanto este router reciba un paquete con etiqueta 22, deberá enviárselo al RouterX con la etiqueta 11 en lugar de la 22.
Las etiquetas ocupan 20 bits (Una dirección IPv4 ocupa 64).
