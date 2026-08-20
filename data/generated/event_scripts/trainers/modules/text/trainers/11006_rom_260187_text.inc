	@ data/text/trainers.inc:2594 Route124_Text_RolandDefeat (+1 aliases)
	.globl gText_Rom_260187
gText_Rom_260187: @ 0x08260187
	.string "ああ!\nダメだ……!{EOS}"
	.if (. - gText_Rom_260187) > 0xb
	.error "gText_Rom_260187 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260187) < 0xb
	.space 0xb - (. - gText_Rom_260187)
	.endif
