	@ data/text/match_call.inc:682 MatchCall_Text_Winona_PostRematch
	.globl gText_Rom_26A557
gText_Rom_26A557: @ 0x0826A557
	.string "ナギ『{PLAYER}さん……\nしょうぶに まけても わたしの つばさは\lけっして おれることは ないのです!\pそう {PLAYER}さんが\nゆめを あきらめなかった ように!"
	.byte EOS
	.if (. - gText_Rom_26A557) > 0x4d
	.error "gText_Rom_26A557 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A557) < 0x4d
	.space 0x4d - (. - gText_Rom_26A557)
	.endif
