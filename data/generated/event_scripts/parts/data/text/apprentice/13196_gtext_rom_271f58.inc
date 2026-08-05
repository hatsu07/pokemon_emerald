	@ data/text/apprentice.inc:712 gText_ApprenticeMoveThanks6
	.globl gText_Rom_271F58
gText_Rom_271F58: @ 0x08271F58
	.string "ははぁーん\n{STR_VAR_1} が イイですか!\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!$"
	.if (. - gText_Rom_271F58) > 0x4a
	.error "gText_Rom_271F58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271F58) < 0x4a
	.space 0x4a - (. - gText_Rom_271F58)
	.endif
