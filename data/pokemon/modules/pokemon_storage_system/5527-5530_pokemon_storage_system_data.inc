	@ src/pokemon_storage_system.c:8093 pokemon_storage_system_line_8093
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPokemonStorageMenuText_Switch
gPokemonStorageMenuText_Switch: @ 0x085CB3CD
	.string "とりかえる{EOS}"
	.if (. - gPokemonStorageMenuText_Switch) != 0x6
	.error "gPokemonStorageMenuText_Switch must retain its original byte length"
	.endif

	@ src/pokemon_storage_system.c:8094 pokemon_storage_system_line_8094
	.globl gPokemonStorageMenuText_Bag
gPokemonStorageMenuText_Bag: @ 0x085CB3D3
	.string "バッグへ{EOS}"
	.if (. - gPokemonStorageMenuText_Bag) > 0x5
	.error "gPokemonStorageMenuText_Bag may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Bag) < 0x5
	.space 0x5 - (. - gPokemonStorageMenuText_Bag)
	.endif

