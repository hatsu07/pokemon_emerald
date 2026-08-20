	@ data/maps/Route103/scripts.inc:345 Route103_Text_ShouldHaveBroughtPotion
	.globl gText_Rom_1E70B5
gText_Rom_1E70B5: @ 0x081E70B5
	.string "ぼくの ポケモン もう へろへろ……\nキズぐすり もってくれば よかった……{EOS}"
	.if (. - gText_Rom_1E70B5) > 0x27
	.error "gText_Rom_1E70B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E70B5) < 0x27
	.space 0x27 - (. - gText_Rom_1E70B5)
	.endif
