Al inicio del desarrollo de un proyecto software es muy fácil completar historias de usuario y añadir funcionalidades.
Sin embargo, a medida que pasa el tiempo el desarrollo se dificulta, frecuentemente por las decisiones (con pocas vistas a futuro) que se han tomado a la hora de implementar funcionalidades anteriores. La deuda técnica.

Para evitar esta deuda se pude utilizar una mejor arquitectura que permita implementar más funcionalidades fácilmente. Mejor escalabilidad.
Si bien un programa con una arquitectura compleja tiene una mayor escalabilidad, las implementaciones suelen requerir más código (enlenteciendo el desarrollo) y pueden no tener el rendimiento esperado.
Asimismo, programas que se hayan implementado rápidamente pueden no tener mucho rendimiento.
Entonces, la escalabilidad, la velocidad y el rendimiento parecen ser tres atributos que se oponen. Si aumentas mucho uno de ellos, los otros dos se ven reducidos.

El proyecto entonces suele requerir que sus desarrolladores cambien la mentalidad frecuentemente, de forma que en cada momento, uno de los tres objetivos sea primordial: la escalabilidad (para evitar aumentar la deuda técnica), la velocidad (para terminar un MVP lo antes posible) o el rendimiento (para cumplir algún requisito no funcional).
En otras metodologías como Métrica (en las que no se añaden nuevas historias de usuario durante el desarrollo) es fácil manejar estos tres parámetros (escalabilidad, velocidad y rendimiento). Pero en SCRUM puede ser necesario tener que revisitar funcionalidades anteriores para rehacerlas, reduciendo la concentración del equipo en las funcionalidades nuevas de este sprint.

Para resolver este problema he observado que frecuentemente se deja a una parte del equipo refinar el código ya existente, prestando particular atención al resto del proyecto. De esta forma se mejora la arquitectura, rendimiento o velocidad de implementación de futuras funcionalidades sin dejar de avanzar el proyecto. ¿Qué opináis sobre esta solución?

<hr>

Al inicio del desarrollo de un proyecto software es muy fácil completar historias de usuario y añadir funcionalidades.
Pero, según avanza el desarrollo, se dificulta el trabajo, frecuentemente por las decisiones (con pocas vistas a futuro) que se han tomado al implementar funcionalidades anteriores: _la deuda técnica_.

Para reducir la deuda técnica, suele ser oportuno reimplementar partes del código centrándose en la escalabilidad, la velocidad o el rendimiento dependiendo de las necesidades.
En otras metodologías como Métrica es fácil manejar estos tres parámetros (escalabilidad, velocidad y rendimiento) ya que no se añaden nuevas historias de usuario durante el desarrollo. Pero en SCRUM puede ser necesario rehacer funcionalidades anteriores, reduciendo la concentración del equipo en las funcionalidades nuevas de este sprint.

Para resolver este problema, sólo una parte del equipo refina el código existente, prestando particular atención a las necesidades del proyecto. De esta forma se mejora la arquitectura, rendimiento o velocidad de implementación sin detener el desarrollo del proyecto. ¿Qué opináis sobre esta solución?
