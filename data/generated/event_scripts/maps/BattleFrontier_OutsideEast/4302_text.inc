	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:285 BattleFrontier_OutsideEast_Text_OnceBeatGymLeader
	.globl gText_Rom_222F21
gText_Rom_222F21: @ 0x08222F21
	.string "こう みえても むかしは\nジムリーダーに かった ことも あるのよ\pもう ひとはな さかせて みようかしらねぇ$"
	.if (. - gText_Rom_222F21) > 0x38
	.error "gText_Rom_222F21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222F21) < 0x38
	.space 0x38 - (. - gText_Rom_222F21)
	.endif
