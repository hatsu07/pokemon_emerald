	@ data/text/pkmn_center_nurse.inc:42 gText_YouWantTheUsual
	.globl gText_Rom_2438B9
gText_Rom_2438B9: @ 0x082438B9
	.string "{PLAYER}さん おつかれさまです!\nいつもので よろしい ですね!$"
	.if (. - gText_Rom_2438B9) > 0x1f
	.error "gText_Rom_2438B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2438B9) < 0x1f
	.space 0x1f - (. - gText_Rom_2438B9)
	.endif
