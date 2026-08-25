	@ data/maps/MtPyre_4F/scripts.inc:11 MtPyre_5F_Text_AtsushiIntro (+1 aliases)
	.globl MtPyre_5F_Text_AtsushiIntro
MtPyre_5F_Text_AtsushiIntro: @ 0x08216898
	.string "おししょうさま……\nいまの わたしの じつりょく\lみていて ください!{EOS}"
	.if (. - MtPyre_5F_Text_AtsushiIntro) > 0x24
	.error "MtPyre_5F_Text_AtsushiIntro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_5F_Text_AtsushiIntro) < 0x24
	.space 0x24 - (. - MtPyre_5F_Text_AtsushiIntro)
	.endif
	@ data/maps/MtPyre_4F/scripts.inc:15 MtPyre_5F_Text_AtsushiDefeat (+1 aliases)
	.globl MtPyre_5F_Text_AtsushiDefeat
MtPyre_5F_Text_AtsushiDefeat: @ 0x082168BC
	.string "おししょうさま……\nすんません……{EOS}"
	.if (. - MtPyre_5F_Text_AtsushiDefeat) > 0x12
	.error "MtPyre_5F_Text_AtsushiDefeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_5F_Text_AtsushiDefeat) < 0x12
	.space 0x12 - (. - MtPyre_5F_Text_AtsushiDefeat)
	.endif
	@ data/maps/MtPyre_4F/scripts.inc:19 MtPyre_5F_Text_AtsushiPostBattle
	.globl MtPyre_5F_Text_AtsushiPostBattle
MtPyre_5F_Text_AtsushiPostBattle: @ 0x082168CE
	.string "もっと つよくならないと\nここに ねむる おししょうさまも\lあんしん できないよな……{EOS}"
	.if (. - MtPyre_5F_Text_AtsushiPostBattle) > 0x2c
	.error "MtPyre_5F_Text_AtsushiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_5F_Text_AtsushiPostBattle) < 0x2c
	.space 0x2c - (. - MtPyre_5F_Text_AtsushiPostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x2168FA, size 0x18
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x5C, 0x00, 0x6D, 0x00, 0x00, 0x00
	.4byte MtPyre_4F_Text_TashaIntro @ ROM pointer 0x08216912
	.4byte MtPyre_4F_Text_TashaDefeat @ ROM pointer 0x08216948
	.byte 0x0F, 0x00, 0x54, 0x69, 0x21, 0x08, 0x09, 0x06, 0x02
