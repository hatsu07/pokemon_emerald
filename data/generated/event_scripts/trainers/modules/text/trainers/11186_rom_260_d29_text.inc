	@ data/text/trainers.inc:2861 Route126_Text_PabloPostRematch
	.globl gText_Rom_260D29
gText_Rom_260D29: @ 0x08260D29
	.string "よし もっともっと きたえるぜ!\nきみは いい しげきに なるから\lまた きてくれよ!{EOS}"
	.if (. - gText_Rom_260D29) > 0x2c
	.error "gText_Rom_260D29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260D29) < 0x2c
	.space 0x2c - (. - gText_Rom_260D29)
	.endif
