	@ data/text/trainers.inc:2126 Route120_Text_RobertDefeat (+1 aliases)
	.globl gText_Rom_25EE4F
gText_Rom_25EE4F: @ 0x0825EE4F
	.string "キミの ポケモンの ほうが\nつよかった……!$"
	.if (. - gText_Rom_25EE4F) > 0x17
	.error "gText_Rom_25EE4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EE4F) < 0x17
	.space 0x17 - (. - gText_Rom_25EE4F)
	.endif
