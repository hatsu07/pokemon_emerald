	@ data/maps/TrainerHill_Entrance/scripts.inc:299 TrainerHill_Entrance_Text_SaveGameBeforeEnter
	.globl gText_Rom_23BAB9
gText_Rom_23BAB9: @ 0x0823BAB9
	.string "はじめて ごりようになる\nトレーナーさん ですね\pごりように なるまえに レポートを\nおかきくださいませ"
	.byte EOS
	.if (. - gText_Rom_23BAB9) > 0x35
	.error "gText_Rom_23BAB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BAB9) < 0x35
	.space 0x35 - (. - gText_Rom_23BAB9)
	.endif
