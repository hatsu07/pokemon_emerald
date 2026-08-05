	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:292 BattleFrontier_BattlePikeThreePathRoom_Text_ContinueWithChallenge
	.globl gText_Rom_234127
gText_Rom_234127: @ 0x08234127
	.string "このまま ちょうせんを つづけられますか?"
	.byte EOS
	.if (. - gText_Rom_234127) > 0x16
	.error "gText_Rom_234127 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234127) < 0x16
	.space 0x16 - (. - gText_Rom_234127)
	.endif
