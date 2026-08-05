	@ data/maps/LilycoveCity_ContestHall/scripts.inc:358 LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty
	.globl gText_Rom_207E29
gText_Rom_207E29: @ 0x08207E29
	.string "しんさいん『どの ポケモンも\nじつに うつくしい ですなぁ！\pおもわず さいてんを わすれますよ！$"
	.if (. - gText_Rom_207E29) > 0x32
	.error "gText_Rom_207E29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207E29) < 0x32
	.space 0x32 - (. - gText_Rom_207E29)
	.endif
