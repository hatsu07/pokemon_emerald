	@ data/text/apprentice.inc:406 gText_ApprenticeWhatHeldItem11
	.globl gText_Rom_26F9B0
gText_Rom_26F9B0: @ 0x0826F9B0
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしが おくる\lそうだんタイム いってみよう!\lどうぐに かんする そうだんだよ!\pわしの {STR_VAR_1}に もたせるなら\nさあ どんな どうぐがいい?"
	.byte EOS
	.if (. - gText_Rom_26F9B0) > 0x69
	.error "gText_Rom_26F9B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F9B0) < 0x69
	.space 0x69 - (. - gText_Rom_26F9B0)
	.endif
