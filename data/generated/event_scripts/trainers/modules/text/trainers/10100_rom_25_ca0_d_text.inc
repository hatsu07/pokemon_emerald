	@ data/text/trainers.inc:1265 Route113_Text_SophiePostBattle
	.globl gText_Rom_25CA0D
gText_Rom_25CA0D: @ 0x0825CA0D
	.string "まけて くやしい から\nもう ここで フテね しちゃうわ!\lぐーぐー$"
	.if (. - gText_Rom_25CA0D) > 0x23
	.error "gText_Rom_25CA0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CA0D) < 0x23
	.space 0x23 - (. - gText_Rom_25CA0D)
	.endif
