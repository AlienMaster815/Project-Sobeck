ENTRY(start)
OUTPUT_FORMAT("elf64-x86-64", "elf64-x86-64",
	      "elf64-x86-64")
OUTPUT_ARCH(i386:x86-64)
SECTIONS
{
    . = 0x00100000;
  .text ALIGN(0x1000) :
  {
    *(.multiboot)
    *(.text*)
    *(.rodata)
  }
  .bss :
  {
    *(.bss)
  }

}
