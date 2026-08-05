	@ src/battle_main.c:355 battle_main_line_355
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E37AB
gText_Rom_2E37AB: @ 0x082E37AB
	.string "マグマだんリーダー$"
	.if (. - gText_Rom_2E37AB) != 0xa
	.error "gText_Rom_2E37AB must retain its original byte length"
	.endif
