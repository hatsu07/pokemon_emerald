	@ data/text/apprentice.inc:58 gText_ApprenticeLevelModeThanks0
	.globl gText_Rom_26D0EA
gText_Rom_26D0EA: @ 0x0826D0EA
	.string "{STR_VAR_1} ですね! うぅ うわーん!\pあ! ごめんなさい\n{PLAYER}さんが ぼくに へやを\lきめてくれた うれしさで なみだが……\p……グスン\nありがとう ございました!\lまた おはなし してください!"
	.byte EOS
	.if (. - gText_Rom_26D0EA) > 0x61
	.error "gText_Rom_26D0EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D0EA) < 0x61
	.space 0x61 - (. - gText_Rom_26D0EA)
	.endif
