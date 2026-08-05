	@ data/maps/MtPyre_6F/scripts.inc:54 MtPyre_6F_Text_ValeriePostRematch
	.globl gText_Rom_216AC0
gText_Rom_216AC0: @ 0x08216AC0
	.string "ここに ねむっている ポケモンたち……\nときどき あそんでいる みたいなの……$"
	.if (. - gText_Rom_216AC0) > 0x28
	.error "gText_Rom_216AC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216AC0) < 0x28
	.space 0x28 - (. - gText_Rom_216AC0)
	.endif
