	@ data/text/apprentice.inc:484 gText_ApprenticeMonFirstThanks0
	.globl gText_Rom_2701A6
gText_Rom_2701A6: @ 0x082701A6
	.string "{STR_VAR_1} ですね! うぅ うわーん!\pあ! ごめんなさい\nじゅんばんが きまった うれしさで\lなみだが……\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_Rom_2701A6) > 0x46
	.error "gText_Rom_2701A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2701A6) < 0x46
	.space 0x46 - (. - gText_Rom_2701A6)
	.endif
