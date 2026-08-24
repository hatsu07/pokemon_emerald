	@ src/pokemon_storage_system.c:8093 pokemon_storage_system_line_8093
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB3CD
gText_Rom_5CB3CD: @ 0x085CB3CD
	.string "とりかえる{EOS}"
	.if (. - gText_Rom_5CB3CD) != 0x6
	.error "gText_Rom_5CB3CD must retain its original byte length"
	.endif

	@ src/pokemon_storage_system.c:8094 pokemon_storage_system_line_8094
	.globl gText_Rom_5CB3D3
gText_Rom_5CB3D3: @ 0x085CB3D3
	.string "バッグへ{EOS}"
	.if (. - gText_Rom_5CB3D3) > 0x5
	.error "gText_Rom_5CB3D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3D3) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3D3)
	.endif

