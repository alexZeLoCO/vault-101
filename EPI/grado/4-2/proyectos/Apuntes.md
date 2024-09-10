# Apuntes
2024-05-11 (YYYY-MM-DD) @ 11:58
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #Viesques 
	Sobre #Proyectos 
	Para #Apuntes 
	Otros:
	Refs:
 
<hr>

## Concepto

Proyecto: Combinación de recursos, humanos y no humanos, reunidos en una organización temporal para conseguir un propósito determinado.
Un proyecto implica:

- Esfuerzo temporal.
- Equipo temporal.
- Diseño.
- Mayor riesgo.

A diferencia de un servicio, cuyo esfuerzo y equipo son continuos, el riesgo menor y el diseño ninguno (no se crea nada nuevo).

### Tipos

Existen dos tipos de proyectos:

- Económicos
	- Crear un servicio para un cliente.
	- Promoción privada.
	- Beneficios económicos para el promotor.
- Sociales
	- Cubrir necesidades básicas.
	- Promoción sin ánimo de lucro.
	- Beneficios económicos para un tercero.

### Características

El proyecto administra 3 recursos indirectamente proporcionales:

- Calidad
- Tiempo
- Coste

Otras características de los proyectos:

- Unicidad
- Complejidad
- Irreversibilidad
- Principio y fin determinados
- Multidisciplinaridad
- Riesgo

### Riesgo

El riesgo se mide en dos variables:

- Probabilidad: Probabilidad de que suceda un imprevisto.
- Gravedad: Coste de corregir el imprevisto. 

Al comenzar el proyecto, la probabilidad de que sucedan imprevistos es mayor, pero su gravedad es menor.
Al finalizar el proyecto, la probabilidad de que sucedan imprevistos es menor, pero su gravedad es mayor.

### Ciclos de vida

No confundir el ciclo de vida del producto con el del proyecto.
El ciclo de vida del producto incluye al ciclo de vida del proyecto.
El ciclo de vida del proyecto es sólo una parte del ciclo de vida del producto.

El ciclo de vida del producto comienza con el del proyecto.
El ciclo de vida del producto finaliza con la utilización, mantenimiento y sustitución de lo desarrollado por el proyecto.

El ciclo de vida del proyecto:

1. Ingeniería del sistema
2. Análisis
3. Diseño
4. Codificación
5. Pruebas

### Organización de los proyectos

El cliente (promotor) del proyecto se pone en contacto con la organización, representada por el jefe del proyecto.
El jefe del proyecto está en contacto con su equipo que se encarga de desarrollar el proyecto.
La organización, representada por el jefe del proyecto está en contacto también con las partes interesadas (_stakeholders_):

- Contratistas
- Administración
- Ciudadanos
- Usuarios

> [!error] _Esta definición cae siempre en examenes_
> Stakeholder: Grupo de personas, entidades y asociaciones que tienen intereses en, puede influir en, ser afectado por o percibirse afectado por cualquier aspecto de un proyecto.

## Viabilidad

### Económica

Viabilidad económica: Estudio sobre la rentabilidad del proyecto.
Viabilidad financiera: Estudio sobre la obtención de los recursos necesarios para realizar el proyecto.

- Horizonte: Período en el que se evalúa la inversión.
- Inversión: Uso de recursos para una actividad productiva. Dinero necesario para llevar el proyecto a cabo.
- Dimensión: Cantidad necesaria para emprender el proyecto.

> [!note] Inversión v. Dimensión
> Si bien la inversión es la cantidad necesaria para llevar el proyecto a cabo,
> lo más probable es que esa cantidad sea deficitaria, por lo que será necesario invertir más.
> La cantidad total final invertida es la dimensión del proyecto.

- Ingresos: Ventas anuales generadas por la actividad de la empresa.
- Gastos: Costes de producción
	- Costes fijos: Constantes, previsibles.
	- Gastos variables: Directamente proporcionales a las ventas.
- Beneficios: Ingresos - Gastos
- Flujo de caja: Balance entre cobros y pagos realizados por períodos.

### PR - Período de Retorno

Tiempo necesario para recobrar la inversión inicial.

### VAN - Valor Actual Neto

Diferencia entre ingresos y gastos en el horizonte expresados en moneda actual.

- $T$: Horizonte
- $I_t$: Ingresos del año $t$
- $G_t$: Gastos del año $t$
- $i$: Tasa de interés
- $Q_0$: Inversión inicial

$$
	VAN = \sum_{t=0}^{T} {{I_t - G_t}\over{(1 + i)^t}} - Q_0
$$

Una vez calculado el $VAN$, hay 3 opciones:

- $VAN < 0$: El proyecto no es rentable
- $VAN = 0$: La rentabilidad del proyecto es nula
- $VAN > 0$: El proyecto es rentable

El $VAN$ es una función principalmente de la tasa de interés $i$, por lo que si $VAN < 0$,
se puede decir que el proyecto no es rentable para la $i$ propuesta y es necesario reducir $i$.

> [!note] $i$
> A mayor $i$, menor rentabilidad.
> A menor $i$, mayor rentabilidad.

### TIR - Tasa Interna de Rentabilidad

