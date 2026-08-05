	@ data/text/trainers.inc:2855 Route126_Text_PabloRematchIntro (+1 aliases)
	.globl gText_Rom_260CF1
gText_Rom_260CF1: @ 0x08260CF1
	.string "ビキニのおねえさん より うつくしい\nこの にくたいびを みよ!$"
	.if (. - gText_Rom_260CF1) > 0x21
	.error "gText_Rom_260CF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260CF1) < 0x21
	.space 0x21 - (. - gText_Rom_260CF1)
	.endif
