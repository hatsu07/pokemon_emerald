	@ data/text/trainers.inc:2426 Route123_Text_CameronDefeat (+2 aliases)
	.globl gText_Rom_25FB5A
gText_Rom_25FB5A: @ 0x0825FB5A
	.string "しょんぼり……{EOS}"
	.if (. - gText_Rom_25FB5A) > 0x8
	.error "gText_Rom_25FB5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FB5A) < 0x8
	.space 0x8 - (. - gText_Rom_25FB5A)
	.endif
