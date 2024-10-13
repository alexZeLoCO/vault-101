# Examen
2024-10-12 (YYYY-MM-DD) @ 11:11
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #Viesques 
	Sobre #SSO
	Para #Apuntes
	Otros:
	Refs:
 
<hr>

## Tema 1

Cloud Computing:
- Modelo de acceso a recursos computacionales.
- Gestionados mediante grupos configurables.
- Se comparten entre múltiples consumidores.
- Se ofrecen bajo demanda.
- Accesibles a través de la red.
- Asignados y liberados con un mínimo esfuerzo del proveedor.

Elementos del modelo Cloud:
- Cinco características esenciales.
- Tres modelos de servicio.
- Cuatro modelos de despliegue.

### Características esenciales

- Autoservicio bajo demanda: Consumidor puede adquirir capacidades computacionales de forma automatizada sin intervención humana del proveedor.
- Acceso a través de la red: Servicios disponibles a través de la red.
- Agrupación de los recursos en bancos de uso compartido:
	- Recursos del proveedor agrupados para servir a múltiples consumidores.
	- Recursos asignados y reasignados dinámicamente en función de la demanda.
- Elasticidad con rapidez:
	- Capacidad computacional puesta a disposición y liberada elásticamente o automáticamente para adecuarse a la demanda.
	- El consumidor percible capacidades ilimitadas.
- Servicio medido: El uso de recursos es monitorizado y controlado. La información se pone a disposición de consumidor y proveedor, proporcionando transparencia total.

### Modelos de servicio

- Software as a Service (SaaS):
	- Capacidad: Ejecución de software sobre infraestructura del proveedor.
	- Acceso: Navegador web.
	- Control: Parámetros de configuración de software.
- Platform as a Service (PaaS):
	- Capacidad: Uso de plataforma de desarrollo y ejecución. Despliegue de aplicaciones.
	- Control: Parámetros de configuración y control total sobre software desplegado.
- Infraestructure as a Service (IaaS):
	- Capacidad: Adquisición y uso de procesamiento, almacenamiento, redes y otros recursos donde se puede desplegar y ejecutar software y operativos.
	- Control: Sistema operativo, almacenamiento y software desplegado.

- Restricción común:
	- No hay control sobre infraestructura hardware subyacente.
	- No hay control sobre mecanismos de virtualización.
	- Gestión de infraestructura está del lado del proveedor.

### Modelos de despliegue

- Nube Privada
	- Quién usa: Una única organización (puede englobar varios consumidores).
	- Quién gestiona: La organización o un tercero.
	- Dónde se ubica: En la organización o instalaciones de un tercero.
- Nube Comunitaria
	- Quién usa: Múltiples organizaciones que comparten intereses (misión, seguridad, regulaciones).
	- Quién gestiona: Un tercero.
	- Dónde se ubica: Instalaciones de un tercero.
- Nube Pública
	- Quién usa: El público (empresas, personas, organizaciones).
	- Quién gestiona: Un proveedor de servicios de TI.
	- Dónde se ubica: Instalaciones del proveedor.
- Nube Híbrida:
	- Composición de nube privada y pública.
	- Entidades independientes.
	- Tecnologías estandarizadas.
	- Portabilidad de datos y software.
	
### Actores principales

- Consumidor: Entidad que mantiene una relación comercial con y utiliza servicios de proveedores de cloud.
- Proveedor: Entidad responsable de poner un servicio cloud a disposición de consumidores.
- Auditor: Tercero que evalúa los servicios, operaciones, rendimiento y seguridad de una implementación cloud.
- Intermediario: Entidad que negocia relaciones entre proveedores y consumidores. Gestiona el uso, prestación y rendimiento de los servicios.
- Operador de Interconexión: Intermediario que proporciona conexión entre el cloud del proveedor y el consumidor.

## Tema 2: Infraestructura Virtual

- Definición
	- Extensión del concepto de virtualización.
	- Virtualización aplicada a un banco de recursos.
	- Integra almacenamiento, servidores y redes.
	- Recursos trabajan colaborativamente.
	- Proporcionan a la VM una vista unificada de los recursos HW.
- Ventaja Esencial
	- Flexibilidad en asignación de recursos HW a VMs.

