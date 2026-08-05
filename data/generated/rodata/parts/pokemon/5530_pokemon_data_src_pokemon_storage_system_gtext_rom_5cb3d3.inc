	@ src/pokemon_storage_system.c:8094 pokemon_storage_system_line_8094
	.globl gText_Rom_5CB3D3
gText_Rom_5CB3D3: @ 0x085CB3D3
	.string "バッグへ$"
	.if (. - gText_Rom_5CB3D3) > 0x5
	.error "gText_Rom_5CB3D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3D3) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3D3)
	.endif

