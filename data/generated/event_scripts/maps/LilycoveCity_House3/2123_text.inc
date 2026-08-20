	@ data/maps/LilycoveCity_House3/scripts.inc:118 LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender
	.globl gText_Rom_20A4D3
gText_Rom_20A4D3: @ 0x0820A4D3
	.string "きのみブレンダーで\nとびっきりの ポロック つくっちゃうぜ！{EOS}"
	.if (. - gText_Rom_20A4D3) > 0x1f
	.error "gText_Rom_20A4D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A4D3) < 0x1f
	.space 0x1f - (. - gText_Rom_20A4D3)
	.endif