### Elementos de Infraestructura HW

- Servidores: Proporcionan capacidad de cómputo a hipervisores y VMs.
- Red de Datos: Proporcionan conectividad a hipervisores y VMs.
- Red de Almacenamiento: Proporcionan conectividad entre servidores y sistemas de almacenamiento.
- Sistemas de Almacenamiento: Proporcionan capacidad de almacenamiento a hipervisores y VMs.

### Topologías 

#### Topología Tres Niveles

- Nivel de Acceso:
	- Proporciona conectividad a servidores.
	- ToR.
- Nivel de Agregación:
	- Consolida conectividad de los enlaces uplink provenientes del Nivel de Acceso.
	- EoR.
- Nivel troncal:
	- Eje central de comunicaciones, conecta Nivel de Agregación con el exterior del CPD.
	- Pareja de Switches.

#### Topología Colapsada Nivel Troncal

- Concepto: Combinar el Nivel Troncal con el de Agregación.
- Ventaja: Menos infraestructura, menor coste de adquisición y gestión.
- Uso: En CPDs de tamaño reducido.

#### Apilamiento de Switches / _"Switch Stacking"_

- Concepto:
	- Agrupar switches.
	- Funcionan como único sistema con el total de puertos.
	- Un switch actúa de maestro.
- Cuándo: 
	- Cuando en los Niveles de Acceso o Agregación un switch no puede ofrecer el número de puertos requerido.
- Implementación: 
	- Se configuran dos puertos de cada switch para conectarlos al _stack_.
	- Con esos puertos se hace una conexión en anillo de todos los switches.

### VLAN

- Concepto:
	- Tecnología permite segmentación del dominio físico broadcast de una LAN en múltiples dominios físicos broadcast independientes.
- Etiquetado:
	- Se inserta un campo de 4B en la cabecera de los paquetes ETH.
	- Se utilizan 12b del campo para indicar la VLAN (4096 VLANs distintas).

#### Puertos de Acceso y Trunk

- Puerto de Acceso:
	- Puerto que sólo pertenece a una única VLAN.
	- Gestiona tráfico sin etiquetar.
	- Se conecta a equipos finales.
- Puerto Trunk:
	- Puerto que pertenece a varias VLANs.
	- Gestiona tráfico etiquetado.
	- Se usa en enlaces uplink entre switches.
- Etiquetado:
	- Paquete llega al trunk sin etiquetar.
	- Switch etiqueta el paquete antes de enviarlo.
	- Paquete llega al switch destino etiquetado.
	- Switch elimina la etiqueta.
	- Switch envía el paquete por el puerto que corresponda.

#### Equipos Finales con varias VLAN

- Tipo de plataformas: Plataformas de virtualización, especialmente aquellas que se interconectan siguiendo el paradigma de infraestructura virtual.
- Por qué: Porque necesitan manejar tráfico de red de distintas naturalezas, siendo conveniente que se mantengan segmentados.
- Tipos de tráfico:
	- Infraestructura
		- Clústering/CSV
		- Migración de VM
		- Gestión
	- Clientes
		- Correspondiente a las VM que se ejecutan dentro de la plataforma de virtualización.

### NIC Teaming

- Concepto:
	- Tecnología permite agrupar 2 o más NICs.
	- Funcionan de forma colaborativa.
	- Todas las NIC tienen la misma IP.
- Beneficios:
	- Agregación de anchos de banda:
		- El ancho de banda teórico es la suma de los anchos de banda de las NICs que forman el grupo.
	- Tolerancia a fallos:
		- Permite que el servidor esté conectado a dos caminos diferentes.
		- Si uno falla, las comunicaciones siguen por el otro.

#### Agregación

##### Implementación

- Teaming Independiente del Switch:
	- No requiere configuración en el switch.
	- El grupo se puede conectar a más de un switch.
- Teaming Dependiente del Switch:
	- Sí requiere configuración en el switch.
	- El grupo se puede conectar a un sólo switch.

##### Comparativa

- Complejidad de la Configuración: Independiente del switch es más simple porque no requiere configuración en el switch.
- Prestaciones: Independiente del switch limita las prestaciones de tráfico porque el tráfico entrante sólo puede ser manejado por una de las NICs.

