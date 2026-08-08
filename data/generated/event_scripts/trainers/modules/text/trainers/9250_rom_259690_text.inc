	@ data/text/trainers.inc:34 Route102_Text_RickIntro (+1 aliases)
	.globl gText_Rom_259690
gText_Rom_259690: @ 0x08259690
	.string "おっと! めが あったな!\nむしポケモンで あいてを するぜ!"
	.byte EOS
	.if (. - gText_Rom_259690) > 0x20
	.error "gText_Rom_259690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259690) < 0x20
	.space 0x20 - (. - gText_Rom_259690)
	.endif
