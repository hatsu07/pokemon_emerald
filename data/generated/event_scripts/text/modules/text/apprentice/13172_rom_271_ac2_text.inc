	@ data/text/apprentice.inc:676 gText_ApprenticeMoveThanks0
	.globl gText_Rom_271AC2
gText_Rom_271AC2: @ 0x08271AC2
	.string "{STR_VAR_1} ですね!\nうぅ うわああぁん!\pあ! ごめんなさい\n{PLAYER}さんが わざを\lきめてくれた うれしさで なみだが……\p……グスン\nありがとう ございました!\lまた おはなし してください!$"
	.if (. - gText_Rom_271AC2) > 0x5f
	.error "gText_Rom_271AC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271AC2) < 0x5f
	.space 0x5f - (. - gText_Rom_271AC2)
	.endif
