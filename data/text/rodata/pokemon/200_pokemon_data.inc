	@ src/pokemon_storage_system.c:8081 pokemon_storage_system_line_8081
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9AA1
gText_Rom_5C9AA1: @ 0x085C9AA1
	.string "いれかえる$"
	.if (. - gText_Rom_5C9AA1) != 0x6
	.error "gText_Rom_5C9AA1 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9AA3
	.set gText_Rom_5C9AA3, gText_Rom_5C9AA1 + 0x2
	@ Replaced baserom.gba range: offset=0x5C9AA7, size=0x8
	.byte 0x0E, 0x2E, 0x14, 0x03, 0x16, 0x41, 0x0D, 0xFF

