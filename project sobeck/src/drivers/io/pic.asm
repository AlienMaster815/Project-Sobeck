[bits 64]  
global pic_shutdown_asm 
pic_shutdown_asm:
    mov al, 0xff
    out 0xa1, al
    out 0x21, al
    ret
