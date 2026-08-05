	@ data/maps/AquaHideout_B2F/scripts.inc:107 AquaHideout_B2F_Text_Grunt4PostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_218218
gText_Rom_218218: @ 0x08218218
	.string "リーダーぁ……\nこんなもんで どうでしょー!$"
	.if (. - gText_Rom_218218) != 0x17
	.error "gText_Rom_218218 must retain its original byte length"
	.endif
