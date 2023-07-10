# DtoStrf Library

The DtoStrf library provides an emulation of the `dtostrf` function from avr-libc for Arduino boards. This function allows you to convert floating-point values to string representations with specified width and precision.

## Installation

1. Download the library ZIP file from the [GitHub repository](https://github.com/alessandroBrugnera9/dtostrf-library).
2. In the Arduino IDE, go to **Sketch > Include Library > Add .ZIP Library** and select the downloaded ZIP file.
3. The library will be imported and ready for use.

## Usage

1. Include the library header in your Arduino sketch:

```cpp
#include <dtoStrf.h>

float value = 3.14159;
char buffer[10];
dtostrf(value, 5, 2, buffer);
```

## Compatibility

The DtoStrf Library is compatible with Arduino boards and has been tested on the following architectures:

- AVR
- SAM
- ESP8266
- ESP32

## Contributing

Contributions to the DtoStrf Library are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request on the [GitHub repository](https://github.com/alessandroBrugnera9/dtostrf-library).

## License

This library is released under the [GNU Lesser General Public License](LICENSE.txt). See the [LICENSE.txt](LICENSE.txt) file for more information.

## Acknowledgements

The DtoStrf Library is based on the original implementation by Arduino.

## Contact

For any inquiries or questions, please contact [me](mailto:alessandrobrugnera.s@gmail.com).
