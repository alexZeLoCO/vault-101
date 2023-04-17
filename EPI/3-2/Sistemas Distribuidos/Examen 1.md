# Examen 1
2023-03-12 11:32 (YYYY-MM-DD) @ 11:33
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #Viesques 
	Sobre #Distribuidos 
	Para #Apuntes 
	Otros:
	Refs:
 
<hr>

## Tema 1
### Definición de Sistema Distribuido
<dfn>Conjunto de sistemas independientes que ante los usuarios del sistema parecen un solo computador</dfn>
<dfn>Conjunto de sistemas autónomos, unidos por una red, que ejecutan un software diseñado para dar una utilidad computacional integrada.</dfn>
<dfn>Sistema en el que los componente hardware o software localizados en computadores unidos mediante red, comunican y coordinan sus acciones sólo mediante el paso de mensajes</dfn>

### Ejemplos de Sistemas Distribuidos
#### P2P
Aplicaciones distribuidas compuestas por varios nodos que ejecutan el mismo proceso. En lugar de que existan máquinas servidor y clientes, todas pueden ser clientes y servidores del resto.

#### Grid Computing
Agrupación de computadores que trabajan conjuntamente para cumplir un objetivo común. La agrupación de ordenadores se organiza de forma que contribuyan mientras se encuentran ociosos. Grid computing permite la colaboración entre distintos equipos y entidades que se puedan ceder los computadores. Este sistema requiere de la existencia de un middleware que controle la capacidad de cómputo que se puede ceder por cada equipo.

#### Cluster
Sistema distribuido compuesto por computadores homogéneos (iguales) y próximos. Están conectados a una red de alta velocidad.

#### Cloud computing
Sobre los recursos hardware (cluster), se despliegan máquinas virtuales, conectadas mediante redes virtuales.

---

### Ventajas de los Sistemas Distribuidos
- Coste: Un cluster está compuesto por varios PCs baratos. Para conseguir el rendimiento esperado se utilizan los Sistemas Distribuidos.
- Escalabilidad: En un cluster es posible seguir añadiendo PCs hasta alcanzar la capacidad necesaria.
- Rendimiento: Los Sistemas Distribuidos permiten la computación en paralelo.
- Tolerancia: Si el Sistema Distribuido está bien diseñado, aumenta la disponibilidad. (Si todo el SD depende de un sistema, entonces bajará).

---

### Metas y retos de los Sistemas Distribuidos
#### Seguridad
Garantizar la privacidad, integridad y autenticidad en las comunicaciones.
Fallos en la seguridad pueden ser causados por el código.

#### Transparencia
Ocultación de la naturaleza distribuida del sistema.
##### Acceso
El usuario percibe que el sistema está compuesto por varias máquinas, pero las utiliza de la misma forma.
##### Localización
El usuario desconoce qué máquina tiene qué recurso. Desde el punto de vista del usuario, las máquinas parecen funcionar como una sola.
##### Replicación
El usuario desconoce si un recurso está replicado para aumentar la fiabilidad.
##### Migración
El usuario desconoce si un recurso pasa de máquina en máquina, ni siquiera cuando los datos están siendo transferidos. Que exista Transparencia de Migración es condición suficiente para que exista Transparencia de Localización.
##### Fallos
El usuario desconoce si ha sucedido un fallo en alguna de las máquinas. Que exista Transparencia de Fallos es condición suficiente para que existan las Transparencias de Migración y Replicación.

#### Apertura
Uso de estándares para facilitar la interoperabilidad de los sistemas.

#### Escalabilidad
Debe ser posible siempre que sea necesario aumentar la cantidad de sistemas en un Sistema Distribuido. Frecuentemente el diseño inicial compromete la escalabilidad.

---

### Modelos o Paradigmas
#### Paso de mensajes
Se basa en las operaciones Enviar (`send`) y Recibir (`recv`).
##### Orientada a Conexión.
Las entidades a comunicar realizan un *handshake* antes de comenzar la comunicación. Se crea un canal de comunicación entre ellas.
Es necesario un protocolo que controle los mensajes (descomponer en paquetes, enviar y recomponer).
Al llegar al destino, el receptor enviará una confirmación de la recepción de los mensajes.
##### Orientado a Datagramas
En lugar de realizar un *handshake* al iniciar la comunicación, se envían los datagramas directamente.
Al llegar al destino, el receptor no enviará confirmación de la recepción de los mensajes.

