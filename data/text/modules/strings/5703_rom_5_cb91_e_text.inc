	@ src/strings.c:554 gText_YourFeelingAtTheBattlesStart
	.globl gText_YourFeelingAtTheBattlesStart
gText_YourFeelingAtTheBattlesStart: @ 0x085CB91E
	.string "たいせんが はじまるときの きもちは{EOS}"
	.if (. - gText_YourFeelingAtTheBattlesStart) > 0x13
	.error "gText_YourFeelingAtTheBattlesStart may not grow beyond its original slot"
	.endif
	.if (. - gText_YourFeelingAtTheBattlesStart) < 0x13
	.space 0x13 - (. - gText_YourFeelingAtTheBattlesStart)
	.endif
