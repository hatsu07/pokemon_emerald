	@ data/text/apprentice.inc:136 gText_ApprenticeRejectTeaching7
	.globl gText_Rom_26DC0F
gText_Rom_26DC0F: @ 0x0826DC0F
	.string "まあ……!\p…… …… ……\n…… …… ……\p……あ ショックで きを うしないましたわ\nいいえ! きっと ききまちがい ですわ\pおねがい! わたくしを\nでしに して くださると おっしゃって!"
	.byte EOS
	.if (. - gText_Rom_26DC0F) > 0x63
	.error "gText_Rom_26DC0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DC0F) < 0x63
	.space 0x63 - (. - gText_Rom_26DC0F)
	.endif
