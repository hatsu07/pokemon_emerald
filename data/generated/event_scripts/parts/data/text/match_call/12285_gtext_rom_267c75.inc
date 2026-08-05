	@ data/text/match_call.inc:328 MatchCall_PersonalizedText39
	.globl gText_Rom_267C75
gText_Rom_267C75: @ 0x08267C75
	.string "ああ {STR_VAR_1} ですけ……\pボチャン\pブクブクブク………\pザバー\pブンブン\p……ごッ ごめん!\nいま オイルを ぬった てで\lポケナビを もってたら\lうみに おとして しまったんだ!\pうみに おとしても こわれないなんて\nデボンの ポケナビって すげーな!\lじゃ にっこうよくの つづきを するんで\lまたこんど はなそうぜ!$"
	.if (. - gText_Rom_267C75) > 0xa1
	.error "gText_Rom_267C75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267C75) < 0xa1
	.space 0xa1 - (. - gText_Rom_267C75)
	.endif
