	@ data/text/trainers.inc:127 Route103_Text_MiguelPostBattle
	.globl gText_Rom_259AF7
gText_Rom_259AF7: @ 0x08259AF7
	.string "かわいい ポケモンちゃんは\nやられた すがたも かわいいな……"
	.byte EOS
	.if (. - gText_Rom_259AF7) > 0x20
	.error "gText_Rom_259AF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259AF7) < 0x20
	.space 0x20 - (. - gText_Rom_259AF7)
	.endif
