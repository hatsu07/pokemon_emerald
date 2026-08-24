	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Info2
gText_Info2: @ 0x085CB3D8
	.string "せつめい{EOS}"
	.if (. - gText_Info2) > 0x5
	.error "gText_Info2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Info2) < 0x5
	.space 0x5 - (. - gText_Info2)
	.endif

	@ src/pokemon_storage_system.c:8096 pokemon_storage_system_line_8096
	.globl gPokemonStorageMenuText_Scenery1
gPokemonStorageMenuText_Scenery1: @ 0x085CB3DD
	.string "ふうけい1{EOS}"
	.if (. - gPokemonStorageMenuText_Scenery1) > 0x6
	.error "gPokemonStorageMenuText_Scenery1 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Scenery1) < 0x6
	.space 0x6 - (. - gPokemonStorageMenuText_Scenery1)
	.endif

	@ src/pokemon_storage_system.c:8097 pokemon_storage_system_line_8097
	.globl gPokemonStorageMenuText_Scenery2
gPokemonStorageMenuText_Scenery2: @ 0x085CB3E3
	.string "ふうけい2{EOS}"
	.if (. - gPokemonStorageMenuText_Scenery2) > 0x6
	.error "gPokemonStorageMenuText_Scenery2 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Scenery2) < 0x6
	.space 0x6 - (. - gPokemonStorageMenuText_Scenery2)
	.endif

	@ src/pokemon_storage_system.c:8098 pokemon_storage_system_line_8098
	.globl gPokemonStorageMenuText_Scenery3
gPokemonStorageMenuText_Scenery3: @ 0x085CB3E9
	.string "ふうけい3{EOS}"
	.if (. - gPokemonStorageMenuText_Scenery3) > 0x6
	.error "gPokemonStorageMenuText_Scenery3 may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Scenery3) < 0x6
	.space 0x6 - (. - gPokemonStorageMenuText_Scenery3)
	.endif

	@ src/pokemon_storage_system.c:8099 pokemon_storage_system_line_8099
	.globl gPokemonStorageMenuText_Etcetera
gPokemonStorageMenuText_Etcetera: @ 0x085CB3EF
	.string "エトセトラ{EOS}"
	.if (. - gPokemonStorageMenuText_Etcetera) > 0x6
	.error "gPokemonStorageMenuText_Etcetera may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Etcetera) < 0x6
	.space 0x6 - (. - gPokemonStorageMenuText_Etcetera)
	.endif