##### Modo Activo/Activo

- Todas las NIC están operativas simultáneamente manejando el tráfico de red.

#### Tolerancia a fallos

##### Implementación

- Sólo es posible utilizar el teaming independiente del switch ya que el grupo debe conectarse a switches diferentes.

##### Modo Activo/Pasivo

- Un NIC está activo mientras el otro está pasivo.
- Si el camino de red del NIC activo se interrumpe, se intercambian los roles.
- Ambos NIC usan la misma dirección MAC.

### Topologías

### Edge Core

- Edge
	- Objetivo: Proporcionar la infraestructura de conexión para los servidores.
	- Implementación: Mediante switches de configuración fija.
- Core
	- Objetivo: Consolida conectividad de todos los enlaces del nivel Edge y conecta sistemas de almacenamiento.
	- Implementación: Mediante switches modulares. Como minimo dos para garantizar redundancia.

### Edge Core Edge

- Edge
	- Objetivo: Proporcionar la infraestructura de conexión para los servidores.
	- Implementación: Mediante switches de configuración fija.
- Core
	- Objetivo: Consolida conectividad de todos los enlaces de los dos niveles Edge.
	- Implementación: Mediante switches modulares. Como minimo dos para garantizar redundancia.
- Edge Almacenamiento
	- Objetivo: Proporcionar la infraestructura de conexión para los sistemas de almacenamiento.
	- Implementación: Mediante switches de configuración fija.

#### Comparativa

- Coste de Instalación:
	- Menor en el caso de Edge Core.
	- Menor número de switches.
- Prestaciones:
	- Ligeramente superior en Edge Core.
	- Menor número de comunicaciones entre switches.
- Escalabilidad:
	- Muy inferior en Edge Core.
	- Falta del nivel Edge Almacenamiento.
	- Limita escalabilidad del Almacenamiento.

### Redundancia y Capacidad de Recuperación

- Objeto:
	- Todos los componentes deben estar redundados con objeto de eliminar puntos de fallo únicos.
	- La redundancia persigue la tolerancia a fallos.
- Significado:
	- Capacidad de la red.
	- Establecer camino alternativo al activo.
	- Cuando se produce un fallo en el camino activo.
	- De modo que la red siga proporcionando conectividad a los dispositivos.
- Dónde se Implementa:
	- En el SO de los switches.
- Fabric Shortest Path First (FSPF):
	- Protocolo de enrutamiento en redes FC.
	- Calcula el mejor camino entre posibles switches.
	- Determina rutas alternativas en caso de fallos.

#### Topología de Red Redundante

- Una SAN redundante requiere que existan dos redes totalmente independientes, siendo cada una de ellas redundante en sí misma. Cada dispositivo final (servidor o sistema de almacenamiento) debe tener una conexión a cada una de estas redes.

- Dos redes totalmente independientes.
- Cada red redundante.
- Cada dispositivo final conectado a ambas redes.

### Trunking

- Concepto:
	- Agregación de links.
	- Utilizado en interconexión de switches.
- Objetivos:
	- Agregación de Anchos de Banda.
	- Tolerancia a Fallos:
		- Un enlace falla, comunicación sigue por otros enlaces.
		- Evita necesidad caminos alternativos.
		- Evita retardos en comunicaciones.

### MultiPath I/O

- Concepto:
	- Tecnología Software.
	- Permite a un servidor gestionar múltiples rutas hacia un sistema de almacenamiento.
	- Deben existir caminos redundantes.
- Implementación:
	- Módulo software (MPIO).
	- Puede ser parte de SO, hipervisor o módulo añadido.
- Gestión End to End:
	- MPIO gestiona conectividad servidor-LUN.
- Modos de Funcionamiento:
	- Tolerancia a Fallos:
		- Único camino activo.
		- Si se produce un fallo el pasivo pasa a ser activo.
	- Balanceo de Carga:
		- Todos los caminos funciona simultáneamente.
		- Carga balanceada entre ellos.

### Escala no global

#### Requisitos

- Elevada disponibilidad: Maximizar prestación continuada de servicios.
- Soporte virtualización: Permitir ejecución eficiente de VMs.
- Capacidad de cómputo elevada: Soportar ejecución simultánea de VMs.

