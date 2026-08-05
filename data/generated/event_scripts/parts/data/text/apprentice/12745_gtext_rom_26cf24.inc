	@ data/text/apprentice.inc:40 gText_ApprenticeChallenge13
	.globl gText_Rom_26CF24
gText_Rom_26CF24: @ 0x0826CF24
	.string "……ゴホっ ゴホっ よろしく!\n{STR_VAR_1}さんの {STR_VAR_2}ばんでしだ!"
	.byte EOS
	.if (. - gText_Rom_26CF24) > 0x1f
	.error "gText_Rom_26CF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CF24) < 0x1f
	.space 0x1f - (. - gText_Rom_26CF24)
	.endif
