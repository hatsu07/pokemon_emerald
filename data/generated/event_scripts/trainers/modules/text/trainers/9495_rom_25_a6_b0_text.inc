	@ data/text/trainers.inc:398 Route106_Text_NedIntro (+1 aliases)
	.globl gText_Rom_25A6B0
gText_Rom_25A6B0: @ 0x0825A6B0
	.string "トイレに いきたくなったとき\nみんなは どうしてるんだろう……?\pトイレに いっている あいだに\nもし おおものが かかったらと おもうと……$"
	.if (. - gText_Rom_25A6B0) > 0x48
	.error "gText_Rom_25A6B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A6B0) < 0x48
	.space 0x48 - (. - gText_Rom_25A6B0)
	.endif
