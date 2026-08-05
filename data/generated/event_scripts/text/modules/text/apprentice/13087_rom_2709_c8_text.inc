	@ data/text/apprentice.inc:547 gText_ApprenticeWhichMonFirst11
	.globl gText_Rom_2709C8
gText_Rom_2709C8: @ 0x082709C8
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしの\lきょうの そうだん いってみようよ!\lじゅんばんに かんする そうだんだよ!\pこたえて! この なかで\nせんとうに したい ポケモンは どれ?"
	.byte EOS
	.if (. - gText_Rom_2709C8) > 0x6d
	.error "gText_Rom_2709C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2709C8) < 0x6d
	.space 0x6d - (. - gText_Rom_2709C8)
	.endif
