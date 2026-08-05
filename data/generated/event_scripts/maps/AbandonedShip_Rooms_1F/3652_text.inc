	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:34 AbandonedShip_Rooms_1F_Text_TakingALookAround
	.globl gText_Rom_21AA80
gText_Rom_21AA80: @ 0x0821AA80
	.string "こういった ふねは めずらしいので\nけんがく しておるのですよ\pフムフム……\nほかにも へやが ありそうですな"
	.byte EOS
	.if (. - gText_Rom_21AA80) > 0x38
	.error "gText_Rom_21AA80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AA80) < 0x38
	.space 0x38 - (. - gText_Rom_21AA80)
	.endif
