	@ data/text/trainers.inc:2003 Route119_Text_JacksonRematchIntro (+1 aliases)
	.globl gText_Rom_25E943
gText_Rom_25E943: @ 0x0825E943
	.string "ポケモンと いることで\nやせいを とりもどすのさ!$"
	.if (. - gText_Rom_25E943) > 0x1a
	.error "gText_Rom_25E943 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E943) < 0x1a
	.space 0x1a - (. - gText_Rom_25E943)
	.endif
