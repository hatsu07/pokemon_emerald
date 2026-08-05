	@ data/text/berries.inc:73 LilycoveCity_Text_BerrySuitsYou
	.globl gText_Rom_263A58
gText_Rom_263A58: @ 0x08263A58
	.string "やっぱり\pわたしに スーツが にあうように\nうみには しおかぜが にあうな\lそして きみには きのみが にあいそうだ……\pなんでだろうね?$"
	.if (. - gText_Rom_263A58) > 0x46
	.error "gText_Rom_263A58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263A58) < 0x46
	.space 0x46 - (. - gText_Rom_263A58)
	.endif
