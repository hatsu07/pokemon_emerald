	@ data/maps/Route110/scripts.inc:811 Route110_Text_RideBikeAtFullSpeed
	.globl gText_Rom_1E99CB
gText_Rom_1E99CB: @ 0x081E99CB
	.string "この サイクリング ロードを\nじてんしゃで はしりぬけたら\lだんぜん きもち よさそうだね!$"
	.if (. - gText_Rom_1E99CB) > 0x2f
	.error "gText_Rom_1E99CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E99CB) < 0x2f
	.space 0x2f - (. - gText_Rom_1E99CB)
	.endif
