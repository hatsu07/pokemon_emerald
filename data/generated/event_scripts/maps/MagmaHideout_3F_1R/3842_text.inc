	@ data/maps/MagmaHideout_3F_1R/scripts.inc:22 MagmaHideout_3F_1R_Text_Grunt9PostBattle
	.globl gText_Rom_21C6D2
gText_Rom_21C6D2: @ 0x0821C6D2
	.string "こんな マグマだらけの かざんの なかで\nフードを かぶってる オレたち へん?"
	.byte EOS
	.if (. - gText_Rom_21C6D2) > 0x29
	.error "gText_Rom_21C6D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C6D2) < 0x29
	.space 0x29 - (. - gText_Rom_21C6D2)
	.endif
