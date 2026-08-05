	@ data/maps/RustboroCity_Mart/scripts.inc:70 RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead
	.globl gText_Rom_20369D
gText_Rom_20369D: @ 0x0820369D
	.string "ポケモン しんかして たいりょくが\nふえたから キズぐすり じゃなくて\lいいキズぐすりを かってあげようかな$"
	.if (. - gText_Rom_20369D) > 0x37
	.error "gText_Rom_20369D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20369D) < 0x37
	.space 0x37 - (. - gText_Rom_20369D)
	.endif
