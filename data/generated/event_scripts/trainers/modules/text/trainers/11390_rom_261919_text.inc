	@ data/text/trainers.inc:3164 Route131_Text_KaraDefeat (+1 aliases)
	.globl gText_Rom_261919
gText_Rom_261919: @ 0x08261919
	.string "じつりょくが ちがい すぎるわ……!{EOS}"
	.if (. - gText_Rom_261919) > 0x13
	.error "gText_Rom_261919 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261919) < 0x13
	.space 0x13 - (. - gText_Rom_261919)
	.endif
