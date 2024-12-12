# Examen
2024-12-12 (YYYY-MM-DD) @ 00:09
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #Viesques
	Sobre #ASD
	Para #Apuntes
	Otros:
	Refs:
 
<hr>

## 1. Introducción

- S. Distribuido: Conjunto computadores independientes que parecen un sólo sistema al usuario final.

- Características:
- No hay reloj común
- No hay memoria compartida
- Separación geográfica
- Autonomía y heterogeneidad

- Motivos:
- Compartir recursos
- Reducir costes
- Mayor escalabilidad
- Mayor rendimiento

- Retos:
- Hacer recursos accesibles
- Transparencia (del S. Distribuido)
- Apertura (Interoperabilidad)
- Escalabilidad
- Concurrencia
- QoS
- Seguridad

- Dificultades:
- Red no fiable
- Latencia no es cero
- Ancho de banda limitado
- Red no segura
- Topología cambiante
- Múltiples administradores
- Coste del transporte
- Red heterogénea

## 1. Modelos de Comunicaciones

- Síncrona:
	- Petición/Respuesta: Para cuando se requiere respuesta. (Bloq. no repuesta)
	- Un sentido: Para cuando no se requiere respuesta, sólo ACK. (Bloq. no ACK)
	- Sondeo: Para cuando se requiere respuesta no urgente.
- Asíncrona: Para cuando no se requiere respuesta...
	- Paso de mensajes: 
	- Pub/Sub: ...y hay que filtrar el destinatario de la información.
	- Difusión: ...y hay que enviar a múltiples destinatarios.

- Mecanismos de intercambio de información:
	- Mensajes:
		- Emisor: Crea y envía mensaje.
		- Receptor: Recibe y extrae info del mensaje.
		- TL;DR:
			- Bajo acoplamiento.
	- Interfaces:
		- Emisor: Crea y ejecuta llamada a interfaz.
		- Receptor: Recibe llamada remota y ejecuta acción en función de la interfaz.
		- TL;DR:
			- Alto acoplamiento.

## 2. Arquitecturas

- Cliente/Servidor
	- Clientes ligeros/pesados.
	- Backend:
		- Decoradores
		- Enrutado
		- Controladores
		- ORM
		- Serializador
		- Plantillas
- Capas
	- Separación de intereses.
	- Capa N sólo interactúa con capa N-1.
	- TL;DR:
		- Bajo acoplamiento.
		- Alta abstracción.
- Pipes & Filters
	- Proceso aplicado de forma secuencial a un flujo de datos.
	- Para cuando hay un flujo de datos continuo.
	- La salida de cualquier pipe/filter puede ser la entrada de otro pipe/filter.
- Paso de mensajes
	- pub/sub
- Basadas en componentes
	- Componentes individuales.
	- Componente ~ Objeto.
- Orientadas a servicios
	- Servicios accesibles mediante la web.
	- Consumidor/Proveedor/Registro
- Microservicios
	- Descomposición funcional en un conjunto de servicios independientes y manejables.
	- Independientes
	- Desacoplados
- 12F-App
	- :-)

## 2. DevOps

- Automatizar:
	- Construcción
	- Integración
	- Pruebas
	- Infraestructura
- Integración y entrega continuas

## 3. Integración y tecnologías

- Invocación Remota
- Paso de Mensajes
- Agentes Móviles
- P2P

- Servicios web
	- Páginas estáticas HTML a través de HTTP.
	- Páginas dinámicas HTML a través de HTTP generado por un programa en el servidor.

- XML-RPC
	- RPC usando XML para los mensajes.
- JSON-RPC
	- ... JSON ...

- SOAP
	- Usa XML
	- Usa HTTP
	- Es SOA
		- Consumidor
		- Proveedor
		- Registro
	- Mensajes:
		- Envelope
		- Header
		- Body
		
- UDDI
	- Mecanismo centralizado de registro/descubrimiento de registros

- REST
	- Usa al máximo HTTP
	- Stateless
	- Operaciones
		- Segura: No modifica recursos
		- Idempotente: No tiene efectos adicionales si es invocada más de una vez con los mismos params
		- GET: Segura e idempotente.
		- PUT: No segura sí idempotente.
		- POST: No segura no idempotente.
		- DELETE: No segura sí idempotente.
		- POST puede ser idempotente usando ventanas y cabeceras.
	- Madurez
		- Nv0: Una URL y verbo HTTP.
		- Nv1: N URLs y un verbo HTTP.
		- Nv2: N URLs y N verbos HTTP.
		- Nv3: N URLs, N verbos HTTP e hipertexto (HATEOAS).