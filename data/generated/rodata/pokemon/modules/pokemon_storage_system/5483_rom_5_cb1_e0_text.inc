	@ src/pokemon_storage_system.c:1053 pokemon_storage_system_line_1053
	.globl gText_Rom_5CB1E0
gText_Rom_5CB1E0: @ 0x085CB1E0
	.string "どの テーマにしますか?$"
	.if (. - gText_Rom_5CB1E0) > 0xd
	.error "gText_Rom_5CB1E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1E0) < 0xd
	.space 0xd - (. - gText_Rom_5CB1E0)
	.endif
