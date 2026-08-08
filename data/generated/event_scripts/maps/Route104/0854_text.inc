	@ data/maps/Route104/scripts.inc:1014 Route104_Text_OnlyThrowBallAtWildPokemon
	.globl gText_Rom_1E7B96
gText_Rom_1E7B96: @ 0x081E7B96
	.string "ひとの ポケモンを とったら どろぼうよ\pモンスターボールは\nやせいの ポケモンにだけ なげましょうね!$"
	.if (. - gText_Rom_1E7B96) > 0x35
	.error "gText_Rom_1E7B96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7B96) < 0x35
	.space 0x35 - (. - gText_Rom_1E7B96)
	.endif
