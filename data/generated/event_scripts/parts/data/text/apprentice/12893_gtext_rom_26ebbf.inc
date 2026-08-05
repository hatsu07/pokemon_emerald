	@ data/text/apprentice.inc:256 gText_ApprenticeWhatHeldItem1
	.globl gText_Rom_26EBBF
gText_Rom_26EBBF: @ 0x0826EBBF
	.string "わー {PLAYER}さん だ!\nよかった! ききたい ことが あったんだ!\pあのね {PLAYER}さんは\nポケモンに どうぐを もたせてる?\lボクも もたせたいんだけど……\pボクの {STR_VAR_1}には\nなにを もたせたら いいのかな\l{PLAYER}さんは どう おもう?"
	.byte EOS
	.if (. - gText_Rom_26EBBF) > 0x74
	.error "gText_Rom_26EBBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EBBF) < 0x74
	.space 0x74 - (. - gText_Rom_26EBBF)
	.endif
