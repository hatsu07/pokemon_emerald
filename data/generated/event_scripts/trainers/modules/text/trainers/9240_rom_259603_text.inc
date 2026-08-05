	@ data/text/trainers.inc:19 Route102_Text_CalvinRematchDefeated (+1 aliases)
	.globl gText_Rom_259603
gText_Rom_259603: @ 0x08259603
	.string "ああ まけた……\nそだてかた わるいのかな"
	.byte EOS
	.if (. - gText_Rom_259603) > 0x16
	.error "gText_Rom_259603 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259603) < 0x16
	.space 0x16 - (. - gText_Rom_259603)
	.endif
