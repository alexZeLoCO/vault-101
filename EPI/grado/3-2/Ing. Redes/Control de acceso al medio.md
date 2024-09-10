# Control de acceso al medio
<% tp.file.creation_date() %> (YYYY-MM-DD) @ 12:09
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #EPI
	Sobre #Redes
	Para #Apuntes 
	Otros:
	Refs:
 
<hr>

![[Control de acceso al medio 2023-04-10 12.09.40.excalidraw|1900]]

## Transmisión
### Ethernet (IEE 802.3)
Cuando una estación quiere transmitir, hace lo siguiente:
1. Escucha el medio
2. Revisar si el medio está vacío
	1. Si está vacío, transmite
	2. Si no está vacío, se espera un tiempo aleatorio y se vuelve al paso 2.

Si dos estaciones escuchan al mismo tiempo con el objetivo de transmitir, puede que acaben transmitiendo al mismo tiempo, provocando una colisión.
Las estaciones son capaces de transmitir y escuchar al mismo tiempo (full-duplex). Si durante una transmisión se detecta otra transmisión (colisión), la transmisión se detiene, se espera un tiempo aleatorio y se reintenta.
El tiempo aleatorio es denominado Back-Off.

### WLAN (IEE 802.11)
Las conexiones en WLAN son half-duplex, por lo que no pueden escuchar mientras transmiten.

#### Nodo oculto
![[Control de acceso al medio 2023-04-10 12.18.30.excalidraw|1900]]
`A` y `C` quieren transmitir un mensaje a `B`.
`A` no es capaz de ver a `C`, su medio está libre y transmite.
`C` no es capaz de ver a `A`, su medio está libre y transmite, pero hay un mensaje en el medio de `B` (el de `A') por lo que sucede una colisión.
Si `A` transmite a `B` y `C` transmite a `B`, la comunicación `C->B` tendrá una colisión.

#### CSMA/CA
- CS -> Carrier Sense
- CA -> Collision Avoidance

Necesitan unas tramas llamdas `RTS` y `CTS`.
- `RTS`: Request to Send
- `CTS`: Confirmation to Send

1. Emisor: Envía RTS al receptor.
2. Receptor: Envía CTS al emisor si su medio está libre.
3. Emisor: Envía datos al receptor.
4. Receptor: Envía ACK al receptor.

##### DCF
![[Control de acceso al medio 2023-04-10 12.27.12.excalidraw|1900]]

En el ejemplo anterior, B quiere enviar datos a C.
1. B envía un RTS a C.
2. A y C reciben el RTS de B.
	1. A queda bloqueado por el RTS. => No envía CTS ni RTS.
	2. C recibe el mensaje y envía un CTS.
3. B y D reciben el CTS de C.
	1. D queda bloqueado por el CTS. => No envía CTS y RTS.
	2. B recibe el mensaje y envía los datos.
4. A y C reciben los datos de B.
	1. A ignora los datos.
	2. C recibe los datos y envía ACK.
5. B y D reciben el ACK de C.
	1. D ignora el ACK.
	2. B recibe el ACK.
6. A, B, C y D esperan el tiempo indicado en NAV.
7. A, B, C y D esperan DIFS.
8. A, B, C y D generan un Back-Off y lo esperan.
9. La estación que cumpla primero su Back-Off puede volver al paso 1.

Si en el paso 8, varias estaciones tienen que comunicarse, transmitirá aquella que tenga el menor Back-Off.
El resto de estaciones deberán esperar a que la comunicación que se acaba de iniciar finalice.
Cuando ésta finalice, las estaciones que están a la espera no obtendrán un nuevo Back-Off, esperarán el tiempo que les haya quedado por esperar en el intento anterior.
 
En los paquetes RTS, CTS y DATA hay una trama NAV que contiene la duración estimada de la comunicación.
SIFS: Short Inter Frame Space
DIFS: DCF IFS. DIFS > SIFS

En DCF, todas las estaciones tienen la misma prioridad.

##### PCF
En PCF, una estación tiene prioridad y actúa de coordinadora (generalmente, el AP).

##### HCF
Híbrido. Mezcla períodos en los que se utiliza DCF y otros en los que se utiliza PCF.

<hr>

2023-04-17 (YYYY-MM-DD) @ 12:10
