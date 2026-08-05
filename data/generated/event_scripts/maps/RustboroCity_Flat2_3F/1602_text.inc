	@ data/maps/RustboroCity_Flat2_3F/scripts.inc:12 RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones
	.globl gText_Rom_2040C8
gText_Rom_2040C8: @ 0x082040C8
	.string "デボンの しゃちょうは\nめずらしい いしを あつめるのが\lしゅみ なんだよ$"
	.if (. - gText_Rom_2040C8) > 0x26
	.error "gText_Rom_2040C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2040C8) < 0x26
	.space 0x26 - (. - gText_Rom_2040C8)
	.endif
