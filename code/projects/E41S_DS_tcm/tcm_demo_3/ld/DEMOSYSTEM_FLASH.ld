_start_of_ddr = ORIGIN(DDR);
_vectors_start = 0x00100000;
_bss_start = 0x00100000;
_bss_end = 0x00100000;
_stack_start =  ORIGIN(DDR) + LENGTH(DDR);


/* Entry Point */
ENTRY(reset_handler)

/* Highest address of the user mode stack */
_estack = ORIGIN(DDR) + LENGTH(DDR);	/* end of "RAM" Ram type memory */

/* Memories definition */
MEMORY
{
  DDR	(xrw)	: ORIGIN = 0x00100000,	LENGTH = 64K
  TCM	(xrw)	: ORIGIN = 0x00104000,	LENGTH = 4K /* This is the RAM region on which tcm functions are inserted */
}

/* Sections */
SECTIONS
{
  .tcm_fn :
  {
    . = ALIGN(32);
    KEEP(*(.tcm_fn)) /* Startup code */
    . = ALIGN(32);
  } >TCM

  /* The startup code into "ROM" Rom type memory */
  .isr_vector :
  {
    . = ALIGN(32);
    KEEP(*(.isr_vector)) /* Startup code */
    . = ALIGN(32);
  } >DDR

}