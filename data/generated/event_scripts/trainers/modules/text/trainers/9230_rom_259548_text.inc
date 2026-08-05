	@ data/text/trainers.inc:4 Route102_Text_CalvinDefeated (+1 aliases)
	.globl gText_Rom_259548
gText_Rom_259548: @ 0x08259548
	.string "ああ まけた……\nもっと そだてておけば よかったよ"
	.byte EOS
	.if (. - gText_Rom_259548) > 0x1b
	.error "gText_Rom_259548 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259548) < 0x1b
	.space 0x1b - (. - gText_Rom_259548)
	.endif
