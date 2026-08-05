	@ data/maps/RustboroCity/scripts.inc:1021 RustboroCity_Text_SneakyLookingManWentAroundCorner
	.globl gText_Rom_1DF2BF
gText_Rom_1DF2BF: @ 0x081DF2BF
	.string "ん? あやしい おとこ?\pそういえば にんそうの わるい おとこが\nそこの かどを まがっていったよ$"
	.if (. - gText_Rom_1DF2BF) > 0x33
	.error "gText_Rom_1DF2BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF2BF) < 0x33
	.space 0x33 - (. - gText_Rom_1DF2BF)
	.endif
