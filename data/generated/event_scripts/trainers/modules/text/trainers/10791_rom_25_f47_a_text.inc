	@ data/text/trainers.inc:2270 Route121_Text_WalterPostBattle
	.globl gText_Rom_25F47A
gText_Rom_25F47A: @ 0x0825F47A
	.string "また ポケモンと いっしょに\nせかいを まわってみたい ものです$"
	.if (. - gText_Rom_25F47A) > 0x21
	.error "gText_Rom_25F47A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F47A) < 0x21
	.space 0x21 - (. - gText_Rom_25F47A)
	.endif
