	@ data/text/trainers.inc:824 Route110_Text_EdwinRegister
	.globl gText_Rom_25B759
gText_Rom_25B759: @ 0x0825B759
	.string "ぼく エントリーコールも\nたくさん あつめたいんだよねぇ$"
	.if (. - gText_Rom_25B759) > 0x1d
	.error "gText_Rom_25B759 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B759) < 0x1d
	.space 0x1d - (. - gText_Rom_25B759)
	.endif
