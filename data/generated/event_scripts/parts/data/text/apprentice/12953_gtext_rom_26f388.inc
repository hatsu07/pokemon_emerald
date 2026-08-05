	@ data/text/apprentice.inc:346 gText_ApprenticeWhatHeldItem7
	.globl gText_Rom_26F388
gText_Rom_26F388: @ 0x0826F388
	.string "ごきげん いかがですか {PLAYER}さん\nきいて くださる?\pこのまえ たたかった トレーナーさん\nポケモンに なにか どうぐを\lもたせていた らしいんですの\pおかげで まけて しまいましたわ……\pわたくしも まけずに なにか\n{STR_VAR_1}に もたせたいんですの!\lなにが よろしいの でしょう\lきめて いただければ うれしいのですが……"
	.byte EOS
	.if (. - gText_Rom_26F388) > 0xa2
	.error "gText_Rom_26F388 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F388) < 0xa2
	.space 0xa2 - (. - gText_Rom_26F388)
	.endif
