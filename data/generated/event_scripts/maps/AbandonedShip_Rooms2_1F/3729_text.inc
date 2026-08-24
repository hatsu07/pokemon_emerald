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