#### Características

- Factor de forma: Rack o Blade.
- Alta Disponibilidad:
	- Redundancia de componentes.
	- Componentes conectables en caliente.
- Soporte a Virtualización asistida por HW:
	- Intel VT-x
	- AMD-V
- Capacidad de cómputo:
	- Cores: 2 ó 4, hasta 32.
	- RAM: 128GB.
- Conectividad a la SAN:
	- Dos HBA: Para la correcta conexión a una red tolerante a fallos.
- Conectividad a la red de datos:
	- Dos NIC 10 GbE: Para crear un team que sea tolerante a fallos.

### Escala Global

#### Requisitos

- Coste Reducido:
	- La relación coste/prestaciones debe ser reducida.
- Eficiencia Energética:
	- La relación consumo/prestaciones debe ser reducida.
- Escalabilidad:
	- Debe facilitar la escalabilidad de la infraestructura.
- Simplicidad de Gestión y Mantenimiento:
	- Mantenimiento debe llevarse a cabo en el menor tiempo e impacto posibles.
- Sostenibilidad:
	- Poner énfasis en el respeto al medio ambiente en el uso de materiales.

#### Características

- Factor de forma:
	- Blade.
	- Aumentar densidad de cómputo, escalabilidad y eficiencia energética.
- Elimina redundancia de componentes:
	- Objetivo: Reducir costes.
	- Problema: Reduce disponibilidad.
	- Solución: Soluciones software como replicación de servicios.
- Incrementa modularidad:
	- Facilita compartición de recursos.
	- Facilita adaptación de infraestructura.
- Minimiza uso de material de fabricación y uso de materiales reciclables.
- Conectividad:
	- Única conexión de red o conexión compartida.
	- Hiperconvergencia de redes.
		- Red de datos y SAN comparten conexión, segmentada a nivel lógico (VLAN).

### Open Compute Project

- Facebook, 2009.
- Comunidad abierta.
- Comparten diseños de TI para CPDs.
- Meta, Microsoft, Google, Cisco, Rackspace.

### Virtualización

- Hipervisores Tipo 1 (Bare Metal)
	- ESXi (VMWare)
	- Hyper-V (Microsoft)
	- Xen (Citris y Xenserver)
- Virtualización a nivel de kernel
	- KVM (Red Hat)

### Tecnologías de Colaboración de Sistemas

- Clúster de Conmutación por Error
- Clúster Shared Volumes (CSV)
- Migración en vivo de VMs. 
- Migración en vivo de almacenamiento.

### Clúster de Computadores

- Definición
	- Conjunto de computadores interconectados.
	- Trabajan colaborativamente.
	- Se presentan a usuarios, otros sistemas y aplicaciones como uno único.
- Objetivo
	- Mejorar prestaciones o disponibilidad.
	- Respecto a un computador único.

#### Tipos de Clústeres

- Alta disponibilidad
	- Objetivo: Proporcionar alta disponibilidad a los servicios.
	- Implementación: Redundar componentes HW y SW.
	- Ámbitos: Bases de datos relacionales.
- Balanceo de carga
	- Objetivo: Proporcionar plataforma de prestaciones escalable y alta disponibilidad.
	- Implementación: Múltiples nodos de procesamiento gestionados por un balanceador.
	- Ámbitos: Servicios basados en web.
- Computación
	- Objetivo: Proporcionar plataforma de computación de altas prestaciones para ejecución de aplicaciones paralelas.
	- Implementación: Múltiples nodos con librería de comunicaciones.
	- Ámbitos: Aplicaciones paralelas (simulación, cálculo).

### Conmutación por Error

- Concepto
	- Conmutación automática del control de servicios de un cluster a otro.
	- Cuando se produce un fallo en el activo.

### Arquitectura de Red Básica

- Red Privada
	- Comunicaciones del Clúster.
- Red Pública
	- Conexión de sistemas del cliente al clúster.
	- Si la red privada falla, la pública se usa como privada también.

### Componentes de un Clúster de Windows

