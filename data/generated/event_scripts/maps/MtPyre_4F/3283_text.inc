	@ data/maps/MtPyre_4F/scripts.inc:11 MtPyre_5F_Text_AtsushiIntro (+1 aliases)
	.globl gText_Rom_216898
gText_Rom_216898: @ 0x08216898
	.string "おししょうさま……\nいまの わたしの じつりょく\lみていて ください!{EOS}"
	.if (. - gText_Rom_216898) > 0x24
	.error "gText_Rom_216898 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216898) < 0x24
	.space 0x24 - (. - gText_Rom_216898)
	.endif
