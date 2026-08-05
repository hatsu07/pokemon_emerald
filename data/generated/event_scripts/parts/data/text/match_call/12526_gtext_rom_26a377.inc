	@ data/text/match_call.inc:664 MatchCall_Text_Flannery_PreparingPostGame
	.globl gText_Rom_26A377
gText_Rom_26A377: @ 0x0826A377
	.string "アスナ『{PLAYER}さん おめでとう!\pあなたの うわさは かざんの ねつのように\nわたしにも つたわって きてるよ!\pこちらも じゅんちょうに\nトレーニングが すすんでるんだ!\pジムの じゅんびが できたら\nエントリーコールの なまえの ところに\lしるしが つくからね!"
	.byte EOS
	.if (. - gText_Rom_26A377) > 0x85
	.error "gText_Rom_26A377 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A377) < 0x85
	.space 0x85 - (. - gText_Rom_26A377)
	.endif
