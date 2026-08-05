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
