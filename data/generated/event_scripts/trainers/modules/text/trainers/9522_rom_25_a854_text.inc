	@ data/text/trainers.inc:437 Route107_Text_TonyDefeated (+1 aliases)
	.globl gText_Rom_25A854
gText_Rom_25A854: @ 0x0825A854
	.string "ホームグラウンドで まけた……\nショック!$"
	.if (. - gText_Rom_25A854) > 0x16
	.error "gText_Rom_25A854 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A854) < 0x16
	.space 0x16 - (. - gText_Rom_25A854)
	.endif
