	@ data/text/trainers.inc:485 Route107_Text_RayIntro (+1 aliases)
	.globl gText_Rom_25AA6E
gText_Rom_25AA6E: @ 0x0825AA6E
	.string "シン『いつも きょうだいで\nポケモンしょうぶ してるんだ!\p……いっつも おれが まけるけど\n2たい2なら きみに かてるよ!$"
	.if (. - gText_Rom_25AA6E) > 0x40
	.error "gText_Rom_25AA6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AA6E) < 0x40
	.space 0x40 - (. - gText_Rom_25AA6E)
	.endif
