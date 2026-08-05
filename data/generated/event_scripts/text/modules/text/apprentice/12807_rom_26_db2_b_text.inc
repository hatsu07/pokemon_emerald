	@ data/text/apprentice.inc:130 gText_ApprenticeLevelModeThanks6
	.globl gText_Rom_26DB2B
gText_Rom_26DB2B: @ 0x0826DB2B
	.string "ほほぉー!\n{STR_VAR_1} と きましたか!\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_Rom_26DB2B) > 0x4a
	.error "gText_Rom_26DB2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DB2B) < 0x4a
	.space 0x4a - (. - gText_Rom_26DB2B)
	.endif
