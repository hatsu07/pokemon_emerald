	@ data/text/trainers.inc:2663 Route124_Text_RoyNotEnoughMons (+2 aliases)
	.globl gText_Rom_2604C9
gText_Rom_2604C9: @ 0x082604C9
	.string "コウ『オレらと たたかう つもり?\nポケモン 2ひき つれてきなよ!{EOS}"
	.if (. - gText_Rom_2604C9) > 0x23
	.error "gText_Rom_2604C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2604C9) < 0x23
	.space 0x23 - (. - gText_Rom_2604C9)
	.endif