- Clúster Service
	- Concepto: Servicio que gestiona la pertenencia de un servidor a un cluster.
	- Funcionalidades:
		- Mantener el estado global del cluster:
			- Estado de nodos
			- Estado de recursos gestionados
		- Gestionar la configuración del cluster:
			- Gestión de la base de datos de configuración
		- Gestionar el failover
- Base de datos del clúster
	- Mantiene información sobre configuración del cluster
	- Todos los nodos y quórum tienen una réplica de la misma
	- EL Cluster Service mantiene la consistencia entre réplicas
- Consola de Administración
	- Herramienta GUI
	- Operaciones para administración
	- Crear clúster, agregar, eliminar nodos, gestionar recursos.
- Quórum
	- Almacén guarda información de configuración
	- Árbitro para tomar decisiones sobre la pertenencia al clúster y su estado
- Quórum Log
	- Fichero con registros de las operaciones realizadas y eventos del clúster

### Hearbeat

- Definición: Mecanismo de verificación del mantenimiento on-line de los nodos.
- Funcionamiento:
	- Envío periódico de paquetes entre nodos.
	- Detecta la caída de cualquiera de los nodos.

### Split Brain y Quórum

#### Split Brain

- Concepto:
	- Si ocurren problemas de la conexión.
	- Parte de los nodos podrían mantenerse cada parte operativa.
- Consecuencias:
	- Corrupción de la información en el almacenamiento.
	- Clúster dejaría de operar correctamente.

#### Quórum

- Objeto:
	- Proporcionar una solución al Split Brain
- Concepto:
	- Número mínimo de elementos del clúster operativos y visibles.
	- Debe ser igual a la mitad de elementos más uno.
- Mecanismo utilizado para la formación del quórum:
	- Ejecución periódica de algoritmo de votación entre elementos del clúster.
	- Mitad de votos más uno = quórum
- Elementos con derecho a voto:
	- Nodo (1 voto)
	- Disco o quórum (1 voto)
	- Carpeta compartida testigo (1 voto)

### Modelos de Quórum

- Mayoría de nodo: Cuando hay un número par de nodos.
- Mayoría de nodo y disco: Cuando hay un número impar de nodos.

### Clúster de Hyper-V

- Concepto: Clúster de conmutación por error con Hyper-V instalado en sus nodos.
- Almacenamiento Compartido: Almacenar ficheros de vhdxs usados por VMs.
- VMs: Cualquier VM ejecutable en cualquier nodo.

#### Aportaciones esenciales

- Alta Disponibilidad:
	- Capacidad de arrancar una o varias VMs en un o varios nodos cuando nodo falla.
	- Estado de máquinas se pierde pero los servicios se reestablecen.
- Marco movilidad:
	- Clúster Hyper-V aporta recursos y servicios para mover VMs entre nodos.
	- Beneficios
		- Balanceo de carga:
			- Las VMs pueden moverse a unos nodos u otros según la carga.
		- Mejoras operativas
			- El movimiento facilita la actualización y mantenimiento de nodos.

### CSV

- Concepto:
	- Tecnología permite N nodos de clúster conmutación por error leer y escribir una misma LUN.
- Beneficio:
	- Indispensable para establecer marco de movibilidad de VMs.

### Migración en vivo de VMs

- Concepto:
	- Capacidad de mover VMs de un nodo a otro.
	- Sin producir impacto en la disponibilidad de la VM.
- Beneficio:
	- Total flexibilidad en el uso de infraestructura por parte de las VM.

### Migración en vivo del Almacenamiento

- Concepto:
	- Capacidad de mover almacenamiento de una VM mientras se ejecuta.
- Uso habitual:
	- Procesos de actualización o mantenimiento del sistema de almacenamiento.

### Microsoft System Center

- Conjunto de herramientas
- Diseñadas para simplificar el despliegue, configuración, administración y supervisión de infraestructura de centro de datos y componentes virtuales desplegados en él.

## Preguntas

### Tema 1

- Cloud Computing
	- Definición
	- Elementos del modelo cloud
- Características esenciales cloud
- Modelos de servicio
	- Características de cada modelo
	- Restricción común
- Modelos de despliegue
	- Quién lo usa
	- Quién lo gestiona
	- Dónde se ubica
- Actores principales

### Tema 2

