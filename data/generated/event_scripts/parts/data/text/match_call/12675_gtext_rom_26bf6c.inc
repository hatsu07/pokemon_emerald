	@ data/text/match_call.inc:886 MatchCall_Text_Norman_PostRematch
	.globl gText_Rom_26BF6C
gText_Rom_26BF6C: @ 0x0826BF6C
	.string "パパ『……すごいなあ {PLAYER}\nどこまで つよく なっちゃうんだろう "
	.byte EOS
	.if (. - gText_Rom_26BF6C) > 0x22
	.error "gText_Rom_26BF6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BF6C) < 0x22
	.space 0x22 - (. - gText_Rom_26BF6C)
	.endif
