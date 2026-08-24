	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gPokemonStorageMenuText_City
gPokemonStorageMenuText_City: @ 0x085CB3FD
	.string "シティ{EOS}"
	.if (. - gPokemonStorageMenuText_City) > 0x4
	.error "gPokemonStorageMenuText_City may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_City) < 0x4
	.space 0x4 - (. - gPokemonStorageMenuText_City)
	.endif

	@ src/pokemon_storage_system.c:8103 pokemon_storage_system_line_8103
	.globl gPokemonStorageMenuText_Desert
gPokemonStorageMenuText_Desert: @ 0x085CB401
	.string "さばく{EOS}"
	.if (. - gPokemonStorageMenuText_Desert) > 0x4
	.error "gPokemonStorageMenuText_Desert may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Desert) < 0x4
	.space 0x4 - (. - gPokemonStorageMenuText_Desert)
	.endif

	@ src/pokemon_storage_system.c:8104 pokemon_storage_system_line_8104
	.globl gPokemonStorageMenuText_Savanna
gPokemonStorageMenuText_Savanna: @ 0x085CB405
	.string "サバンナ{EOS}"
	.if (. - gPokemonStorageMenuText_Savanna) > 0x5
	.error "gPokemonStorageMenuText_Savanna may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Savanna) < 0x5
	.space 0x5 - (. - gPokemonStorageMenuText_Savanna)
	.endif

	@ src/pokemon_storage_system.c:8105 pokemon_storage_system_line_8105
	.globl gPokemonStorageMenuText_Crag
gPokemonStorageMenuText_Crag: @ 0x085CB40A
	.string "いわやま{EOS}"
	.if (. - gPokemonStorageMenuText_Crag) > 0x5
	.error "gPokemonStorageMenuText_Crag may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Crag) < 0x5
	.space 0x5 - (. - gPokemonStorageMenuText_Crag)
	.endif

	@ src/pokemon_storage_system.c:8106 pokemon_storage_system_line_8106
	.globl gPokemonStorageMenuText_Volcano
gPokemonStorageMenuText_Volcano: @ 0x085CB40F
	.string "かざん{EOS}"
	.if (. - gPokemonStorageMenuText_Volcano) > 0x4
	.error "gPokemonStorageMenuText_Volcano may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Volcano) < 0x4
	.space 0x4 - (. - gPokemonStorageMenuText_Volcano)
	.endif

	@ src/pokemon_storage_system.c:8107 pokemon_storage_system_line_8107
	.globl gPokemonStorageMenuText_Snow
gPokemonStorageMenuText_Snow: @ 0x085CB413
	.string "ゆきやま{EOS}"
	.if (. - gPokemonStorageMenuText_Snow) > 0x5
	.error "gPokemonStorageMenuText_Snow may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Snow) < 0x5
	.space 0x5 - (. - gPokemonStorageMenuText_Snow)
	.endif

	@ src/pokemon_storage_system.c:8108 pokemon_storage_system_line_8108
	.globl gPokemonStorageMenuText_Cave
gPokemonStorageMenuText_Cave: @ 0x085CB418
	.string "どうくつ{EOS}"
	.if (. - gPokemonStorageMenuText_Cave) > 0x5
	.error "gPokemonStorageMenuText_Cave may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Cave) < 0x5
	.space 0x5 - (. - gPokemonStorageMenuText_Cave)
	.endif

	@ src/pokemon_storage_system.c:8109 pokemon_storage_system_line_8109
	.globl gPokemonStorageMenuText_Beach
gPokemonStorageMenuText_Beach: @ 0x085CB41D
	.string "うみべ{EOS}"
	.if (. - gPokemonStorageMenuText_Beach) > 0x4
	.error "gPokemonStorageMenuText_Beach may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Beach) < 0x4
	.space 0x4 - (. - gPokemonStorageMenuText_Beach)
	.endif

	@ src/pokemon_storage_system.c:8110 pokemon_storage_system_line_8110 (+1 aliases)
	.globl gPokemonStorageMenuText_Seafloor