- Infraestructura Virtual
	- Definición
	- Ventaja esencial
- Elementos de la infraestructura hardware
	- Cometido de cada uno de ellos
- Topología en tres niveles
	- Funcionalidad de cada uno
	- Posición que ocupan
	- Diagrama
- Topología colapsada en nivel troncal
	- Concepto
	- Ventaja
	- Uso
	- Diagrama
- Apilamiento de switches
	- Concepto
	- Cuándo se aplica
	- Implementación
- VLAN
	- Concepto
	- Etiquetado
- Puertos de acceso y trunks
	- Puerto de acceso
	- Trunk
- Equipos finales con varias VLAN
	- Qué tipo de plataformas
	- Por qué
	- Tipos de tráficos
- NIC teaming
	- Concepto
	- Beneficios
		- Explicar cada uno
- NIC Teaming para agregación
	- Dos alternativas de implementación
	- Comparativa
		- Complejidad configuración
		- Prestaciones
	- Modo de funcionamiento
- NIC Teaming para tolerancia a fallos
	- Alternativa de implementación
	- Modo de funcionamiento
- Topología Edge-Core
	- Objetivo de cada nivel
	- Tipo de implementación de cada nivel
- Topología Edge-Core-Edge
	- Objetivo de cada nivel
	- Tipo de implementación de cada nivel
- Comparativa de topologías
	- Coste de instalación
	- Prestaciones
	- Escalabilidad
- Redundancia y capacidad de recuperación
	- Objetivo de redundancia
	- Significado de capacidad de recuperación
	- Dónde se implementa la capacidad de recuperación
	- Qué es Fabric Shortest Path First (FSPF)
- Topología de red redundante
	- Topología de una red SAN redundante y como se conectan los dispositivos finales a ella.
- Trunking
	- Concepto
	- Objetivos del trunking
- MPIO
	- Concepto
	- Implementación
	- Modos de funcionamiento
		- Explicar cada uno
- Req. Servidores pequeños y medianos
	- Objetivo de cada uno de ellos
- Características Servidores pequeños y medianos
	- Factor de forma
	- Características alta disponibilidad
	- Mecanismos de soporte de virtualización asistida por hw
	- Conectividad a la SAN
	- Conectividad a la red de datos
- Req. Servidores global
	- Objetivo de cada uno de ellos
- Características Servidores global
	- Factor de forma
	- Elimina redundancia
		- Por qué
		- Problema
		- Solución
	- Objetivo incremento modularidad
	- Estrategia de conectividad
- OPEN Compute Project
	- Qué es
	- Quiénes actúan
- Virtualización
	- Productos utilizados para virtualización
	- Categoría de cada uno
- Cuatro tecnologías de colaboración de sistemas que dan soporte a infra. virtual.
- Clúster de computadores
	- Definición
	- Objetivo
- Tipos de clústeres
	- Objetivo
	- Criterio de implementación
	- Ámbitos de aplicación
- Estructura de un CCE
	- Esquema
- Conmutación por error (Failover)
	- Concepto
- Arquitectura de red básica
	- Tipos de redes
		- Cometido de cada una
- Componentes Clúster de Windows
	- Cinco componentes
	- Funcionalidades básicas de cluster service
- Hearbeat
	- Concepto
- Split Brain y Quorum
	- Concepto Split Brain
	- Consecuencias Split Brain
	- Objetivo Quorum
	- Concepto Quorum
	- Mencanismo formación Quorum
	- Elementos con derecho a voto
- Modelos Quorum
	- Dos modelos y cuándo se aplican
- Clúster HyperV
	- Concepto
	- Uso almacenamiento compartido
	- Dónde se pueden ejecutar las VM
- Aportaciones esenciales clúster HyperV a infra. virtual
	- Dos aportaciones básicas
	- Beneficios aportados por marco de movilidad de VMs
		- Explicar cada uno
	- Conocer mejora operativa aportada por movilidad VMs
- Introducción CSV
	- Concepto
	- Beneficio Esencial
- Migración en vivo de VMs
	- Concepto
	- Beneficio Esencial
- Migración en vivo de almacenamiento
	- Concepto
	- Beneficio Esencial
- Propuesta MS system Center
	- Explicar qué es MS System Center
