	@ data/text/apprentice.inc:361 gText_ApprenticeWhatHeldItem8
	.globl gText_Rom_26F50B
gText_Rom_26F50B: @ 0x0826F50B
	.string "{PLAYER}さんっ!\nきょうも あえて かんげき ですっ……!\pそそそそそ そうだっ!\nあのっ {PLAYER}さんに\lきめて ほしいことが あるのですっ!\pわたしの {STR_VAR_1}には\nなにを もたせれば いいですかっ?"
	.byte EOS
	.if (. - gText_Rom_26F50B) > 0x61
	.error "gText_Rom_26F50B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F50B) < 0x61
	.space 0x61 - (. - gText_Rom_26F50B)
	.endif
