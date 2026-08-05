	@ data/text/trainers.inc:112 Route103_Text_AndrewIntro (+1 aliases)
	.globl gText_Rom_259A70
gText_Rom_259A70: @ 0x08259A70
	.string "つりいとが からまって イライラするーっ!\nええいっ しょうぶだっ!"
	.byte EOS
	.if (. - gText_Rom_259A70) > 0x23
	.error "gText_Rom_259A70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259A70) < 0x23
	.space 0x23 - (. - gText_Rom_259A70)
	.endif
