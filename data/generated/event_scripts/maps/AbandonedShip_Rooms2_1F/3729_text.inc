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
	.globl gText_Rom_21B0E8
gText_Rom_21B0E8: @ 0x0821B0E8
	.string "ナツ『あら? また であったわね!\nあたしたちと いっしょで あきらめずに\lおたから さがしているのね!\pしょうぶして まけた ほうは\nあきらめることに しない?"
	.byte EOS
	.if (. - gText_Rom_21B0E8) > 0x52
	.error "gText_Rom_21B0E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B0E8) < 0x52
	.space 0x52 - (. - gText_Rom_21B0E8)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:94 AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat (+1 aliases)
	.globl gText_Rom_21B13A
gText_Rom_21B13A: @ 0x0821B13A
	.string "ナツ『また まけちゃった……"
	.byte EOS
	.if (. - gText_Rom_21B13A) > 0xf
	.error "gText_Rom_21B13A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B13A) < 0xf
	.space 0xf - (. - gText_Rom_21B13A)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:97 AbandonedShip_Rooms2_1F_Text_KiraPostRematch
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B149
gText_Rom_21B149: @ 0x0821B149
	.string "ナツ『もっと ポケモン そだてて\nおたから みつけるまで かえらないわよ!"
	.byte EOS
	.if (. - gText_Rom_21B149) != 0x26
	.error "gText_Rom_21B149 must retain its original byte length"
	.endif
	.globl gText_Rom_21B16B
	.set gText_Rom_21B16B, gText_Rom_21B149 + 0x22
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
