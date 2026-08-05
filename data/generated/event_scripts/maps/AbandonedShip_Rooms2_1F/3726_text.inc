	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:97 AbandonedShip_Rooms2_1F_Text_KiraPostRematch
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B149
gText_Rom_21B149: @ 0x0821B149
	.string "ナツ『もっと ポケモン そだてて\nおたから みつけるまで かえらないわよ!"
	.byte EOS
	.if (. - gText_Rom_21B149) != 0x26
	.error "gText_Rom_21B149 must retain its original byte length"
	.endif
