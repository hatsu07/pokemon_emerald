	@ data/maps/RustboroCity/scripts.inc:1091 RustboroCity_Text_WaitDontTakeMyGoods
	.globl gText_Rom_1DF5BB
gText_Rom_1DF5BB: @ 0x081DF5BB
	.string "まってぇー!\pその にもつを かえしてぇぇぇー!!$"
	.if (. - gText_Rom_1DF5BB) > 0x1a
	.error "gText_Rom_1DF5BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF5BB) < 0x1a
	.space 0x1a - (. - gText_Rom_1DF5BB)
	.endif
