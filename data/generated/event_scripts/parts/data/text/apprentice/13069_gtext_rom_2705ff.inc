	@ data/text/apprentice.inc:520 gText_ApprenticeMonFirstThanks6
	.globl gText_Rom_2705FF
gText_Rom_2705FF: @ 0x082705FF
	.string "ふむふむ!\n{STR_VAR_1} ですねぇ?\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_Rom_2705FF) > 0x47
	.error "gText_Rom_2705FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2705FF) < 0x47
	.space 0x47 - (. - gText_Rom_2705FF)
	.endif
