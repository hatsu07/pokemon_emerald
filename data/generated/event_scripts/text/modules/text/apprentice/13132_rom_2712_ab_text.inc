	@ data/text/apprentice.inc:616 gText_ApprenticeMonThanks6
	.globl gText_Rom_2712AB
gText_Rom_2712AB: @ 0x082712AB
	.string "へっえー!\n{STR_VAR_1} と きますかぁ!\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!$"
	.if (. - gText_Rom_2712AB) > 0x4a
	.error "gText_Rom_2712AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2712AB) < 0x4a
	.space 0x4a - (. - gText_Rom_2712AB)
	.endif
