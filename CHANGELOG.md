# Change Log AD9833

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/)
and this project adheres to [Semantic Versioning](http://semver.org/).


## [0.3.0] - 2023-11-26
- fix #10, explicit write control register fixes glitch.
- rename **writeFreqRegister()** to **writeFrequencyRegister()**
- refactor **writeFrequencyRegister()**
- rename  parameters reg => channel
- catch define conflict __SPI_CLASS__
- update readme.md
- add experimental support for HLB write mode
  - **void writeFrequencyRegisterLSB(uint8_t reg, uint16_t LSB)**
  - **void writeFrequencyRegisterMSB(uint8_t reg, uint16_t MSB)**
- update keywords.txt

----

## [0.2.0] - 2023-11-26
- refactor constructor/begin interface - breaking changes.
  - minimize conditional code. -- create SPI_CLASS macro to solve it.
- reordered parameters software SPI constructor.
- update readme.md
- update examples

----

## [0.1.2] - 2023-10-16
- release for #5 set DIV2 flag
- add examples switching phase and frequency channel
- add example for multi device
- minor edits

## [0.1.1] - 2023-08-25
- fix #2 - external FSYNC control
- add **setPowerMode(uint8_t mode = 0)**  //  mode = 0..3
- add **void hardwareReset()**
- redefined **reset()** - see readme.md
- first tests with hardware.
- improved performance **setFrequency()**
- fixed software SPI
- made low level register access public for "expert users"
  - **void writeControlRegister(uint16_t value)**
  - **void writeFreqRegister(uint8_t reg, uint32_t freq)**
  - **void writePhaseRegister(uint8_t reg, uint16_t value)**
- update readme.md
- minor edits

## [0.1.0] - 2023-08-25
- initial version

