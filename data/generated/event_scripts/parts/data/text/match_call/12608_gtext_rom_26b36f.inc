	@ data/text/match_call.inc:787 MatchCall_Text_Brendan5
	.globl gText_Rom_26B36F
gText_Rom_26B36F: @ 0x0826B36F
	.string "ユウキ『{PLAYER} げんきか?\pオレは いま\n111ばんどうろに きてるんだ!\pさばくの うえのほうに すんでる\nばあさんの ところで\lひとやすみ していく つもりさ!\pちかくまで きたら\nおまえも よっていくと いいよ!"
	.byte EOS
	.if (. - gText_Rom_26B36F) > 0x6d
	.error "gText_Rom_26B36F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B36F) < 0x6d
	.space 0x6d - (. - gText_Rom_26B36F)
	.endif
