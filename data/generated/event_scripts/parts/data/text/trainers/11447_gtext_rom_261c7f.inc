	@ data/text/trainers.inc:3245 Route132_Text_KiyoPostBattle
	.globl gText_Rom_261C7F
gText_Rom_261C7F: @ 0x08261C7F
	.string "くう……\nおまえも ポケモンばか だな!\p24じかん ポケモンのこと ばかり\nかんがえて いるんだろ!$"
	.if (. - gText_Rom_261C7F) > 0x34
	.error "gText_Rom_261C7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261C7F) < 0x34
	.space 0x34 - (. - gText_Rom_261C7F)
	.endif
