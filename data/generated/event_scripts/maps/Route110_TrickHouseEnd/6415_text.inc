	@ data/maps/Route110_TrickHouseEnd/scripts.inc:283 Route110_TrickHouseEnd_Text_NoRoomInPC
	.globl gText_Rom_23DD3F
gText_Rom_23DD3F: @ 0x0823DD3F
	.string "なに パソコンに はいりきらない?\nそんなの わがはいが しるか!\p……と いいたい ところだけど\nわがはいは やさしいので あとで やろう!"
	.byte EOS
	.if (. - gText_Rom_23DD3F) > 0x48
	.error "gText_Rom_23DD3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DD3F) < 0x48
	.space 0x48 - (. - gText_Rom_23DD3F)
	.endif
