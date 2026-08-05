	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:362 Route110_TrickHousePuzzle7_Text_AlvaroPostBattle
	.globl gText_Rom_2403FB
gText_Rom_2403FB: @ 0x082403FB
	.string "ま こんな ところで あったんだ\nものずき どうし おたがい がんばろうぜ!$"
	.if (. - gText_Rom_2403FB) > 0x27
	.error "gText_Rom_2403FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2403FB) < 0x27
	.space 0x27 - (. - gText_Rom_2403FB)
	.endif
