	@ data/text/match_call.inc:316 MatchCall_PersonalizedText35
	.globl gText_Rom_267A29
gText_Rom_267A29: @ 0x08267A29
	.string "{STR_VAR_1}よ!\nいま じてんしゃに のっているわ!\pわたし すいえいも はしるのも すきだけど\nじてんしゃが いちばん すきなの!\lだって からだに かぜを\lたくさん かんじる ことが できるでしょ?\lそらをとぶ みたいで きもちいいのよ!\pよーし きょうこそ サイクリングロードで\nしんきろくを だすわっ!\lあなたも ちょうせん しに きなさいよ!\lじゃあねーっ$"
	.if (. - gText_Rom_267A29) > 0xb4
	.error "gText_Rom_267A29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267A29) < 0xb4
	.space 0xb4 - (. - gText_Rom_267A29)
	.endif
