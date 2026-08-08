	@ data/text/trainers.inc:2261 Route121_Text_VanessaPostBattle
	.globl gText_Rom_25F40F
gText_Rom_25F40F: @ 0x0825F40F
	.string "ミナモの コンテストに いくのよ\nあたしの ポケモンなら\lマスター ランクでも らくしょうよ!$"
	.if (. - gText_Rom_25F40F) > 0x30
	.error "gText_Rom_25F40F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F40F) < 0x30
	.space 0x30 - (. - gText_Rom_25F40F)
	.endif
