	@ data/maps/Route104_MrBrineysHouse/scripts.inc:97 Route104_MrBrineysHouse_Text_WaitUpPeeko
	.globl gText_Rom_211732
gText_Rom_211732: @ 0x08211732
	.string "ハギ『こらこら!\nまて まて ピーコちゃん!{EOS}"
	.if (. - gText_Rom_211732) > 0x17
	.error "gText_Rom_211732 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211732) < 0x17
	.space 0x17 - (. - gText_Rom_211732)
	.endif
