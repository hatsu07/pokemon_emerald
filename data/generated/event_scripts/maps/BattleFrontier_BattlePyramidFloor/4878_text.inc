	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:131 gText_BattlePyramidConfirmRest
	.globl gText_Rom_22D762
gText_Rom_22D762: @ 0x0822D762
	.string "バトルピラミッドの できごとを\nレポートに かいて ちゅうだん します\lよろしいですか?$"
	.if (. - gText_Rom_22D762) > 0x2d
	.error "gText_Rom_22D762 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D762) < 0x2d
	.space 0x2d - (. - gText_Rom_22D762)
	.endif
