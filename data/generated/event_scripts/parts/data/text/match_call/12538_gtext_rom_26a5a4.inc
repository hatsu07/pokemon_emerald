	@ data/text/match_call.inc:685 MatchCall_Text_TateLiza_Preparing
	.globl gText_Rom_26A5A4
gText_Rom_26A5A4: @ 0x0826A5A4
	.string "フウ『あっ あなたは\nラン『{PLAYER}さん ですね!\pフウ『ぼくたち ジムを さいかい するため\nラン『しゅぎょう しなおして いるんです!\pフウ『ジムの じゅんびが できたら\nラン『ジムの じゅんびが できたら\pフウ『エントリーコールの なまえに\nラン『しるしが つくので わかるんです!"
	.byte EOS
	.if (. - gText_Rom_26A5A4) > 0x8f
	.error "gText_Rom_26A5A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A5A4) < 0x8f
	.space 0x8f - (. - gText_Rom_26A5A4)
	.endif
