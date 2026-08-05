	@ data/text/match_call.inc:826 MatchCall_Text_Wally3
	.globl gText_Rom_26B7FF
gText_Rom_26B7FF: @ 0x0826B7FF
	.string "ミツル『あっ {PLAYER}さん!\pぼく…… シダケの おじさんに\nなにも いわずに でてきちゃった けど\lおじさん おこってないかな……\p{PLAYER}さん なら\nぼくの きもち わかって くれますよね?"
	.byte EOS
	.if (. - gText_Rom_26B7FF) > 0x5e
	.error "gText_Rom_26B7FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B7FF) < 0x5e
	.space 0x5e - (. - gText_Rom_26B7FF)
	.endif
