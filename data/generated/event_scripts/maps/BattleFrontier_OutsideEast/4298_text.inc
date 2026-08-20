	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:279 BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant
	.globl gText_Rom_222E98
gText_Rom_222E98: @ 0x08222E98
	.string "ジグザグマは ぼんやり してる……{EOS}"
	.if (. - gText_Rom_222E98) > 0x12
	.error "gText_Rom_222E98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222E98) < 0x12
	.space 0x12 - (. - gText_Rom_222E98)
	.endif
