# ft_printf - Implementación Personalizada de printf en C

**ft_printf** es una implementación personalizada de la función estándar `printf` en **C**, diseñada como proyecto para la escuela **42**. Este proyecto consiste en recrear parte de la funcionalidad de `printf`, permitiendo la impresión de texto formateado en la salida estándar.

## Funcionalidades Implementadas

La función `ft_printf` admite los siguientes especificadores de formato:

- **%c**: Imprime un único carácter.
- **%s**: Imprime una cadena de caracteres (string).
- **%p**: Imprime una dirección de memoria en formato hexadecimal (puntero).
- **%d** o **%i**: Imprime un número entero con signo en base 10.
- **%u**: Imprime un número entero sin signo en base 10.
- **%x**: Imprime un número en formato hexadecimal (minúsculas).
- **%X**: Imprime un número en formato hexadecimal (mayúsculas).
- **%%**: Imprime el símbolo `%`.