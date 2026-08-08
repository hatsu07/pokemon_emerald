	@ data/maps/MagmaHideout_2F_2R/scripts.inc:31 MagmaHideout_2F_2R_Text_Grunt15PostBattle
	.globl gText_Rom_21C4CD
gText_Rom_21C4CD: @ 0x0821C4CD
	.string "とんでもないものを ほりだした!\nあいいろのたまも てにいれた!\pあとは リーダーが……\nふふふ…… ふはははは!"
	.byte EOS
	.if (. - gText_Rom_21C4CD) > 0x3a
	.error "gText_Rom_21C4CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C4CD) < 0x3a
	.space 0x3a - (. - gText_Rom_21C4CD)
	.endif
