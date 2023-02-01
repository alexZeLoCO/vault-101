2023-02-01 @ 19:41
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #Viesques
	Sobre #Redes
	Para #Apuntes
	Otros: #PacketTracer #Subnetting
	Refs:
<hr>

# Direcciones IP
Cada subred tiene las siguientes características:
- Id de Red (Net): 192.168.0.0
- Máscara (Mask): 255.255.255.0
- Dirección Broadcast (BCast): 192.168.0.255

En algunos casos, la máscara se puede indicar utilizando el número de bits que sirven para identificar la red.
192.168.0.0/24
Corresponde al identificador de red *192.168.0.0* con máscara *255.255.255.0*, utiliza 8 bits (1 Byte) para identificar al host ($32-24=8$)

## ID de red (Net)
El ID de la red tiene 0 en la parte de Host.

## Máscara (Mask)
La máscara de la red tiene 1 en la parte de Red y 0 en la parte de Host.

## Dirección Broadcast (BCast)
La dirección de Broadcast es la última dirección de la red. Tiene 1 en la parte de host.


Una red con $n$ equipos necesita al menos $n+2$ direcciones, ya que el ID de red y BCast ocupan dos direcciones que están reservadas. Ningún equipo puede tener como dirección el ID de red ni la BCast.
Si una red necesita $n$ direcciones, entonces son necesarios $log_2(n)$ bits para la parte de host.

# Clases de Red
- Clase A: 8 bits para red
- Clase B: 16 bits para red
- Clase C: 24 bits para red

![[Redes 01-02-2023 19.42.03.excalidraw|700]]