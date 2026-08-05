	@ data/text/cable_club.inc:197 MossdeepCity_GameCorner_1F_Text_DodrioBerryPickingInfo
	.globl gText_Rom_248292
gText_Rom_248292: @ 0x08248292
	.string "「ドードリオのきのみどり」は\nドードリオの 3つの あたまに\lめいれいして うえから おちてくる\lきのみを おとさないように\lとりつづける ゲームです\pじゅうじボタンの\nうえ みぎ ひだりを つかいます\pこの ゲームを あそぶには\nドードリオが ひつようです$"
	.if (. - gText_Rom_248292) > 0x82
	.error "gText_Rom_248292 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248292) < 0x82
	.space 0x82 - (. - gText_Rom_248292)
	.endif
