	@ data/text/apprentice.inc:715 gText_ApprenticeWhichMove7
	.globl gText_Rom_271FA2
gText_Rom_271FA2: @ 0x08271FA2
	.string "ごきげんよう {PLAYER}さん……!\nあのね きょうも\lわたくし そうだんが あるのです\lわたくしの かわいい\l{STR_VAR_1}ちゃんの ことですの\p{STR_VAR_1}ちゃんに ピッタリの わざ……\n{STR_VAR_2}と {STR_VAR_3}の\lどちらを おしえたら よろしいでしょう?$"
	.if (. - gText_Rom_271FA2) > 0x70
	.error "gText_Rom_271FA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271FA2) < 0x70
	.space 0x70 - (. - gText_Rom_271FA2)
	.endif
