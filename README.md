# UnitConv

UnitConv is a lightweight, offline unit converter written in C.

The goal is simple:

> **If humanity measured something with it, UnitConv should know it.**

UnitConv is designed to stay fast, simple, lightweight, and completely usable without an internet connection.

## Status

**Version: v1.0**

UnitConv has officially lefnderstand

The program does not require an account, cloud service, internet connection, or external conversion API.

The computer does the conversion locally.

## License

UnitConv is free and open-source software licensed under the GNU General Public License v3.0.
t beta.

The first stable release includes two fully working conversion categories:

* Temperature
* Weight / Mass

More conversion categories are planned for future releases.

## Supported Conversions

### Temperature

UnitConv currently supports:

* Celsius → Fahrenheit
* Celsius → Kelvin
* Fahrenheit → Celsius
* Fahrenheit → Kelvin
* Kelvin → Celsius
* Kelvin → Fahrenheit
* Same-unit conversions

### Weight / Mass

UnitConv currently supports:

* Grams → Kilograms
* Grams → Pounds
* Kilograms → Grams
* Kilograms → Pounds
* Pounds → Grams
* Pounds → Kilograms
* Same-unit conversions

## Planned Categories

Future versions of UnitConv may include:

* Length / Distance
* Area
* Volume
* Speed
* Time
* Pressure
* Energy
* Power
* Data / Storage
* Angle
* Fuel economy
* And many more

The long-term goal is to support a ridiculous number of useful units while keeping the program lightweight.

## Building

UnitConv is written in C and can be compiled using GCC.

From the repository root:

```bash
gcc src/main.c src/ui.c src/tempconv.c src/weigh.c -o build
```

Then run:

```bash
./build
```

## Precompiled Binaries

Precompiled binaries are available in the `compiled-binaries` directory for supported architectures.

For example:

```text
compiled-binaries/
└── x86_64/
```

These are provided for users who want to run UnitConv without compiling it themselves.

## Usage

Run UnitConv and select a conversion category from the menu.

The interface uses numbered options.

Example:

```text
1. temp
2. weight
3. quit
```

Enter the number corresponding to the option you want.

When selecting units, enter the displayed numeric option rather than the unit name itself.

## Project Structure

```text
UnitConv/
├── src/
│   ├── main.c
│   ├── ui.c
│   ├── ui.h
│   ├── tempconv.c
│   ├── tempconv.h
│   ├── weigh.c
│   └── weigh.h
├── compiled-binaries/
│   └── x86_64/
├── LICENSE
└── README.md
```

### Source Modules

* `main.c` — program control flow and conversion routing
* `ui.c` / `ui.h` — terminal interface and user input
* `tempconv.c` / `tempconv.h` — temperature conversion engine
* `weigh.c` / `weigh.h` — weight/mass conversion engine

## Design Philosophy

UnitConv aims to be:

* Lightweight
* Fast
* Offline
* Simple
* Modular
* Open source
* Easy to compile
* Easy to understand

The program does not require an account, cloud service, internet connection, or external conversion API.

The computer does the conversion locally.

## License

UnitConv is free and open-source software licensed under the GNU General Public License v3.0.

See `LICENSE` for the full license text.

## Version

**UnitConv v1.0**

First stable release.
