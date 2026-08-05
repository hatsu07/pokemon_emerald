	@ data/text/match_call.inc:286 MatchCall_PersonalizedText25
	.globl gText_Rom_26735E
gText_Rom_26735E: @ 0x0826735E
	.string "グスン {STR_VAR_1}……です\n……グスン\pきょう ツツジさんに\nおこられ ちゃった\pでも ツツジさんは\nなんで ボクが わるいのか\lちゃんと おしえて くれるから\lうらんだり しないよ!\pあしたも また いくんだ\nトレーナーズ スクール! えへ……\lじゃ またね!$"
	.if (. - gText_Rom_26735E) > 0x81
	.error "gText_Rom_26735E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26735E) < 0x81
	.space 0x81 - (. - gText_Rom_26735E)
	.endif