#### Modelo Cliente-Servidor
La aplicación distribuida está compuesta por dos tipos de sistemas:
- Servidor \[PASIVO\]: El sistema está generalmente inactivo hasta que se reciba un mensaje. Al recibir el mensaje, se procesa y responde.
- Cliente \[ACTIVO\]: El sistema ejecuta cierta funcionalidad para la que precisa de información contenida en el servidor. Envía una petición al servidor, espera a su respuesta hasta recibirla para continuar su ejecución.

El paradigma del Cliente-Servidor se ve en WWW o FTP. Puede ser implementado utilizando el [Paso de mensajes](Examen 1#Paso de mensajes) o llamadas a procedimientos remotos ([RPC](Examen 1#RPC)/[RMI](Examen 1#RMI)).

#### RPC
Basándose en el modelo [Cliente-Servidor](Examen 1#Modelo Cliente-Servidor), el Cliente puede ejecutar una función que está definida en el Servidor. Para facilitar este funcionamiento, será necesaria la existencia de un middleware que se encargue de pasar los parámetros al Servidor.

#### RMI
Basado en [RPC](Examen 1#RPC), pero aplicando OOP.

#### P2P
En este modelo no existe la diferenciación entre Cliente y Servidor. Todos los equipos que formen parte del sistema pueden estar ejecutando el mismo proceso.
De esta forma, cualquier equipo puede ser cliente y servidor de otro. 
En casos donde sea necesario propagar un fichero, el modelo P2P es más interesante que el Cliente-Servidor, ya que en el Cliente-Servidor el Servidor se vería sobrecargado con peticiones de los clientes, mientras que en P2P, cuando un cliente reciba el fichero, se convertirá en servidor para otros clientes.

#### Agentes móviles
Un agente móvil es un programa que es capaz de transferirse de una máquina a otra. Para ello, debe suceder al menos una de las siguientes condiciones:
- Todas las máquinas tienen la misma arquitectura y SO.
- El Agente Móvil está programado en un lenguaje independiente de la arquitectura (Java, Python, JS).
El Agente Móvil tiene capacidad de 'moverse' de una máquina a otra para continuar su ejecución.
Es necesario un middleware que reciba al Agente Móvil en la máquina destino.
No es necesario que los agentes móviles compartan mensajes entre ellos.

#### Servicios Web

---
---
---

## Tema 2
### La API de sockets en C
#### Comunicación orientada a mensajes
##### Sockets
La API proporciona las funciones para el [Modelo Orientado a Mensajes](Examen\ 1#Paso de mensajes). Un socket es un punto terminal en el que se pueden escribir y leer datos. Generalmente, estos datos son leídos y escritos por dos máquinas.
1. El servidor crea un socket. `socket()`
2. El servidor asigna una IP y puerto al socket. `bind()`
3. El servidor pone el socket en modo pasivo. En este modo espera a recibir conexiones por parte de clientes. `listen()` 
4. El servidor queda bloqueado hasta recibir a un cliente. `accept()` -> Bloqueante hasta recibir una conexión.
5. El cliente crea un socket al que no es necesario que se le asigne IP ni puerto. `socket()`
6. El cliente inicia una conexión hacia el socket pasivo del servidor utilizando la IP y puerto del socket pasivo. `connect()`
7. El cliente/servidor puede comunicar un mensaje. `send()` -> Bloqueante si la ventana de TCP es muy baja.
8. El cliente/servidor puede recibir un mensaje. `recv()` -> Bloqueante hasta recibir un mensaje.
9. El cliente/servidor puede cerrar la comunicación. `close()`

##### Cómo evitar los bloqueos
Para evitar los bloqueos, se puede implementar el servidor y cliente de forma que trabajen con varios hilos o mediante el uso de la función `select()`.  

---

#### Creación e inicialización del socket en el servidor
```c
// <--------------------------------------------------->
socket()
	#include <sys/socket.h>
	int socket (int domain, int type, int protocol);
// <--------------------------------------------------->
int s;
s = socket(PF_INET, SOCK_STREAM, 0);
	// SOCK_STREAM -> TCP
	// SOCK_DGRAM  -> UDP
```

```c
// <--------------------------------------------------->
bind()
	#include <sys/socket.h>
	int bind (int socket, const struct sockaddr* address, socklen_t address_len);
// <--------------------------------------------------->
int s = socket(PF_INET, SOCK_STREAM, 0); // socket
struct sockaddr_in dir; // address

dir.sin_family = AF_INET;
dir.sin_port = htons(7890); // Puerto 7890
dir.sin_addr.s_addr = htonl(INADDR_ANY); // Cualquier direccion IP

bind (s, (sockaddr*) &dir, sizeof(dir));
```

```c
// <--------------------------------------------------->
listen()
	#include <sys/socket.h>
	int listen (int socket, int backlog);
// <--------------------------------------------------->
```

```c
// <--------------------------------------------------->
accept()
	#include <sys/socket.h>
	int accept (int socket, struct sockaddr* address, socklen_t* address_len);
// <--------------------------------------------------->
```

---

#### Creación e inicialización del socket en el cliente
```c
// <--------------------------------------------------->
socket()
	#include <sys/socket.h>
	int socket (int domain, int type, int protocol);
// <--------------------------------------------------->
int s;
s = socket(PF_INET, SOCK_STREAM, 0);
	// SOCK_STREAM -> TCP
	// SOCK_DGRAM  -> UDP
```

```c
// <--------------------------------------------------->
connect()
	#include <sys/types.h>
	#include <sys/socket.h>
	int connect (int socket, const struct sockaddre* address, socklen_t address_len);
// <--------------------------------------------------->
```

---

#### Comunicación por el socket
```c
// <--------------------------------------------------->
write()
	#include <unistd.h>
	ssize_t write (int fildes, void* buff, size_t nbyte);
// <--------------------------------------------------->
char buff[100] = "Hola mundo";
int escritos;
int sd;
// <-- Inicialización de sd -->
escritos = write(s, buff, strlen(buff));
```

```c
// <--------------------------------------------------->
read()
	#include <sys/types.h>
	#include <sys/socket.h>
	#include <unistd.h>
	ssize_t read (int fildes, void* buff, size_t nbyte);
// <--------------------------------------------------->
char buff[100];
int leidos;
int sd;
// <-- Inicialización de sd -->
leidos = read(s, buff, sizeof(buff));
```

```c
// <----------------------- UDP ----------------------->
sendto()
	#include <sys/socket.h>
	ssize_t sendto (int socket, const void *buffer, size_t length,
					int flags, const struct sockaddr* dest_addr,
					socklen_t dest_len);
// <----------------------- UDP ----------------------->
```

```c
// <----------------------- UDP ----------------------->
recvfrom()
	#include <sys/socket.h>
	ssize_t recvfrom (int socket, void* restrict buffer, size_t length,
					  int flags, const struct sockaddr* address,
					  socklen_t* address_len);
// <----------------------- UDP ----------------------->
```
---

#### Terminar la comunicación
```c
// <--------------------------------------------------->
close()
	#include <unistd.h>
	int close(int fildes);
// <--------------------------------------------------->
```
---

#### Otras funciones de apoyo
##### Conversión hacia y desde el formato de red
```c
#include <arpa/inet.h>

htons(); // host to network short
htonl(); // host to network long

ntohs(); // network to host short
ntohl(); // network to host long
```

##### Conversion desde y hacia ASCII
```c
#include <stdlib.h>
int atoi(const char* str); // str -> int
```

```c
#include <arpa/inet.h>
in_addr_t inet_addr(const char* cp); // str -> IP address (sin error checking)
int inet_aton (const char* cp, struct in_addr *pin); // str -> IP address (con error checking)
char* inet_ntoa (struct in_addr in); // IP address -> str
```

##### Consulta del DNS
```c
#include <netdb.h>
struct hostent {
	char* hname; // Official name of the host
	char** haliases; // Alias list
	int h_addrtype; // Host address type
	int hlength; // Length of address
	char** h_addr_list; // List of addresses from name server	
}
struct hostent* gethostbyname (const char* name);
```

---
---

## Técnicas para servidores concurrentes en C
### Introducción al problema
Algunas funciones de la API de sockets son bloqueantes:
- `accept()`: Si no hay clientes.
- `recv()`, `read()` o `recvfrom()`: Si no hay datos por ser leídos.
- `send()`, `write()` o `sendto()`: Si existe congestión en el socket. (TCP Reno).

Soluciones:
- Multiples procesos
	- Crear nuevo proceso cuando llega un cliente nuevo.
	- Crear varios procesos y asignarlos a medida que llegan clientes.
 - Un sólo proceso
	 - Multihilo
		 - Bajo demanda
		 - Pool
	 - Monohilo
		 - Usando funciones no bloqueantes (polling)
		 - Usando `select()` para multiplexar

---

### Programación multiproceso
#### fork()
```c
if (fork()) 
	printf("Hijo\n");
else
	pritnf("Padre\n");
```

#### Procesos bajo demanda
El proceso padre se encarga de crear los sockets necesarios y de establecer la conexión. Cuando llega un cliente al padre, éste crea un clon de sí mismo utilizando `fork()`, este clon tiene las mismas variables con los mismos estados que en el padre. El hijo se encarga de atender la petición del cliente.

Hijo:
- Cerrar socket pasivo.
- Entrar en bucle de servicio (`recv()`, `send()`).
- El cliente cierra la conexión y el hijo sale (`exit()`).
Padre:
- Cierra el socket de datos que creó antes de `fork()`.
- Llama a `accept()`.

El padre no espera a la finalización de sus hijos, estos quedarían en estado *zombie* en el SO. Para ello, se ordena al padre que ignore las señales `SIGCHLD` que se envían cuando uno de sus hijos finaliza. El hecho de ignorarlas ya es suficiente para que los restos del hijo se liberen de la tabla de procesos.
```c
#include <signal.h>
int main ()
{
	// ...
	signal(SIGCHLD, SIG_IGN);
	// ...
}
```

#### Creación previa de procesos
En lugar de crear un padre que posteriormente crea otros procesos hijos, se utiliza un proceso que se clona varias veces desde el inicio. Todos éstos actúan como servidores independientes (como si se hubiese ejecutado el servidor varias veces desde `bash`: `$ ./server & ./server & ./server & ./server &).
```
Crear socket pasivo
llamar fork() N veces
loop:
exclusión mutua
	sd = accept()
fin exclusión mutua
atender sd
close sd
goto loop
```

---

### Programación multihilo
La orden `fork()` no está disponible en todos los SO. En aquellos que está disponible, se considera una opción pesada por la cantidad de datos que hay que copiar a otra zona de memoria.

#### Hilos bajo demanda
Al igual que en `fork()`, un proceso principal se encarga de crear los sockets y hacer `accept()`. Pero en lugar de hacer `fork()` para que el hijo se encargue del cliente, crea un hilo al que le asigna una función en la que se atiende la petición del cliente.
```c
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void foo (void* null)
{
	sleep(3);
	printf("Hijo\n");
	pthread_exit(NULL);
}

int main ()
{
	int rc;
	pthread_t tid_hijo;
	pthread_attr_t attr;

	// Inicialización
	pthread_attr_init (&attr);
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

	// Crear hilo
	if (rc = pthread_create(&tid_hijo, &attr, foo, NULL))
	{
		perror("Error al crear hilo\n");
		exit(1);
	}
	printf("Padre\n");

	// Esperar por el hijo
	pthread_join(tid_hijo, NULL);
	pthread_attr_destroy(&attr);
	pthread_exit(NULL);
	return 0;
}
```

Como el padre no debe esperar a la finalización del hijo para continuar su ejecución, el hilo hijo debe ejecutarse en modo *detached*.

#### Pool
Se crean varios hilos al iniciar el programa, todos ellos quedan en espera.
Cuando el hilo principal recibe un nuevo cliente, lo introduce en una cola.
Un hilo está vigilando la cola a la espera de que se introduzca un cliente.
En cuanto se introduce un cliente en la cola, es atendido por el hilo que vigila.
El hilo que ahora atiende, elimina al cliente de la cola.
Otro hilo pasa a vigilar la cola.

---

### Multiplexación e/s con select()
La orden `select()` permite vigilar varios descriptores de ficheros a la espera de cambios. Este comportamiento se puede utilizar para vigilar varios sockets.

#### Lógica de uso de select()
La orden `select()` recibe una lista de descriptores a vigilar. La llamada a `select()` bloquea la ejecución hasta que uno de los FD tengan un cambio. Una vez que se desbloquea la llamada a `select()`, se debe de averiguar qué FD recibió actividad para atender en ese FD.

#### Función select()
```c
#include <sys/select.h>
int select (int nfds, fd_set* readfds,
					  fd_set* writefds,
					  fd_set* errorfds,
					  struct timeval* timeout);
```

#### Conjuntos de descriptores fd_set
`fd_set` es un array de bits. Cada bit corresponde a un FD. Si el bit del FD `n` está a `1`, entonces ese FD será vigilado por `select()`.

```c
FD_ZERO(fd_set* conjunto); // Pone a 0 todos los FDs del conjunto
FD_SET(n, fd_set* conjunto); // Pone a 1 el FD en posición n del conjunto
FD_CLR(n, fd_set* conjunto); // Pone a 0 el FD en posición n del conjunto
FD_ISSET(n, fd_set* conjunto); // Retorna el estado del FD n del conjunto
```

---
---

### XDR (eXternal Data Representation)
#### Introducción
XDR es un lenguaje de representación de datos utilizado para transferir datos binarios entre dos máquinas.

`sizeof(int)` puede ser distinto de `sizeof(7)`.
En una máquina *little-endian*, los bytes más *little* están al principio.
En una máquina *bit-endian*, los bytes más *big* están al principio.

---

#### Qué es XDR
- Estándar acerca de cómo codificar en binario.
- Biblioteca de funciones que transforma datos de los formatos de cada máquina a otros independientes de la arquitectura y viceversa.
- Lenguaje de declaración de tipos.
- Herramienta que genera código C en función de los tipos definidos por el programador.

---

#### Conceptos generales
##### Sintaxis de un filtro
```c
#include <rpc/types.h>
#include <rpc/xdr.h>
bool_t xdr_tipo(XDR* operacion, tipo* dato);
```

##### Inicialización de la operación
```c
#include <rpc/types.h>
#include <rpc/xdr.h>
bool_t xdrstdio_create(XDR* operacion, FILE* fichero, enum xdr_op sentido);
```

```c
#include <rpc/types.h>
#include <rpc/xdr.h>
void xdr_destroy(XDR* xdrs);
```

---

#### Tipos básicos
##### Enteros
| Tipo XDR | Tipo C | Filtro | Codificación |
| --- | --- | --- | --- |
| `int` | `int` | `xdr_int(XDR*, int*)` | 4 bytes, big-endian |
| `unsigned int` | `unsigned int` | `xdr_u_int(XDR*, unsigned int*)` | 4 bytes, big-endian |
| `hyper` | `int64_t` o `quad_t` | `xdr_hyper(XDR*, quad_t*)` | 8 bytes, big-endian |

##### Reales
| Tipo XDR | Tipo C | Filtro | Codificación |
| --- | --- | --- | --- |
| `float` | `float` | `xdr_float(XDR*, float*)` | 4 bytes, IEEE-754 simple |
| `double` | `double` | `xdr_double(XDR*, double*)` | 8 bytes, IEEE-754 doble |

##### Carácter
| Tipo XDR | Tipo C | Filtro | Codificación |
| --- | --- | --- | --- |
| `char` | `char` | `xdr_char(XDR*, char*)` | 4 bytes, solo se usa el último |
Para codificar un `char` sólo se utiliza el último byte de los 4 consumidos.
La codificación de un array de `char` es distinta a la de un solo `char`.
Todos los formatos binarios XDR tienen un tamaño múltiplo de 4 bytes.

##### Booleano
| Tipo XDR | Tipo C | Filtro | Codificación |
| --- | --- | --- | --- |
| `bool` | `bool_t` | `xdr_bool(XDR*, bool_t*)` | 4 bytes, solo se usa el último bit |
Todos los formatos binarios XDR tienen un tamaño múltiplo de 4 bytes.

---

#### Tipos definidos por el programador
- Arrays con malloc (Tamaño estático).
- Estructuras.
- Uniones.

##### Entorno de desarrollo XDR
1. Escribir un fichero `.x` con las definiciones de los tipos de datos.
2. Compilar con `rpcgen`. Se generan dos ficheros, un `.h` con lo equivalente del `.x` y un `.c` con la implementación de las funciones del `.h`.

##### Tipos sencillos
###### Typedef
```xdr
typedef int mi_entero;
typedef hyper mi_gran_entero;
```

###### Constantes
```xdr
const MAX_CHAR = 100;
```

###### Enumeraciones
```xdr
enum Palo {
	OROS=1, COPAS = 2, ESPADAS=3, BASTOS=4
};
```

##### Arrays
###### Tamaño fijo
```xdr
typedef int TresEnteros[3];
```

```c
#include "tipos.h"

int main ()
{
	TresEnteros mi_var;

	mi_var[0] = 1;
	mi_var[1] = 2;
	mi_var[2] = 3;
}
```

###### Tamaño Variable
```xdr
// tipos.x
typedef int VariosEnteros <100>;
```

```c
// tipos.h
typedef struct {
	u_int VariosEnteros_len;
	int* VariosEnteros_val;
} VariosEnteros;
typedef struct VariosEnteros VariosEnteros;
```

###### Strings
```xdr
// tipos.x
typedef string Texto <100>;
```

```c
// tipos.h
typedef char* Texto;
```

##### Estructuras
```xdr
struct Persona {
	int edad;
	string nombre <100>;
	string apellidos <200>;
};
```

```c
struct Persona {
	int edad;
	char* nombre;
	char* apellidos;
};
typedef struct Persona Persona;
```

##### Uniones
En `C`, una unión es un tipo de estructura cuyos atributos están almacenados todos en la misma posición de memoria, por lo que sólo uno se puede utilizar.
```xdr
union Resultado switch (int tipo) {
	case 1: int entero;
	case 2: double real;
	case 3: string error <200>;
};
```

```c
struct Resultado {
	int tipo;
	union {
		int entero;
		double real;
		char* error;
	} Resultado_u;
};
typedef struct Resultado Resultado;
```

##### Punteros
No tiene sentido enviar punteros entre dos máquinas, ya que para que esto funcione, sería necesario que ambas máquinas tuviesen los mismos datos en las mismas posiciones de memoria.
Un dato de tipo puntero en XDR es reconocido no como un puntero, sino como un dato opcional. A la hora de serializar un dato opcional, si es NULL XDR colocará un FALSE para indicar que no existe dato. Si no es NULL, XDR colocará un TRUE y el dato a continuación.

---

#### XDR y sockets
##### Descriptores int y descriptores FILE*
XDR utiliza descriptores `FILE*`.
Sockets utiliza descriptores `int`.

##### Obtención de un descriptor FILE* a partir de un descriptor int
```c
#include <stdio.h>
FILE* fdopen(int descriptor, char* modo);
```

---
---

### Comunicación entre procesos RPC
#### Llamadas a procedimientos remotos RPC
##### Introducción
El objetivo es poder ejecutar una función definida en un sistema desde otro, de forma que para el sistema que realiza la llamada a la función, exista la mayor transparencia posible.

##### Cómo funciona una RPC
El servidor proporciona una función con su definición.
El cliente proporciona una función con el mismo nombre, que enviará un mensaje al servidor indicando la función que hay que ejecutar así como sus argumentos.
El servidor recibirá dicho mensaje y ejecutará la función.
El cliente recibirá la respuesta del servidor con el resultado de la función.

##### RPCs asíncronas
En algunos casos, en C se envían parámetros en forma de punteros (paso por referencia) con el objetivo de que éstos parámetros sean modificados. En este caso, es posible enviar al servidor una copia de los datos a modificar, y que en la respuesta del servidor se encuentren los datos modificados. El cliente deberá entonces copiar los datos nuevos sobre su array y retornar éste.

---
---
