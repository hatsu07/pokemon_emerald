	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_5CB6CD
gText_Rom_5CB6CD: @ 0x085CB6CD
	.string "やめる{EOS}"
	.if (. - gText_Rom_5CB6CD) > 0x4
	.error "gText_Rom_5CB6CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6CD) < 0x4
	.space 0x4 - (. - gText_Rom_5CB6CD)
	.endif
	@ src/pokenav_match_call_list.c:39 gText_CallCantBeMadeHere
	.globl gText_CallCantBeMadeHere
gText_CallCantBeMadeHere: @ 0x085CB6D1
	.string "ここでは あいてを よびだす ことが\nできないようだ{EOS}"
	.if (. - gText_CallCantBeMadeHere) > 0x1b
	.error "gText_CallCantBeMadeHere may not grow beyond its original slot"
	.endif
	.if (. - gText_CallCantBeMadeHere) < 0x1b
	.space 0x1b - (. - gText_CallCantBeMadeHere)
	.endif

