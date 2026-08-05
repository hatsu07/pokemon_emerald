	@ data/maps/SeafloorCavern_Room9/scripts.inc:248 SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear
	.globl gText_Rom_218EEB
gText_Rom_218EEB: @ 0x08218EEB
	.string "アオギリ『おかしい……\pべにいろのたまで カイオーガが めざめる\nそして コントロール できるはず……\pなのに…… どうして……\nカイオーガは いなくなった!?\pなぜなんだ!?$"
	.if (. - gText_Rom_218EEB) > 0x59
	.error "gText_Rom_218EEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218EEB) < 0x59
	.space 0x59 - (. - gText_Rom_218EEB)
	.endif
