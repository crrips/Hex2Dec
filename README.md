# Hexadecimal Converter

This program allows users to convert between hexadecimal and little/big endian representations. It provides four conversion options:
1. HEX to Little Endian
2. HEX to Big Endian
3. Little Endian to HEX
4. Big Endian to HEX

## Usage

1. Compile the code using a C++ compiler.
2. Run the compiled executable.
3. Choose the desired conversion option by entering the corresponding number.
4. Follow the prompts and enter the necessary input.

## Conversion Options

### 1. HEX to Little Endian
This option allows users to convert a given hexadecimal input to its little endian representation.

### 2. HEX to Big Endian
Converts a given hexadecimal input to its big endian representation.

### 3. Little Endian to HEX
Converts a little endian input to its hexadecimal representation.

### 4. Big Endian to HEX
Converts a big endian input to its hexadecimal representation.

## Implementation Details

The code consists of several functions to handle different conversion options:

- `Menu()`: Displays the conversion menu and takes user input.
- `hex2little()`: Converts a hexadecimal input to little endian.
- `hex2big()`: Converts a hexadecimal input to big endian.
- `little2hex()`: Converts little endian to hexadecimal.
- `big2hex()`: Converts big endian to hexadecimal.

In the `main` function, the user is prompted to choose a conversion option. Based on the choice, the corresponding conversion function is called.

## Limitations

The program may not work correctly with large numbers due to limitations with handling big numbers in the current implementation.
