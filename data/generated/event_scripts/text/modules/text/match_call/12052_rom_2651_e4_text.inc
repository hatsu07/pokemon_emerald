	@ data/text/match_call.inc:1 MatchCall_WildBattleText1
	.globl gText_Rom_2651E4
gText_Rom_2651E4: @ 0x082651E4
	.string "あ! {PLAYER}{KUN} こんにちは!\n{STR_VAR_1} です\pこのまえ {STR_VAR_2}を みつけたんだけど\nつかまえられなかったよ\pおしかったなー\nじゃあ またね!$"
	.if (. - gText_Rom_2651E4) > 0x44
	.error "gText_Rom_2651E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2651E4) < 0x44
	.space 0x44 - (. - gText_Rom_2651E4)
	.endif
