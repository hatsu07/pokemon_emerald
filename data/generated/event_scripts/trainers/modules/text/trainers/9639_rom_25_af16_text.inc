	@ data/text/trainers.inc:608 Route109_Text_RickyIntro (+1 aliases)
	.globl gText_Rom_25AF16
gText_Rom_25AF16: @ 0x0825AF16
	.string "のどが かわいたよ……\nうみのいえで サイコソーダ のみたいな……{EOS}"
	.if (. - gText_Rom_25AF16) > 0x22
	.error "gText_Rom_25AF16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AF16) < 0x22
	.space 0x22 - (. - gText_Rom_25AF16)
	.endif
