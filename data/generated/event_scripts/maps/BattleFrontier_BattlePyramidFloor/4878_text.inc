	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:131 gText_BattlePyramidConfirmRest
	.globl gText_BattlePyramidConfirmRest
gText_BattlePyramidConfirmRest: @ 0x0822D762
	.string "バトルピラミッドの できごとを\nレポートに かいて ちゅうだん します\lよろしいですか?{EOS}"
	.if (. - gText_BattlePyramidConfirmRest) > 0x2d
	.error "gText_BattlePyramidConfirmRest may not grow beyond its original slot"
	.endif
	.if (. - gText_BattlePyramidConfirmRest) < 0x2d
	.space 0x2d - (. - gText_BattlePyramidConfirmRest)
	.endif
