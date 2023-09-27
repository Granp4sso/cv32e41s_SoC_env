OUTPUT_ARCH("riscv")

/* Entry Point */
ENTRY(reset_handler)

/* Memories definition */
MEMORY
{
  TCM	(xrw)	: ORIGIN = 0x70000000,	LENGTH = 4K
}

/* Sections */
SECTIONS
{ 

  .isr_vector :
  {
    KEEP(*(.isr_vector))  
    . = ALIGN(32);
  } >TCM

  .text :
  { 
	  *(.init)
    *(.text)
	  *(.text.*)
	  *(.fini)
	  *(.rodata)
	  *(.rodata.*)
	  . = ALIGN(32);
	  _etext = .;
  }> TCM
  
  .data :
  {
    *(.data)
    *(.data.*)
    . = ALIGN(32);
  }> TCM
  
  .bss :
  {
	  *(.bss)
	  *(.bss.*)
	  *(COMMON)
	  . = ALIGN(32);
	  end = .;
	  __end__ = .;
  }> TCM 

  PROVIDE( _vectors_start = ADDR(.isr_vector));  
  PROVIDE( _start_of_tcm = ORIGIN(TCM) );
  PROVIDE( _stack_start = ORIGIN(TCM) + LENGTH(TCM) );
  PROVIDE( _estack = ORIGIN(TCM) + LENGTH(TCM) );    /* TO CHECK*/
  PROVIDE( _bss_start = ADDR(.bss) );
  PROVIDE( _bss_end = ADDR(.bss) + SIZEOF(.bss) );
  PROVIDE( _data_start = ADDR(.data) );
  PROVIDE( _data_end = ADDR(.data) + SIZEOF(.data) );
}