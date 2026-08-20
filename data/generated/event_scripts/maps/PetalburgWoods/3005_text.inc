	@ data/maps/PetalburgWoods/scripts.inc:390 PetalburgWoods_Text_ImOutOfPokeBalls
	.globl gText_Rom_214879
gText_Rom_214879: @ 0x08214879
	.string "たくさん ポケモン つかまえたら\nモンスターボール なくなっちゃったよ{EOS}"
	.if (. - gText_Rom_214879) > 0x24
	.error "gText_Rom_214879 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214879) < 0x24
	.space 0x24 - (. - gText_Rom_214879)
	.endif
