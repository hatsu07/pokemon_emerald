	@ data/text/trainers.inc:1070 Route111_Text_CelinaPostBattle
	.globl gText_Rom_25C21C
gText_Rom_25C21C: @ 0x0825C21C
	.string "ま まだ ドキドキ しているわ\nあなたって…… ステキな トレーナーね$"
	.if (. - gText_Rom_25C21C) > 0x24
	.error "gText_Rom_25C21C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C21C) < 0x24
	.space 0x24 - (. - gText_Rom_25C21C)
	.endif
