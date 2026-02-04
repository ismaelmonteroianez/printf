*Este proyecto ha sido creado como parte del currículo de 42 por ismonter*

**DESCRIPCION**

**ft_printf** es una reimplementación de la función estándar `printf` de la biblioteca C.  
El objetivo del proyecto es comprender en profundidad el uso de **funciones variádicas**, el formateo de salida y la gestión de diferentes tipos de datos, reproduciendo el comportamiento básico de `printf`.

La función principal, `ft_printf`, analiza una cadena de formato, detecta especificadores de conversión y muestra la salida correspondiente en la salida estándar, devolviendo el número total de caracteres impresos.

### Conversores implementados

- `%c` para un carácter  
- `%s` para un string  
- `%d` o `%i` para un entero con signo  
- `%u` para un entero sin signo  
- `%x` para un entero hexadecimal en minúsculas  
- `%X` para un entero hexadecimal en mayúsculas  
- `%p` para un puntero  
- `%%` para el carácter `%`

**INTRUCCIONES**

Para compilar la librería usaremos el comando `make`

**Implementación y diseño**

La función ft_printf recorre carácter por carácter la cadena de formato:

Si encuentra un %, delega la gestión del especificador a la función ft_printargs.

Si no, imprime directamente el carácter.
Para gestionar límites, se recurre a hacer type castings a long.

**RECURSOS**

Documentacion

Pagina del manual de `printf`: https://man7.org/linux/man-pages/man3/printf.3.html

Uso de la IA:

La IA me ha ayudado en la revision y estructura de este README.