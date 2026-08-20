	@ data/text/trainers.inc:1712 Route117_Text_LydiaRematchIntro (+1 aliases)
	.globl gText_Rom_25DCA2
gText_Rom_25DCA2: @ 0x0825DCA2
	.string "ポケモンを ちゃんと そだててるか\nまた わたしが たしかめて あげますね{EOS}"
	.if (. - gText_Rom_25DCA2) > 0x26
	.error "gText_Rom_25DCA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DCA2) < 0x26
	.space 0x26 - (. - gText_Rom_25DCA2)
	.endif
