	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:291 BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon
	.globl gText_Rom_222F8E
gText_Rom_222F8E: @ 0x08222F8E
	.string "わたしのほうがねえー パパより\nポケモン つよいんだよ!{EOS}"
	.if (. - gText_Rom_222F8E) > 0x1d
	.error "gText_Rom_222F8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222F8E) < 0x1d
	.space 0x1d - (. - gText_Rom_222F8E)
	.endif
