@ Pokémon Storage System JP cancel text.

	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_2FC0FA
gText_Rom_2FC0FA: @ 0x082FC0FA
	.string "やめる{EOS}"
	.if (. - gText_Rom_2FC0FA) > 0x4
	.error "gText_Rom_2FC0FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC0FA) < 0x4
	.space 0x4 - (. - gText_Rom_2FC0FA)
	.endif
