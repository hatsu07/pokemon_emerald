	@ data/text/trainers.inc:1130 Route112_Text_CarolIntro (+1 aliases)
	.globl gText_Rom_25C48B
gText_Rom_25C48B: @ 0x0825C48B
	.string "ピクニックと いえば うた!\nさあ いっしょに うたいましょ!{EOS}"
	.if (. - gText_Rom_25C48B) > 0x20
	.error "gText_Rom_25C48B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C48B) < 0x20
	.space 0x20 - (. - gText_Rom_25C48B)
	.endif
