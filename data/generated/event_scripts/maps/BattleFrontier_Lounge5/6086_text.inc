	@ data/maps/BattleFrontier_Lounge5/scripts.inc:80 BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon
	.globl gText_Rom_239538
gText_Rom_239538: @ 0x08239538
	.string "ポケモンの きもちが わかるとは\nあの おじょうちゃん なかなか\lシャレた ことを もうしますな!"
	.byte EOS
	.if (. - gText_Rom_239538) > 0x32
	.error "gText_Rom_239538 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239538) < 0x32
	.space 0x32 - (. - gText_Rom_239538)
	.endif
