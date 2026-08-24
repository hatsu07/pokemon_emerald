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
	.globl gText_Rom_5CB3DD
gText_Rom_5CB3DD: @ 0x085CB3DD
	.string "ふうけい1{EOS}"
	.if (. - gText_Rom_5CB3DD) > 0x6
	.error "gText_Rom_5CB3DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3DD) < 0x6
	.space 0x6 - (. - gText_Rom_5CB3DD)
	.endif

	@ src/pokemon_storage_system.c:8097 pokemon_storage_system_line_8097
	.globl gText_Rom_5CB3E3
gText_Rom_5CB3E3: @ 0x085CB3E3
	.string "ふうけい2{EOS}"
	.if (. - gText_Rom_5CB3E3) > 0x6
	.error "gText_Rom_5CB3E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3E3) < 0x6
	.space 0x6 - (. - gText_Rom_5CB3E3)
	.endif

	@ src/pokemon_storage_system.c:8098 pokemon_storage_system_line_8098
	.globl gText_Rom_5CB3E9
gText_Rom_5CB3E9: @ 0x085CB3E9
	.string "ふうけい3{EOS}"
	.if (. - gText_Rom_5CB3E9) > 0x6
	.error "gText_Rom_5CB3E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3E9) < 0x6
	.space 0x6 - (. - gText_Rom_5CB3E9)
	.endif

	@ src/pokemon_storage_system.c:8099 pokemon_storage_system_line_8099
	.globl gText_Rom_5CB3EF
gText_Rom_5CB3EF: @ 0x085CB3EF
	.string "エトセトラ{EOS}"
	.if (. - gText_Rom_5CB3EF) > 0x6
	.error "gText_Rom_5CB3EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3EF) < 0x6
	.space 0x6 - (. - gText_Rom_5CB3EF)
	.endif
