	@ src/pokemon_storage_system.c:1067 pokemon_storage_system_line_1067
	.globl gText_Rom_5CB2A9
gText_Rom_5CB2A9: @ 0x085CB2A9
	.string "つれていく ポケモンを えらんで!$"
	.if (. - gText_Rom_5CB2A9) > 0x12
	.error "gText_Rom_5CB2A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2A9) < 0x12
	.space 0x12 - (. - gText_Rom_5CB2A9)
	.endif
