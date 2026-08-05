	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:266 BattleFrontier_ScottsHouse_Text_BerryPocketStuffed
	.globl gText_Rom_238EC0
gText_Rom_238EC0: @ 0x08238EC0
	.string "きのみポケットが いっぱい みたいね"
	.byte EOS
	.if (. - gText_Rom_238EC0) > 0x13
	.error "gText_Rom_238EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238EC0) < 0x13
	.space 0x13 - (. - gText_Rom_238EC0)
	.endif
