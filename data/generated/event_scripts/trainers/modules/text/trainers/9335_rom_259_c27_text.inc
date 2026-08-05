	@ data/text/trainers.inc:160 Route103_Text_RhettIntro (+1 aliases)
	.globl gText_Rom_259C27
gText_Rom_259C27: @ 0x08259C27
	.string "うぉっ!\nなぜ こんな せまいところに!?"
	.byte EOS
	.if (. - gText_Rom_259C27) > 0x16
	.error "gText_Rom_259C27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259C27) < 0x16
	.space 0x16 - (. - gText_Rom_259C27)
	.endif
