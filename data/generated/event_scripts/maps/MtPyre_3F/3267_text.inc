	@ data/maps/MtPyre_3F/scripts.inc:56 MtPyre_3F_Text_KaylaPostBattle
	.globl gText_Rom_216723
gText_Rom_216723: @ 0x08216723
	.string "まだまだ しゅぎょうが たりないのね……\nさんちょうを めざすわよ……!\pファイト! わたし!{EOS}"
	.if (. - gText_Rom_216723) > 0x30
	.error "gText_Rom_216723 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216723) < 0x30
	.space 0x30 - (. - gText_Rom_216723)
	.endif
