# Ejercicios Examen 3
2024-01-10 (YYYY-MM-DD) @ 12:12
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #Viesques 
	Sobre #Ing_Svcs 
	Para #Apuntes
	Otros:
	Refs:
 
<hr>

## Campus Virtual

### Verdadero / Falso

- A: Falso. Si la tasa de transferencia es superior la descarga es mayor a la reproducción.
- B: Falso. Los tipos [[5. Servicios Multimedia#Intra-Frame]] utilizan la compresión del frame sólo. Depende de si todos los frames utilizan la misma compresión. Si para todos los frames la compresión fuese igual y diese resultado al mismo tamaño de frame, sería verdadero.
- C: Verdadero. Si el bitrate está limitado, escenas de acción (que requieran mas cambios entre cada frame) tendrán peor calidad.
- D: Falso. Los tipos [[5. Servicios Multimedia#Inter-Frame]] utilizan los cambios entre el frame anterior y el actual para comprimir el frame actual. En un cambio de escena, hay muchos cambios entre el frame anterior y el actual por lo que se utilizaría un IFrame ([[5. Servicios Multimedia#Intra-Frame]]).

### Problemas resueltos por HTML5

#### Resueltos

Ya no se utiliza una etiqueta `<object>` para mostrar contenido multimedia.
Se utilizan etiquetas específicas.

#### Por resolver

HTML5 no especifica el códec a utilizar.
Algunos códecs están soportados por unos navegadores y otros no.

### Cómo se logra el lip-syncing en RTP

El procolo RTP utiliza RTCP para enviar estadísticas y sincronizar varios flujos de datos.
RTCP utiliza un paquete de tipo SR (Sender Report) para sincronizar varios flujos, por ejemplo uno de vídeo y otro de audio.

### Explicar red federada y single-hop en XMPP

La red XMPP utiliza varios servidores interconectados entre sí, de forma que cada servidor está directamente conectado con el resto de servidores.
Single-hop significa que una petición de un cliente sólo cruzará 2 servidores como máximo para llegar al destino.
Esto es posible porque todos los servidores están directamente conectados entre sí.

#### Comparar con HTTP Y SMTP

La red SMTP también utiliza varios servidores conectados entre sí, pero no están todos directamente conectados.
Puede ser necesario realizar varios saltos entre servidores para llegar al destino.

La red HTTP... now what? same thing?

### Diferencia entre enviar un mensaje a un fullJID Y un bareJID

Un mensaje que se envia a un fullJID (user@site/resource) se enviará a ese recurso.
Un mensaje que se envía a un bareJID (user@site) se enviará al recurso con mayor prioridad positiva.

### En android se reinicia una actividad para adaptar el layout a una nueva orientación

#### Secuencia de estados por los que pasa la actividad si estaba visible

#### Qué sucede si había un AsyncTask mientras se reiniciaba la actividad

### Actividad que dura media hora en un móvil, cómo se implementa en segundo plano
