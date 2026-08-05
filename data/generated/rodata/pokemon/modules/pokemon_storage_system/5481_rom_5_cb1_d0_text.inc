	@ src/pokemon_storage_system.c:1052 pokemon_storage_system_line_1052
	.globl gText_Rom_5CB1D0
gText_Rom_5CB1D0: @ 0x085CB1D0
	.string "このボックスを どうしますか?$"
	.if (. - gText_Rom_5CB1D0) > 0x10
	.error "gText_Rom_5CB1D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1D0) < 0x10
	.space 0x10 - (. - gText_Rom_5CB1D0)
	.endif
