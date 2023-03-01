x86_64_asm_src := $(shell find src -name *.asm)
x86_64_asm_obj := $(patsubst src/%.asm, build/asm/%.o, $(x86_64_asm_src))

x86_64_c_src := $(shell find src -name *.c)
x86_64_c_obj := $(patsubst src/%.c, build/c/%.o, $(x86_64_c_src))


objects := $(x86_64_asm_obj) $(x86_64_c_obj)


$(x86_64_c_obj): build/c/%.o : src/%.c
	mkdir -p $(dir $@) && \
	x86_64-elf-gcc -c -I include -I include/std_lib $(include_obj) -ffreestanding -fstack-protector-all $(patsubst build/c/%.o, src/%.c, $@) -o $@

$(x86_64_asm_obj): build/asm/%.o : src/%.asm
	mkdir -p $(dir $@) && \
	nasm -f elf64 $(patsubst build/asm/%.o, src/%.asm, $@) -o $@


liz.bin: linker.ld $(objects)
	ld -T $< -o $@ $(objects)
	rm -rf build

.PHONY: sobeck
sobeck: liz.bin
	mkdir iso
	mkdir iso/boot
	mkdir iso/boot/grub
	cp liz.bin iso/boot/liz.bin
	echo 'set timeout=0'                     >> iso/boot/grub/grub.cfg
	echo 'set default=0'                     >> iso/boot/grub/grub.cfg
	echo ''                                  >> iso/boot/grub/grub.cfg
	echo 'menuentry "elizaet solbeck" {' >> iso/boot/grub/grub.cfg
	echo '  multiboot /boot/liz.bin'    >> iso/boot/grub/grub.cfg
	echo '  boot'                            >> iso/boot/grub/grub.cfg
	echo '}'                                 >> iso/boot/grub/grub.cfg
	grub-mkrescue --output=elizabet_sobeck.iso iso
	rm -rf iso


