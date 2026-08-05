	@ data/text/trainers.inc:2324 Route121_Text_JessicaPostBattle (+1 aliases)
	.globl gText_Rom_25F740
gText_Rom_25F740: @ 0x0825F740
	.string "サファリで あたらしい ポケモン\nつかまえようかな?$"
	.if (. - gText_Rom_25F740) > 0x1b
	.error "gText_Rom_25F740 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F740) < 0x1b
	.space 0x1b - (. - gText_Rom_25F740)
	.endif
