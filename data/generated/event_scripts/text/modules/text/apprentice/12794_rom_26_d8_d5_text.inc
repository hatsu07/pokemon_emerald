	@ data/text/apprentice.inc:112 gText_ApprenticeRejectTeaching5
	.globl gText_Rom_26D8D5
gText_Rom_26D8D5: @ 0x0826D8D5
	.string "えー! たのむよ!\n{PLAYER}{KUN} みたいな ひとが\lオレには ひつよう なんだよー!\pオレに アドバイス たのむよ!"
	.byte EOS
	.if (. - gText_Rom_26D8D5) > 0x39
	.error "gText_Rom_26D8D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D8D5) < 0x39
	.space 0x39 - (. - gText_Rom_26D8D5)
	.endif
