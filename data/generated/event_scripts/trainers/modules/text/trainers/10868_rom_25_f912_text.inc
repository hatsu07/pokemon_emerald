	@ data/text/trainers.inc:2384 Route121_Text_PatPostBattle
	.globl gText_Rom_25F912
gText_Rom_25F912: @ 0x0825F912
	.string "どんな ポケモンでも おなじように\nかわいがって そだてているの!$"
	.if (. - gText_Rom_25F912) > 0x22
	.error "gText_Rom_25F912 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F912) < 0x22
	.space 0x22 - (. - gText_Rom_25F912)
	.endif
