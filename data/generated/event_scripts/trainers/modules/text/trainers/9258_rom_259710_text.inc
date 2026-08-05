	@ data/text/trainers.inc:46 Route102_Text_TianaDefeated (+1 aliases)
	.globl gText_Rom_259710
gText_Rom_259710: @ 0x08259710
	.string "わたしが あなたに\nきょうりょく しちゃった みたいね……"
	.byte EOS
	.if (. - gText_Rom_259710) > 0x1e
	.error "gText_Rom_259710 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259710) < 0x1e
	.space 0x1e - (. - gText_Rom_259710)
	.endif
