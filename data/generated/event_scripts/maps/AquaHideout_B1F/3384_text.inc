	@ data/maps/AquaHideout_B1F/scripts.inc:112 AquaHideout_B1F_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_217E2B
gText_Rom_217E2B: @ 0x08217E2B
	.string "ぜんぜん かてません……!{EOS}"
	.if (. - gText_Rom_217E2B) > 0xe
	.error "gText_Rom_217E2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217E2B) < 0xe
	.space 0xe - (. - gText_Rom_217E2B)
	.endif
