	@ data/text/trainers.inc:151 Route103_Text_IsabelleIntro (+1 aliases)
	.globl gText_Rom_259BE4
gText_Rom_259BE4: @ 0x08259BE4
	.string "きゃあ ぶつかるわ!\nあぶないっ!"
	.byte EOS
	.if (. - gText_Rom_259BE4) > 0x12
	.error "gText_Rom_259BE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259BE4) < 0x12
	.space 0x12 - (. - gText_Rom_259BE4)
	.endif