La TIR es la $i$ que hace $VAN = 0$.
Por lo que la $i$ para un proyecto rentable debe ser siempre $i > TIR$.

#### Apalancamiento

El apalancamiento mide la cantidad de inversión utilizada para desarrollar un proyecto que es prestada.
Lo más común es que los proyectos estén parcialmente apalancados, no totalmente.
La cantidad devuelta es distinta a la originalmente prestada debido a factores:

- Inflación
- Coste de oportunidad
- Riesgo de impago

#### Patentes y Freedom to Operate

No siempre es interesante patentar un producto.
El patentado implica la obligación de publicar el diseño y método de producción de lo patentado.
Si mantener el producto secreto es un objetivo de interés, no se debe patentar.

Freedom to Operate se refiere a un producto no patentado, que se puede producir y vender como tal sin permiso del diseñador original.

## Documentación

### Memoria

La memoria es un documento cuyo lector objetivo es el cliente, no un técnico.
La memoria es el menos importante de los documentos, por lo que frecuentemente no se suele publicar.
Se suelen publicar en su lugar PPTs y presupuestos.
Legalmente, el PPT prevalece sobre la memoria, esto se debe a que a veces se realizan cambios al PPT, y estos cambios no se propagan posteriormente a la memoria.
Los tecnicismos que acompañen a la memoria se deben adjuntar en un anexo.
Contenido ordenado de más general a más específico.
Forma no personal.

- Por qué
	- Antecedentes - Justificación para la ejecución del proyecto
- Qué
	- Objeto - Título expandido básicamente...Objetivos del proyecto
	- Alcance - Limitaciones al proyecto, qué cosas incluye y qué cosas no. Para justificar las cosas que no están hechas.
- Cómo
	- Descripción de situación actual
	- Requisitos iniciales, hipóteiss y restricciones
	- Estudio de alternativas - Sólo si no hubo estudios previos
	- Descripción de la solución propuesta
	- Análisis de riesgos
	- Organización y gestión del proyecto
- Cuándo
	- Planificación temporal - O en el anexo según su extensión
- Cuánto
	- Resumen del presupuesto

### Presupuesto

#### Partidas y Capítulos

- Partida: Un elemento del presupuesto.

> [!info] Partida
> Una partida es cada cosa individual que se presupuesta:
> - Desarrollador, mueble...

En una tabla se hace un listado de cada partida:

| ID  | Descripción | Unidades | Cantidad |
| --- | ----------- | -------- | -------- |
| 101 | Analista    | horas    | 300      |

La tabla anterior no implica que haya un único analista durante 300 horas.
La tabla anterior implica que habrá un número desconocido de analistas, que en total trabajarán 300 horas como conjunto.

Normalmente las partidas se agrupan en capítulos, por eso el ID comienza por 100, indicando capítulo 1.
Cada capítulo contiene elementos relacionados, capítulos podrían ser:
- Página web
- Pruebas de software
- CI/CD
- App móvil

Para cada una de esos capítulos se presupuestarán un listado de elementos, pero todos esos capítulos podrían ser del mismo proyecto.

#### Cuadro de precios

También se adjunta un cuadro de precios.

| ID  | Descripción | Unidades | Coste |
| --- | ----------- | -------- | ----- |
| 101 | Analista    | horas    | 30.00 |

##### Por proyecto

El coste se escribe siempre con 2 cifras decimales siempre, aunque sea redonda la cifra.

En el cuadro se añaden otras 2 cantidades:

- Gastos generales: Costes de la empresa por el simple hecho de existir. (13%)
- Beneficio. (6%)

De acuerdo con la ley, el porcentaje de gastos generales + beneficio debe ser inferior al 25%.

##### Por servicio

Los gastos generales y beneficio no se incluyen como entradas a parte.
Los gastos generales y beneficio se incluye en el resto de elementos.

#### Cuadro de aplicación de precios

Este cuadro es una combinación de los dos cuadros anteriores.
En la mayoría de casos, se suelen mostrar los cuadros por separado, no juntos.
Esto se debe a que el cuadro de partidas y capítulos es solicitado por el cliente, mientras que el de precios es del ofertante.
El ofertante no puede reducir la cantidad de cada elemento que solicita el cliente.
El ofertante sí puede reducir el coste de cada unidad de elemento.

| ID      | Descripción | Unidades | Coste | Cantidad | Total |
| ------- | ----------- | -------- | ----- | -------- | ----- |
| 101<br> | Analista    | horas    | 30    | 300      | 9000  |

> [!error] UT
> Varias empresas se juntan para realizar un mismo proyecto.

> [!info] Dirección de Proyecto
> Equipo encargado de la coordinación, seguimiento y control de las partes que llevan a cabo el proyecto.
> En un proyecto donde el trabajo está repartido entre distintas empresas, el equipo de dirección de proyecto se encarga de coordinarlos a todos para obtener un producto cohesionado.

Partida Alzada: Cantidad que no se desglosa.

Si a posteriori fuese necesario contratar una mayor cantidad de algún elemento (i.e. horas del analista), se contratan al mismo precio por hora que el presupuesto original.

