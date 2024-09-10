# Examen '18
2023-10-07 (YYYY-MM-DD) @ 17:17
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #Ribadeo
	Sobre #Ing_Svcs
	Para #Examen
	Otros:
	Refs:
 
<hr>

## Tema 1

### Usando TCP un extremo hace un send() de 1024 bytes...

> Un servidor ejecuta un `send()` utilizando un socket TCP con un paquete de 1024 bytes.
> El cliente al que el paquete va dirigido ejecuta un `recv()`.
> ¿Qué retorna el `recv()` del cliente?

El `recv()` ejecutado por el cliente retornará 1024 (el tamaño del paquete).

### Un router implementa NAT

> Un router implementa NAT.
> Su IP pública es 183.9.5.117.
> Su IP privada es 192.168.0.1.
> Hay PC de la red privada con IP 192.168.0.20 y gateway 192.168.0.1.
> El PC inicia una conexión TCP con 156.35.14.2 al puerto 53.
> El socket de conexión del cliente tiene de puerto 62533.

#### ¿Qué IP de origen recibe la máquina 156.34.14.2 al hacer accept()?

Recibe la IP pública del rotuer 183.9.5.117.

#### ¿Qué puerto de origen recibe la máquina 156.34.14.2 al hacer accept()?

El puerto 62533.

#### ¿A qúe IP/Puerto está mapeado el puerto de la conexión anterior en el router?

El par IP/Puerto 183.9.5.117/62533, está mapeado a 192.168.0.20/62533.

### Ejemplo de IP privada fuera del rango 192.168.0.0/16

10.0.0.1/16

### Cuando implementamos una aplicacón....

> Podemos usar varios niveles de abstracción.
> Escribe al menos 3 niveles.
> Escribe las desventajas de cada uno.

1. Utilizando una API de terceros
	- Dependes de que sea mantenida por el tercero.
2. Utilizando HTTP
	- Puede no funcionar si el protocolo incluye elemento HTTP complejos.
3. Utilizando la API de sockets
	- Es necesario conocer el protocolo HTTP (Cabeceras, cookies...).

### Un enlace MTU entre dos máquinas...

> Un enlace MTU entre dos máquinas es de 1500 bytes.
> Un datagrama UDP de 1501 bytes va a cruzar la red.
> ¿Qué sucede con el datagrama?

El datagrama UDP con tamaño mayor al MTU, es fragmentado y recompuesto por el protocolo IP.
Si alguno de los fragmentos se pierde en la comunicacíon, el datagrama no se podrá recomponer y se dará por inválido.

### ¿Qué utilidad añaden los números de puerto de UDP a la capa IP?

El protocolo IP permite identeificar ordenadores de una red.
Los números de puerto añadidos por el protocolo UDP permiten direccionar servicios específicos de los ordenadores.
Por ello, al combinar una dirección IP con un número de puerto, se direcciona tanto un servicio como el ordenador que lo ofrece.

### ¿Qué problema plantea el uso de un delimitador?

El problema de conocer dónde termina un mensaje (*framing*) se puede solucionar de varias formas:

1. Utilizando un caracter delimitador (como `\r\n`).
2. Utiliznado mensajes de longitud predefinida y estática.
3. Insertando la longitud del mensaje en un punto predefinido del mensaje (como al principio, en los primeros 4 bytes).
4. Particionando el mensaje en trozos, y enviando un trozo extra vacío para indicar el fin del mensaje.
5. Cerrando el socket de forma que el `recv()` del receptor retorne 0 cuando el mensaje se ha terminado.

### ¿Cuáles son FALSAS sobre DHCP?

> 1. Puede usarse para enviar otra información al cliente, además de la configuración de red.
> 2. Ya que se basa en UDP, es posible que el mensaje de *discovery* se pierda y el cliente no pueda configurarse.
> 3. El protocolo no es autenticado, lo que hace posible crear 'falsos' servidores que puedan 'engañar' a los clientes.
> 4. Ya que el cliente no conoce el puerto del servidor, hace un *broadcast* a todos los puertos.

Falsas: 4, 2.

### ¿Cuáles son las fases del protocolo DHCP?

> Enuméralas en el orden en que ocurren.
> No es necesario describirlas.

1. Discovery.
2. Offer.
3. Request.
4. Acknowledge.

### En una misma red se tienen vario nodos...

> Cuyas IP son:
> - 192.168.0.4 (Servidor)
> - 192.168.0.5
> - 182.168.0.6
>
> El servidor crea un socket UDP con la opción `SO_BROADCAST`, y se queda esperando datagramas.
> 
> El equipo 192.168.1.1 (Cliente) se ejectua `ifconfig`:
>
> 	eth0 Link encap:Ethernet HWaddr f0:4d:a8:8c:cf:fd
> 		inet addr: 192.168.1.1 Bcast: 192.168.15.255 \
> 			Mask: 255.255.240.0
> 		inet6 addr: fe80::fd:a2:fe8c:cff7/64 Scope:Link
> 		UP BROADCAST MULTICAST MTU: 1500 METRIC: 1
> 		\[ ... resto omitido ...\]

#### A qué IP se debe enviar una petición...

> ¿A qué IP debe el cliente enviar una petición para que responda el servidor, si el cliente no conoce su IP?
> Si no es posible, indícalo.

El cliente deberá enviar un paquete a la dirección BROADCAST, ya que el servidor se encuentra en su misma red.

#### Indica las ciertas

> 1. Cliente y servidor no están en la misma subred porque el cliente tiene un ".1." en la IP.
> 2. Para enviar un mensaje por broadcast el cliente debe poner su socket en modo `SO_BROADCAST`.
> 3. Para enviar un mensaje por broadcast el cliente debe asignar con `bind()` el mismo número de puerto que use el servidor.
> 4. El datagrama enviado por broadcast desde el cliente llegará también a los otros nodos, pero será ignorado por éstos.

Ciertas: 2, 4

## Tema 2