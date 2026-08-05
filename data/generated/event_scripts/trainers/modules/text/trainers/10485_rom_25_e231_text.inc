	@ data/text/trainers.inc:1823 Route117_Text_MelinaIntro (+1 aliases)
	.globl gText_Rom_25E231
gText_Rom_25E231: @ 0x0825E231
	.string "すてきな おはなを みながら\nしょうぶする なんて すてきよね!$"
	.if (. - gText_Rom_25E231) > 0x21
	.error "gText_Rom_25E231 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E231) < 0x21
	.space 0x21 - (. - gText_Rom_25E231)
	.endif