Si el elemento necesario a posteriori no estaba en el presupuesto original, se establece un precio nuevo. Esto se llama precio contradictorio.
Los precios contradictorios suelen ser los que suelen disparar el precio de un proyecto (y los beneficios de la empresa).

### Pliego de condiciones técnicas

- Especificaciones y Requerimientos que debe cumplir el proyecto.
- Se emplea como base para la contratación de la ejecución del proyecto.

Existen dos tipos de pliegos de condiciones:

- Pliego de Prescripciones Técnicas (PPT).
- Pliego de Condiciones Administrativas (PCA).

Es necesario que quien redacta el pliego sea muy específico en lo que se quiere.
El pliego se utiliza para la contratación, por lo que quien ejecute el proyecto hará sólo lo especificado en el pliego y nada más.
No se debe asumir nada en la redacción del pliego.

El ingeniero informático redcta el PPT.
Alguien de administración o legal redacta el PCA.
No obstsante, un ingeniero informático debe ser capaz de comprender el PCA.

#### Estructura PPT

>[!note] Memoria
>Mucha información y apartados del PPT están repetidos en la memoria.
>No suelen ser exactamente los mismos.
>De cualquier forma, es importante recordar que el PPT es el documento vinculante, no la memoria.

La estructura de un PPT no está establecida, pero puede seguir el siguiente esquema:

1. Introducción
	- Propósito
	- Alcance
	- Organización solicitante
	- Antecedentes
2. Descripción del proyecto
	- Descripción detallada
	- Objetivos
	- Contexto del desarrollo
	- Usuarios finales
	- Otras consideraciones relevantes
3. Requisitos del proyecto
	- Requisitos funcionales
	- Requisitos de rendimiento
	- Requisitos de seguridad
	- Requisitos de calidad
	- Otros requisitos relevantes: (A entregar código fuente, manuales...)
4. Plazo de entrega
	- Fechas límite para entregas parciales
	- Fecha límite para entrega final
5. Recursos
	- Recursos humanos
	- Recursos tecnológicos
	- Recursos materiales
6. Metodología para la organización y gestión del proyecto
7. Control de calidad y criterios de aceptación
	- Procedimientos de control de calidad
	- Pruebas de funcionalidad
	- Pruebas de rendimiento
	- Pruebas de seguridad
8. Términos y condiciones
	- Derechos de propiedad intelectual
	- Requisitos de confidencialidad
	- Términos del pago
	- Penalizaciones
9. Esquema del formato de documentos a entrega (Generalmente Adm. Pública)
	- Formato de documentos
	- Criterios de valoración de ofertas
10. Anexos
	- Otra información
	- Diagramas
	- Mapas
	- Especificaciones técnicas

#### Cláusulas de Términos y Condiciones

- Propiedad Intelectual de los Trabajos: Determina la propiedad de lo desarrollado.
- Confidencialidad de la Información: Determina que no está permitido la publicación de información privilegiada a la que se accede por desarrollar el proyecto.
- Garantía de los Trabajos: Determina que el proyecto desarrollado funcionará de forma garantizada durante un tiempo especificado.
- Transferencia de Tecnología: Determina que quien desarrolla el proyecto esté obligado a compartir con el contratante la información sobre la tecnología y el funcionamiento del proyecto.
- Documentación de los Trabajos: Determina que los documentos entregados son de uso exclusivo por el contratante, no son reutilizables para otros proyectos.

## Contratación

1. Separar el proyecto en varios contratos independientes.
2. Definir el tipo de solicitud de la oferta.
3. Seleccionar las empresas que han de ofertar.
4. Solicitar ofertas mediante la documentación.
5. Estudio y comparación de ofertas recibidas.
6. Selección de las mejores ofertas.
7. Contrato de la empresa seleccionada.

## Separar el proyecto

El proyecto se divide en distintos contratos, cada uno llamado Lote.
Evitar Fragmentación de Contrato, los Lotes se dividen según la naturaleza del proyecto.

- Contrato de precio fijo (Interesante para el cliente).
- Contrato de precio variable (Interesante para el ofertante).
- Contrato "Llave en Mano".

## Definir tipo de solicitud

- Subasta (Concurso con único criterio de adjudicación económico): Adjudicación a la oferta más barata.
- Concurso: Adjudicación a la oferta más adecuada.
- Concurso-Subasta: Se exigen unos requisitos a los contratistas, se adjudica al menor precio.
- Concurso Restringido.

## Presentación de Documentación

- Oferta técnica.
- Oferta económica.
- Certificados requeridos.

> [!error] Oferta Técnica
> La oferta técnica no puede contener información de la oferta económica.
> Incumplir esta restricción implica la exclusión de la participación en el concurso o subasta.

> "Hay cosas que salen de aquí que suelen ir para el examen, así que preguntarlas"
>  ~ Nuestro amigo Vicente

- Garantías: Cantidad entregada para asegurar que no se abandona el proyecto (por ejemplo).
- Baja Temeraria: Alguna de las ofertas es inexplicablemente inferior a lo esperado

Al utilizar la baja temeraria, se debe dejar que la empresa explique sus cálculos para obtener dicho resultado.
