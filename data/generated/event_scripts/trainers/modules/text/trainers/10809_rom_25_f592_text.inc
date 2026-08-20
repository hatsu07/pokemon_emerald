	@ data/text/trainers.inc:2297 Route121_Text_KateDefeat (+1 aliases)
	.globl gText_Rom_25F592
gText_Rom_25F592: @ 0x0825F592
	.string "マナ『コウハイの まえで かっこわるいわ……{EOS}"
	.if (. - gText_Rom_25F592) > 0x17
	.error "gText_Rom_25F592 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F592) < 0x17
	.space 0x17 - (. - gText_Rom_25F592)
	.endif