gPokemonStorageMenuText_Seafloor: @ 0x085CB421
	.string "かいてい{EOS}"
	.if (. - gPokemonStorageMenuText_Seafloor) > 0x5
	.error "gPokemonStorageMenuText_Seafloor may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Seafloor) < 0x5
	.space 0x5 - (. - gPokemonStorageMenuText_Seafloor)
	.endif

	@ src/pokemon_storage_system.c:8111 pokemon_storage_system_line_8111
	.globl gText_Rom_5CB426
gText_Rom_5CB426: @ 0x085CB426
	.string "かわ{EOS}"
	.if (. - gText_Rom_5CB426) > 0x3
	.error "gText_Rom_5CB426 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB426) < 0x3
	.space 0x3 - (. - gText_Rom_5CB426)
	.endif
	@ Decoded text from ROM range: offset=0x5CB429, size=0x3
	.string "そら{EOS}"

	@ src/pokemon_storage_system.c:8113 pokemon_storage_system_line_8113
	.globl gPokemonStorageMenuText_Polkadot
gPokemonStorageMenuText_Polkadot: @ 0x085CB42C
	.string "みずたま{EOS}"
	.if (. - gPokemonStorageMenuText_Polkadot) > 0x5
	.error "gPokemonStorageMenuText_Polkadot may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Polkadot) < 0x5
	.space 0x5 - (. - gPokemonStorageMenuText_Polkadot)
	.endif

	@ src/pokemon_storage_system.c:8114 pokemon_storage_system_line_8114
	.globl gPokemonStorageMenuText_Pokecenter
gPokemonStorageMenuText_Pokecenter: @ 0x085CB431
	.string "ポケセン{EOS}"
	.if (. - gPokemonStorageMenuText_Pokecenter) > 0x5
	.error "gPokemonStorageMenuText_Pokecenter may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Pokecenter) < 0x5
	.space 0x5 - (. - gPokemonStorageMenuText_Pokecenter)
	.endif

	@ src/pokemon_storage_system.c:8115 pokemon_storage_system_line_8115
	.globl gPokemonStorageMenuText_Machine
gPokemonStorageMenuText_Machine: @ 0x085CB436
	.string "きかい{EOS}"
	.if (. - gPokemonStorageMenuText_Machine) > 0x4
	.error "gPokemonStorageMenuText_Machine may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Machine) < 0x4
	.space 0x4 - (. - gPokemonStorageMenuText_Machine)
	.endif

	@ src/pokemon_storage_system.c:8116 pokemon_storage_system_line_8116
	.globl gPokemonStorageMenuText_Simple
gPokemonStorageMenuText_Simple: @ 0x085CB43A
	.string "シンプル{EOS}"
	.if (. - gPokemonStorageMenuText_Simple) > 0x5
	.error "gPokemonStorageMenuText_Simple may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Simple) < 0x5
	.space 0x5 - (. - gPokemonStorageMenuText_Simple)
	.endif

	@ src/pokemon_storage_system.c:8117 pokemon_storage_system_line_8117 (+1 aliases)
	.globl gText_Rom_5CB43F
gText_Rom_5CB43F: @ 0x085CB43F
	.string "なにを しますか?{EOS}"
	.if (. - gText_Rom_5CB43F) > 0xa
	.error "gText_Rom_5CB43F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB43F) < 0xa
	.space 0xa - (. - gText_Rom_5CB43F)
	.endif

	@ src/pokemon_storage_system.c:870 pokemon_storage_system_line_870
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_5CB449: @ 0x085CB449
	.string "ポケモンを つれていく{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CB449) != 0xc
	.error ".Lbatch81_text_start_gText_Rom_5CB449 must retain its original byte length"
	.endif
	@ Decoded text from ROM range: offset=0x5CB455, size=0x18
	.string "ポケモンを　あずける　{EOS}"
	.string "ボックスを　せいりする{EOS}"
