	@ data/text/match_call.inc:688 MatchCall_Text_TateLiza_PreparingPostGame
	.globl gText_Rom_26A633
gText_Rom_26A633: @ 0x0826A633
	.string "フウ『{PLAYER}さん おめでとう!\nラン『{PLAYER}さん おめでとう!\pフウ『ぼくたち ふたりは\nラン『まだ しゅぎょうちゅう!\pフウ『もうすこし じかんが かかるけど\nラン『もし ジムを さいかい できたら\pフウ『エントリーコールの なまえに\nラン『しるしが つくから わかりますよ!"
	.byte EOS
	.if (. - gText_Rom_26A633) > 0x8a
	.error "gText_Rom_26A633 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A633) < 0x8a
	.space 0x8a - (. - gText_Rom_26A633)
	.endif
