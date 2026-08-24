	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:61 AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons (+2 aliases)
	.globl gText_Rom_21B0C2
gText_Rom_21B0C2: @ 0x0821B0C2
	.string "フミ『ポケモン 2ひき いないんだね\nそれだと ぼくたちには かてないよ!"
	.byte EOS
	.if (. - gText_Rom_21B0C2) > 0x26
	.error "gText_Rom_21B0C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B0C2) < 0x26
	.space 0x26 - (. - gText_Rom_21B0C2)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:91 AbandonedShip_Rooms2_1F_Text_KiraRematchIntro (+1 aliases)
	.globl AbandonedShip_Rooms2_1F_Text_KiraRematchIntro
AbandonedShip_Rooms2_1F_Text_KiraRematchIntro: @ 0x0821B0E8
	.string "ナツ『あら? また であったわね!\nあたしたちと いっしょで あきらめずに\lおたから さがしているのね!\pしょうぶして まけた ほうは\nあきらめることに しない?"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_KiraRematchIntro) > 0x52
	.error "AbandonedShip_Rooms2_1F_Text_KiraRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_KiraRematchIntro) < 0x52
	.space 0x52 - (. - AbandonedShip_Rooms2_1F_Text_KiraRematchIntro)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:94 AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat (+1 aliases)
	.globl AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat
AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat: @ 0x0821B13A
	.string "ナツ『また まけちゃった……"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat) > 0xf
	.error "AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat) < 0xf
	.space 0xf - (. - AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:97 AbandonedShip_Rooms2_1F_Text_KiraPostRematch
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl AbandonedShip_Rooms2_1F_Text_KiraPostRematch
AbandonedShip_Rooms2_1F_Text_KiraPostRematch: @ 0x0821B149
	.string "ナツ『もっと ポケモン そだてて\nおたから みつけるまで かえらないわよ!"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_KiraPostRematch) != 0x26
	.error "AbandonedShip_Rooms2_1F_Text_KiraPostRematch must retain its original byte length"
	.endif
	.globl gText_Rom_21B16B
	.set gText_Rom_21B16B, AbandonedShip_Rooms2_1F_Text_KiraPostRematch + 0x22
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:73 AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons (+2 aliases)
	.globl gText_Rom_21B16F
gText_Rom_21B16F: @ 0x0821B16F
	.string "ナツ『あら ポケモン 2ひき いないの?\nじゃあ しょうぶは おあずけね!"
	.byte EOS
	.if (. - gText_Rom_21B16F) > 0x26
	.error "gText_Rom_21B16F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B16F) < 0x26
	.space 0x26 - (. - gText_Rom_21B16F)
	.endif
