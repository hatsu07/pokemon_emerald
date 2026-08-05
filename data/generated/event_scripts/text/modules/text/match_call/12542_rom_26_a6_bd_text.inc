	@ data/text/match_call.inc:691 MatchCall_Text_TateLiza_RematchReady
	.globl gText_Rom_26A6BD
gText_Rom_26A6BD: @ 0x0826A6BD
	.string "フウ『{PLAYER}さん!\nラン『{PLAYER}さん!\pフウ『ジムの じゅんびが できました!\nラン『ジムの じゅんびが できました!\pフウ『いつでも トクサネ シティまで\nラン『きてくださいね!"
	.byte EOS
	.if (. - gText_Rom_26A6BD) > 0x59
	.error "gText_Rom_26A6BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A6BD) < 0x59
	.space 0x59 - (. - gText_Rom_26A6BD)
	.endif
