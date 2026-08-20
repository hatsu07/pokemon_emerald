	@ data/maps/LilycoveCity/scripts.inc:569 LilycoveCity_Text_WailmerLeapOutOfWater
	.globl gText_Rom_1E0D86
gText_Rom_1E0D86: @ 0x081E0D86
	.string "それっ! ホエルコ!\nそこで すいめんから ジャンプするのだ!{EOS}"
	.if (. - gText_Rom_1E0D86) > 0x20
	.error "gText_Rom_1E0D86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0D86) < 0x20
	.space 0x20 - (. - gText_Rom_1E0D86)
	.endif
