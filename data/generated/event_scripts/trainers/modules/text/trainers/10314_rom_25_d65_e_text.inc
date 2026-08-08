	@ data/text/trainers.inc:1571 Route116_Text_JoeyDefeat (+1 aliases)
	.globl gText_Rom_25D65E
gText_Rom_25D65E: @ 0x0825D65E
	.string "あいたたたたっ! キズが できた!\nバンソーコー はらなきゃ!$"
	.if (. - gText_Rom_25D65E) > 0x20
	.error "gText_Rom_25D65E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D65E) < 0x20
	.space 0x20 - (. - gText_Rom_25D65E)
	.endif
