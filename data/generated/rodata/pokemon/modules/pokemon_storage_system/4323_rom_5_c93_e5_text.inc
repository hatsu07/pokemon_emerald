	@ src/pokemon_storage_system.c:8079 pokemon_storage_system_line_8079
	.globl gText_Rom_5C93E5
gText_Rom_5C93E5: @ 0x085C93E5
	.string "あずける{EOS}"
	.if (. - gText_Rom_5C93E5) > 0x5
	.error "gText_Rom_5C93E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93E5) < 0x5
	.space 0x5 - (. - gText_Rom_5C93E5)
	.endif
	@ Decoded text from ROM range: offset=0x5C93EA, size=0x3
	.string "みる{EOS}"
