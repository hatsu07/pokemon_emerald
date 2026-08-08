	@ data/maps/RustboroCity_Mart/scripts.inc:67 RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish
	.globl gText_Rom_20366B
gText_Rom_20366B: @ 0x0820366B
	.string "トウカのもりで キノココが\nとびだして きたときの ため\lまひなおしや どくけしを かっておくの！$"
	.if (. - gText_Rom_20366B) > 0x32
	.error "gText_Rom_20366B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20366B) < 0x32
	.space 0x32 - (. - gText_Rom_20366B)
	.endif
