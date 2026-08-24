	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:103 AbandonedShip_Rooms2_1F_Text_JaniIntro (+1 aliases)
	.globl AbandonedShip_Rooms2_1F_Text_JaniIntro
AbandonedShip_Rooms2_1F_Text_JaniIntro: @ 0x0821B195
	.string "およぐの ヘタだけど\nしょうぶは つよいもーん"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_JaniIntro) > 0x18
	.error "AbandonedShip_Rooms2_1F_Text_JaniIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_JaniIntro) < 0x18
	.space 0x18 - (. - AbandonedShip_Rooms2_1F_Text_JaniIntro)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:106 AbandonedShip_Rooms2_1F_Text_JaniDefeat (+1 aliases)
	.globl AbandonedShip_Rooms2_1F_Text_JaniDefeat
AbandonedShip_Rooms2_1F_Text_JaniDefeat: @ 0x0821B1AD
	.string "あれ だめだったかあ"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_JaniDefeat) > 0xb
	.error "AbandonedShip_Rooms2_1F_Text_JaniDefeat may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_JaniDefeat) < 0xb
	.space 0xb - (. - AbandonedShip_Rooms2_1F_Text_JaniDefeat)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:109 AbandonedShip_Rooms2_1F_Text_JaniPostBattle
	.globl AbandonedShip_Rooms2_1F_Text_JaniPostBattle
AbandonedShip_Rooms2_1F_Text_JaniPostBattle: @ 0x0821B1B8
	.string "ふねの なかを はだしで あるくと\nちょっと きもちわるいなあ"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_JaniPostBattle) > 0x20
	.error "AbandonedShip_Rooms2_1F_Text_JaniPostBattle may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_JaniPostBattle) < 0x20
	.space 0x20 - (. - AbandonedShip_Rooms2_1F_Text_JaniPostBattle)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:112 AbandonedShip_Rooms2_1F_Text_GarrisonIntro (+1 aliases)
	.globl AbandonedShip_Rooms2_1F_Text_GarrisonIntro
AbandonedShip_Rooms2_1F_Text_GarrisonIntro: @ 0x0821B1D8
	.string "つよさも やさしさも\nこれ トレーナーの たから!"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_GarrisonIntro) > 0x1a
	.error "AbandonedShip_Rooms2_1F_Text_GarrisonIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_GarrisonIntro) < 0x1a
	.space 0x1a - (. - AbandonedShip_Rooms2_1F_Text_GarrisonIntro)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:115 AbandonedShip_Rooms2_1F_Text_GarrisonDefeat (+1 aliases)
	.globl AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
AbandonedShip_Rooms2_1F_Text_GarrisonDefeat: @ 0x0821B1F2
	.string "おお あなたには\nキラリと ひかるものが あるな"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_GarrisonDefeat) > 0x19
	.error "AbandonedShip_Rooms2_1F_Text_GarrisonDefeat may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_GarrisonDefeat) < 0x19
	.space 0x19 - (. - AbandonedShip_Rooms2_1F_Text_GarrisonDefeat)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:118 AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle
	.globl AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle
AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle: @ 0x0821B20B
	.string "ふねの どこかの へやに\nキラリと ひかるものが あったんだが……"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle) > 0x22
	.error "AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle) < 0x22
	.space 0x22 - (. - AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x21B22D, size 0x43
	.byte 0x00, 0x6A, 0x5A, 0x2B, 0x26, 0x01, 0x06, 0x01, 0x66, 0xB2, 0x21, 0x08, 0x47, 0x16, 0x01, 0x01
	.byte 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x5C, 0xB2, 0x21, 0x08, 0x2B, 0x36, 0x04, 0x06
	.byte 0x01, 0x66, 0xB2, 0x21, 0x08, 0x0F, 0x00, 0x70, 0xB2, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F
	.byte 0x00, 0xC2, 0xB2, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0x0A, 0xB3, 0x21, 0x08, 0x09
	.byte 0x04, 0x6C, 0x02
