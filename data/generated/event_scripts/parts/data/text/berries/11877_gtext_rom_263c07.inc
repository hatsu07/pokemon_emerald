	@ data/text/berries.inc:116 Route123_BerryMastersHouse_Text_InspirationalTakeThis
	.globl gText_Rom_263C07
gText_Rom_263C07: @ 0x08263C07
	.string "おお! とても よい ことばじゃ!\nかんどう したわい\pほれ これを もっていきなされ$"
	.if (. - gText_Rom_263C07) > 0x2c
	.error "gText_Rom_263C07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263C07) < 0x2c
	.space 0x2c - (. - gText_Rom_263C07)
	.endif
