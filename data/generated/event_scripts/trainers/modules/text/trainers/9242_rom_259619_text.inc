	@ data/text/trainers.inc:22 Route102_Text_CalvinRematchPostBattle
	.globl gText_Rom_259619
gText_Rom_259619: @ 0x08259619
	.string "キミが つよくなるなら\nボクも もっと つよくなって みせるよ!"
	.byte EOS
	.if (. - gText_Rom_259619) > 0x21
	.error "gText_Rom_259619 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259619) < 0x21
	.space 0x21 - (. - gText_Rom_259619)
	.endif
