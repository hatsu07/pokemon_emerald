	@ data/text/trainers.inc:7 Route102_Text_CalvinPostBattle
	.globl gText_Rom_259563
gText_Rom_259563: @ 0x08259563
	.string "キミ つよいなら つよいって\nさいしょから いって くれよな!"
	.byte EOS
	.if (. - gText_Rom_259563) > 0x20
	.error "gText_Rom_259563 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259563) < 0x20
	.space 0x20 - (. - gText_Rom_259563)
	.endif
