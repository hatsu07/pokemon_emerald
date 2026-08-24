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
	@ data/maps/MtPyre_4F/scripts.inc:15 MtPyre_5F_Text_AtsushiDefeat (+1 aliases)
	.globl gText_Rom_2168BC
gText_Rom_2168BC: @ 0x082168BC
	.string "おししょうさま……\nすんません……{EOS}"
	.if (. - gText_Rom_2168BC) > 0x12
	.error "gText_Rom_2168BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2168BC) < 0x12
	.space 0x12 - (. - gText_Rom_2168BC)
	.endif
	@ data/maps/MtPyre_4F/scripts.inc:19 MtPyre_5F_Text_AtsushiPostBattle
	.globl gText_Rom_2168CE
gText_Rom_2168CE: @ 0x082168CE
	.string "もっと つよくならないと\nここに ねむる おししょうさまも\lあんしん できないよな……{EOS}"
	.if (. - gText_Rom_2168CE) > 0x2c
	.error "gText_Rom_2168CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2168CE) < 0x2c
	.space 0x2c - (. - gText_Rom_2168CE)
	.endif
	@ Embedded ROM bytes: file offset 0x2168FA, size 0x18
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x5C, 0x00, 0x6D, 0x00, 0x00, 0x00
	.4byte gText_Rom_216912 @ ROM pointer 0x08216912
	.4byte gText_Rom_216948 @ ROM pointer 0x08216948
	.byte 0x0F, 0x00, 0x54, 0x69, 0x21, 0x08, 0x09, 0x06, 0x02
