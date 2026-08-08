	@ data/maps/MagmaHideout_4F/scripts.inc:200 MagmaHideout_4F_Text_MaxieOhItWasYou
	.globl gText_Rom_21CCB0
gText_Rom_21CCB0: @ 0x0821CCB0
	.string "マツブサ『おまえか!\pあっちでも こっちでも ちょこちょこと\nうろつき まわって いたようだが\pなるほど おまえが なにか\nこざいくを していたんだな……!"
	.byte EOS
	.if (. - gText_Rom_21CCB0) > 0x4f
	.error "gText_Rom_21CCB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CCB0) < 0x4f
	.space 0x4f - (. - gText_Rom_21CCB0)
	.endif
