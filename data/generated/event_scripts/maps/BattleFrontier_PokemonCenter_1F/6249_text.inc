	@ data/maps/BattleFrontier_PokemonCenter_1F/scripts.inc:46 BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge
	.globl gText_Rom_23B1F8
gText_Rom_23B1F8: @ 0x0823B1F8
	.string "うふ わたしは ぜーんぶ\nこのコと がんばるんだ もんね!"
	.byte EOS
	.if (. - gText_Rom_23B1F8) > 0x1e
	.error "gText_Rom_23B1F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23B1F8) < 0x1e
	.space 0x1e - (. - gText_Rom_23B1F8)
	.endif
