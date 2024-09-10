# AD & Clasificación

El conjunto de datos corresponde a las características de vinos así como sus
tipos donde 1 es blanco y 0 es tinto.

## Parte 1: Carga y preprocesamiento inicial de datos (40%)

### P1 - Ejercicio 1

Cargar los datos del documento en la variable `data`.

### P1 - Ejercicio 2

Obtener la siguiente información:

- Número de columnas del conjunto
- Número de ejemplos del conjunto
- Número de ejemplos donde el vino es blanco
- ¿Existe algún dato nulo en el conjunto?

### P1 - Ejercicio 3

Obtener la siguiente información para cada columna:
- Máximo
- Mínimo
- Media
- Desviación

### P1 - Ejercicio 4

Aplicar la siguiente función a todos los datos del conjunto:
$$
x = { { x - \min(x) } \over { \max(x) - \min(x) } }
$$

### P1 - Ejercicio 5

1. ¿Por qué se ha aplicado la función anterior a todos los elementos del conjunto?
2. ¿Qué podría suceder si no se hace?

### P1 - Ejercicio 6

Dividir el conjunto de datos en dos subconjuntos,
siendo ambos representativos del conjunto original.

Almacenar uno de ellos en `data_train` y otro en `data_test`.
`data_train` se utilizará para entrenar al modelo y `data_test` para evaluarlo.

### P1 - Ejercicio 7

Dividir los dos conjuntos `data_train` y `data_test` en 
`data_train_x`, `data_train_y`, `data_test_x` y `data_test_y`.

Los conjuntos `_y` tienen las categorías resultado, mientras que los
`_x` tienen los datos de entrada para calcular las categorías de `_y`.

### P1 - Ejercicio 8

Debido a la naturaleza de los datos, es necesario categorizarlos.
Si no se categorizan, no será posible crear un modelo que pueda resolver el problema.

### P1 - Ejercicio 9

Obtener la siguiente información:

- Cantidad de datos en el conjunto de entrenamiento
- Cantidad de datos en el conjunto de evaluación

## Parte 2: Clasificación (60%)

### P2 - Ejercicio 1

Crear un modelo que tenga dos capas ocultas:

1. La primera capa tiene 6 datos de salida
2. La segunda capa tiene 3 datos de salida
3. Será necesario seleccionar una capa final que presente los resultados y utilice la función de activación adecuada.

(Completar el código)

```python
def create_model(learning_rate=None):
    # Aquí el código de tu modelo
    # OJO: La función create_model recibe el learning rate
    # -------------------------------------

    # -------------------------------------
    return model

def plot_history(history):
  # Este método se encarga de dibujar las gráficas de loss al final del entrenamiento
  plt.figure()
  plt.xlabel('Epoch')
  plt.ylabel('categorical_crossentropy')
  plt.plot(history.epoch, history.history['loss'], label='Train Loss')
  plt.plot(history.epoch, history.history['val_loss'], label='Validation Loss')
  plt.legend()
  plt.ylim([0, max(history.history['loss'])])
```

### P2 - Primer entrenamiento

```python
learning_rate = 0.001
batch_size = 256
epocs = 10

learning_rate = 0.001
batch_size = 256
epochs = 10

model = create_model(learning_rate=learning_rate)
history = model.fit(data_train_x, data_train_y,  verbose=2, batch_size=batch_size, epochs=epochs, validation_data=(data_val_x, data_val_y))
plot_history(history)
```

Tras ejecutar el modelo, qué cambio deberías realizar y por qué.

### P2 - Ejercicio 2

Tras ejecutar el modelo, qué cambio deberías realizar y por qué.

### P2 - Ejercicio 3

Tras ejecutar el modelo, qué cambio deberías realizar y por qué.

### P2 - Ejercicio 4

Tras ejecutar el modelo, qué cambio deberías realizar y por qué.

### P2 - Ejercicio 5

Tras ejecutar el modelo, cómo de bueno crees que es y por qué.
