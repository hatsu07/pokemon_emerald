	@ data/text/trainers.inc:968 Route111_Text_IreneIntro (+1 aliases)
	.globl gText_Rom_25BDCA
gText_Rom_25BDCA: @ 0x0825BDCA
	.string "どこに いくのか しらないけど\nちょっと しょうぶ してみない?$"
	.if (. - gText_Rom_25BDCA) > 0x21
	.error "gText_Rom_25BDCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BDCA) < 0x21
	.space 0x21 - (. - gText_Rom_25BDCA)
	.endif
