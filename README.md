````md
# UnitConv

UnitConv is a lightweight, offline unit conversion utility written in C.

The long-term goal is simple:

> If humanity measured something with it, UnitConv should know it.

UnitConv aims to provide a large collection of conversions in one fast, simple program without requiring an internet connection.

## Status

**Beta**

UnitConv now has its first fully working conversion category: **temperature**.

Currently supported:

- Celsius → Fahrenheit
- Celsius → Kelvin
- Fahrenheit → Celsius
- Fahrenheit → Kelvin
- Kelvin → Celsius
- Kelvin → Fahrenheit
- Same-unit conversions

After completing a conversion, UnitConv returns to the main menu so more conversions can be performed without restarting the program.

## Planned Categories

UnitConv is still early in development. More conversion categories are planned, including:

- Weight / mass
- Length / distance
- Area
- Volume
- Speed
- Time
- Pressure
- Energy
- Power
- Data / storage
- And many more

The eventual goal is to support a huge range of everyday and specialized units.

## Building

UnitConv is written in C and can be compiled with GCC.

From the repository root:

```bash
gcc src/main.c src/ui.c src/tempconv.c -o build
````

Then run:

```bash
./build
```

Or from inside the `src` directory:

```bash
gcc main.c ui.c tempconv.c -o ../build
../build
```

## Usage

UnitConv currently uses a simple terminal menu.

Menu choices must be entered using their corresponding **number**.

Example:

```text
1. temp
2. weight
3. quit

please select a type (enter 1, 2, or 3):
```

The temperature converter asks for the source unit, value, and destination unit before displaying the result.

> **Note:** Input validation is still limited. Enter the numeric menu choices shown by the program.

## Project Structure

```text
src/
├── main.c
├── ui.c
├── ui.h
├── tempconv.c
└── tempconv.h
```

* `main.c` — program control flow and conversion routing
* `ui.c` / `ui.h` — terminal menus and user input
* `tempconv.c` / `tempconv.h` — temperature conversion functions

## Precompiled Binaries

Precompiled binaries may be provided in:

```text
compiled-binaries/
└── x86_64/
```

Building from source is recommended during active development.

## Philosophy

UnitConv is intended to be:

* Lightweight
* Offline
* Fast
* Simple
* Open source
* Useful for both everyday and eventually specialized conversions

No account. No website required. No sending a temperature measurement halfway across the planet just to discover that 100°C is 212°F.

## License

UnitConv is licensed under the **GNU General Public License v3.0 (GPLv3)**.

See the `LICENSE` file for the full license text.





