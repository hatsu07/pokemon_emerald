	@ data/text/match_call.inc:694 MatchCall_Text_TateLiza_PostRematch
	.globl gText_Rom_26A716
gText_Rom_26A716: @ 0x0826A716
	.string "フウ『{PLAYER}さんとの しょうぶは\nラン『わたしたちの だいじな けいけん\pフウ『いつか また 3にんで\nラン『しょうぶが できると いいですね"
	.byte EOS
	.if (. - gText_Rom_26A716) > 0x47
	.error "gText_Rom_26A716 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A716) < 0x47
	.space 0x47 - (. - gText_Rom_26A716)
	.endif
