	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:581 LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou
	.globl gText_Rom_208CE8
gText_Rom_208CE8: @ 0x08208CE8
	.string "あ！\n{PLAYER}！！\pがんばってね\nおうえん してるから！{EOS}"
	.if (. - gText_Rom_208CE8) > 0x1b
	.error "gText_Rom_208CE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208CE8) < 0x1b
	.space 0x1b - (. - gText_Rom_208CE8)
	.endif
