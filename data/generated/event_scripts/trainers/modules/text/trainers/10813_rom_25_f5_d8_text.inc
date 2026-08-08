	@ data/text/trainers.inc:2303 Route121_Text_KateNotEnoughMons (+1 aliases)
	.globl gText_Rom_25F5D8
gText_Rom_25F5D8: @ 0x0825F5D8
	.string "マナ『ポケモン 1ぴき しか いないのね\nじゃあ しょうぶは できないわ!\pだって よわいもの いじめに なるもの$"
	.if (. - gText_Rom_25F5D8) > 0x3a
	.error "gText_Rom_25F5D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F5D8) < 0x3a
	.space 0x3a - (. - gText_Rom_25F5D8)
	.endif
