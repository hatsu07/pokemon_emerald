	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:311 MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma
	.globl gText_Rom_20D316
gText_Rom_20D316: @ 0x0820D316
	.string "マグマだん なんて\nアクアだんが やっつければ いいのよ!\pでも そうすると こんどは\nアクアだんが おおきなかおを するのよね{EOS}"
	.if (. - gText_Rom_20D316) > 0x41
	.error "gText_Rom_20D316 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D316) < 0x41
	.space 0x41 - (. - gText_Rom_20D316)
	.endif
