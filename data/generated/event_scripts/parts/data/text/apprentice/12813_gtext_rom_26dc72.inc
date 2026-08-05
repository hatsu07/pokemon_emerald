	@ data/text/apprentice.inc:139 gText_ApprenticeWhichLevelMode7
	.globl gText_Rom_26DC72
gText_Rom_26DC72: @ 0x0826DC72
	.string "うっ うれしい ですわ……!\pでは さっそくですけど わたくしの\nそうだんを きいて くださいませ!\pわたくし いちど バトルタワーに\nちょうせん しようと おもっていますの\lただ レベルが ふたつ ありまして……\pわたくしは レベル50と オープンレベル\nどちらに ふさわしいと おもわれますか?"
	.byte EOS
	.if (. - gText_Rom_26DC72) > 0x96
	.error "gText_Rom_26DC72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DC72) < 0x96
	.space 0x96 - (. - gText_Rom_26DC72)
	.endif
