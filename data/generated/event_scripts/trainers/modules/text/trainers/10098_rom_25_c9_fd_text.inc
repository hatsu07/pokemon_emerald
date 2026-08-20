	@ data/text/trainers.inc:1262 Route113_Text_SophieDefeat (+1 aliases)
	.globl gText_Rom_25C9FD
gText_Rom_25C9FD: @ 0x0825C9FD
	.string "きっと これは ユメなのよ……{EOS}"
	.if (. - gText_Rom_25C9FD) > 0x10
	.error "gText_Rom_25C9FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C9FD) < 0x10
	.space 0x10 - (. - gText_Rom_25C9FD)
	.endif
