	@ data/maps/BattleFrontier_Lounge3/scripts.inc:248 BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
	.globl gText_Rom_237F6A
gText_Rom_237F6A: @ 0x08237F6A
	.string "ィイね! ィイね!\nで? で? で? いくら かして くれます?"
	.byte EOS
	.if (. - gText_Rom_237F6A) > 0x21
	.error "gText_Rom_237F6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237F6A) < 0x21
	.space 0x21 - (. - gText_Rom_237F6A)
	.endif
