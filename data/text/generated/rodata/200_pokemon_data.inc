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
	.incbin "baserom.gba", 0x5c9aa7, 0x8

