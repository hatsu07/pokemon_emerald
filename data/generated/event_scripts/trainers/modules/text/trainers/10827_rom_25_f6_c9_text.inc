	@ data/text/trainers.inc:2324 Route121_Text_JessicaPostBattle (+1 aliases)
	.globl gText_Rom_25F6C9
gText_Rom_25F6C9: @ 0x0825F6C9
	.string "サファリで あたらしい ポケモン\nつかまえようかな?{EOS}"
	.if (. - gText_Rom_25F6C9) > 0x1b
	.error "gText_Rom_25F6C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F6C9) < 0x1b
	.space 0x1b - (. - gText_Rom_25F6C9)
	.endif
