[BITS 32]
pte equ 0x1000

extern load_elizabet
section .multiboot
ALIGN 4
multiboot:
    MBOOT_PAGE_ALIGN        equ 1<<0
    MBOOT_MEMORY_INFO       equ 1<<1
    MBOOT_HEADER_MAGIC      equ 0x1BADB002
    MBOOT_HEADER_FLAGS      equ MBOOT_PAGE_ALIGN | MBOOT_MEMORY_INFO
    MBOOT_CHECKSUM          equ -(MBOOT_HEADER_MAGIC + MBOOT_HEADER_FLAGS)

    ; This is the GRUB Multiboot header. A boot signature
    dd MBOOT_HEADER_MAGIC
    dd MBOOT_HEADER_FLAGS
    dd MBOOT_CHECKSUM

section .text
global start
start:

    mov esp, stack_top

    pushfd
    pop eax
    mov ecx, eax

    xor eax, 1 << 21

    push eax
    popfd

    pushfd
    pop eax

    push ecx
    popfd

    xor eax, ecx
    js panic

    mov eax,80000001
    cpuid
    test edx, 1 << 29
    js panic


    mov edi, 0x1000    ; Set the destination index to 0x1000.
    mov cr3, edi       ; Set control register 3 to the destination index.
    xor eax, eax       ; Nullify the A-register.
    mov ecx, 4096      ; Set the C-register to 4096.
    rep stosd          ; Clear the memory.
    mov edi, cr3       ; Set the destination index to control register 3.



    mov DWORD [edi], 0x2003      ; Set the uint32_t at the destination index to 0x2003.
    add edi, 0x1000              ; Add 0x1000 to the destination index.
    mov DWORD [edi], 0x3003      ; Set the uint32_t at the destination index to 0x3003.
    add edi, 0x1000              ; Add 0x1000 to the destination index.
    mov DWORD [edi], 0x4003      ; Set the uint32_t at the destination index to 0x4003.
    add edi, 0x1000

    mov ebx, 0x00000003          ; Set the B-register to 0x00000003.
    mov ecx, 512                 ; Set the C-register to 512.

.SetEntry:
    mov dword [edi], ebx         ; Set the uint32_t at the destination index to the B-register.
    add ebx, 0x1000              ; Add 0x1000 to the B-register.
    add edi, 8                   ; Add eight to the destination index.
    loop .SetEntry


    mov eax, cr4
    or eax, 1 << 5
    mov cr4, eax

    mov ecx, 0xC0000080          ; Set the C-register to 0xC0000080, which is the EFER MSR.
    rdmsr                        ; Read from the model-specific register.
    or eax, 1 << 8               ; Set the LM-bit which is the 9th bit (bit 8).
    wrmsr


    mov eax, cr0                 ; Set the A-register to control register 0.
    or eax, 1 << 31              ; Set the PG-bit, which is the 32nd bit (bit 31).
    mov cr0, eax

    lgdt [gdt.pointer]
    jmp gdt.code_segment:long_mode

    hlt


[bits 64]

long_mode:
jmp load_elizabet

panic:
    hlt



section .bss

stack_bottom:
    resb 4096 * 4
stack_top:


section .rodata
gdt:
    dq 0
    .code_segment: equ $ - gdt
        dq( 1<<43 ) | (1 << 44) | (1<<47) | (1 << 53)
    .pointer:
        dw $ - gdt - 1
        dq gdt




