	@ data/text/berries.inc:121 Route123_BerryMastersHouse_Text_GoodSayingTakeThis
	.globl gText_Rom_263C33
gText_Rom_263C33: @ 0x08263C33
	.string "おお! なかなか よい ことばじゃ\nあんたも たいしたもんじゃ\pほれ これを もっていきなされ$"
	.if (. - gText_Rom_263C33) > 0x30
	.error "gText_Rom_263C33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263C33) < 0x30
	.space 0x30 - (. - gText_Rom_263C33)
	.endif
