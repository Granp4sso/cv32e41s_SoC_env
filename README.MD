# CV32E41S SoC Environment                                           

**This repository is meant to provide a way to simulate or deploy an environment to run the cv32e41s processor**

> **Engineers:** 
> > Stefano Mercogliano ([stefano.mercogliano@unina.it](mailto:stefano.mercogliano@unina.it))
> 
> > Daniele Ottaviano ([daniele.ottaviano@unina.it](mailto:daniele.ottaviano@unina.it)) 
>
> **University:** University of Naples, Federico II
>
>  <img src="https://upload.wikimedia.org/wikipedia/commons/a/a1/Napoli_university_logo.svg" alt="University Logo" width="50"/>

> [!WARNING]
> This repository is intended to work with the cv32e41s project https://github.com/Granp4sso/cv32e41s.
>
> Also, XPMP tests are freely available at https://github.com/DanieleOttaviano/XPMP_experiments.


This project repository is meant to allow you to easly modify CV32E41S core, emulate or run test applications on it.
CV32E41S is compatible with Verilator and doest not assume you to have any license with other simulators.
In order to do so, install Verilator and compile the risc-v toolchain: https://github.com/riscv-collab/riscv-gnu-toolchain.

If you want to clone the directory, just use
```
git clone --recursive https://github.com/Granp4sso/cv32e41s_SoC_env.git
```
Then, in order to sync submodules, run
```
make git
```
If you want to modify the RTL, add new sv files, or modify the simulator, just use
```
make
```
The RTL folder is organized as follows:

```
-rtl
    -bhv
    -cv32e41s_core          # Contains the CV32E41S RTL source files; you can find them in the git repo as well
    -demo_system            # Contains the CV32E41S_DEMO_SYSTEM source files; for this project it contains a "memless" version which is used by Verilator.
    -dm                     # Contains the Debug Module source files
    -primitives             
    -obj_dir                # It will be created by Verilator when using make
```

## Using the Simulator

The tb_verilator folder contains the C++ testbench written in verilator meant to simulate the whole SoC. DRAM is implemented directly
in C++ so that a minimal MemoryView can be displayed. Once compiled with make, the file uCup_top_run is generated. 
You can run the simulator at a fixed frequency of 100Mhz with the following arguments:

```
List of line arguments
    mem_show                # Enable the MemView                                                        (default is 0)
    mem_size 0d...          # Specifies the DRAM size for the SoC simulation                            (default is 64KiB)
    mem_data_baddr 0x...    # Specifies DRAM data port base address (probably the same as inst port)    (default is 0x00100000)
    mem_inst_baddr 0x...    # Specifies DRAM inst port base address                                     (default is 0x00100000)
    bin_path "path/to/bin"  # Specifies the path to the compiled binary to run                          (default is /code/bin/out.bin)
    terminal_show           # Show the SerialView via UART                                              (default is unset)
    lcd_show                # Show the LCDView via SPI (not supported atm)
    sim_cycles 0d...        # Specify the number of clock cycles for the entire simulation              (default is 200000)
    halt_addr 0x...         # Set a breakpoint and allow for MemView to show                            (default is unset)
    log                     # Enable the file logger                                                    (default is unset)
    trace                   # Enable VCD trace                                                          (default is unset)
```

Enabling the MemView allows for memory inspection when the simulation ends or when a halt address is found. MemView only supports two arguments
```
-q (quit)
-p (probe)              # e.g. p 0x00100000 2000 shows 2000 bytes of memory starting from 0x00100000
```
Blue means fetched/executed, yellow means written, read means read.
When log is enabled, all memory transactions are logged into the logfile in the root directory.
When terminal_show is enabled the SoC Uart is connected to the std output and prints on screen.
Traces generated with the trace argument are stored into the waves folder. You can use make wave to run gtkwave with a conf.gtkw configuration
file and display the execution traces.
Tracing and Logging can be quite time consuming, so for software testing we recommend to disable them.
    
The entire system is meant to quickly test hardware changes on the SoC with some basic software validation. Because Verilator is cycle accurate, running complex software with an estabilshed and verified
hardware should be done on a different emulator or directly on FPGA/board.

## Software usage

The code repository contains the bin folder which is used as a default folder by the simulator to load binaries.
The template folder contains a generic project structure you can use to build your binaries, assuming you have the gcc toolchain for rv32/rv64.
```
template
    -bin                    # Contains the binary and the elf
    -inc                    # Contains user defined header files
    -ld                     # Contains a basic linker script
    -lib                    # Contains Demo System definitions and low level functions (such as peripheral drivers)
    -obj_dir                # Contains intermediate obj files
    -src                    # Contains user defined c files
```

## Programming the FPGA-SoC    

It is possible to program cv32e41s soc by using the script flasher.sh. The bootloader hardcoded into the
FPGA design will load a binary through serial port and then run in it.
In order to do so, some steps are required:
```
1 - Give permissions over /dev/ttyUSBx where the serial port is connected (usually 1)
2 - Setup a terminal (e.g. minicom) to conntect with the previous ttyUSB and with no parity, 1 stop bit, 8 bits, no hardware control flow
3 - Edit the flasher.sh; "file" specifies the binary to load, "dev" specifies the ttyUSBx device and "entry" is the SoC software entry point (default is 00100080)
4 - press prog button and then CPU reset on board and then run the flasher.sh script. All leds will blink in order and then shut down once the programming is done
```
Remember that using the serial as a programming medium comes with limitations. For simulation the serial baudrate is set to the fictional value 10000000.
Even using the masimum standard value (921600), would be too high for the nexys. So change the UART parameter clock and baudrate accordingly.
    
## Known Bugs:
```
-- PMP-trie still has some minor bugs
```
