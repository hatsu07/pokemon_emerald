	@ data/maps/TrainerHill_Entrance/scripts.inc:339 TrainerHill_Roof_Text_HaveTheMostMarvelousGift
	.globl gText_Rom_23BDB3
gText_Rom_23BDB3: @ 0x0823BDB3
	.string "そんな すばらしい キミには\nこれを プレゼントだー!"
	.byte EOS
	.if (. - gText_Rom_23BDB3) > 0x1c
	.error "gText_Rom_23BDB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BDB3) < 0x1c
	.space 0x1c - (. - gText_Rom_23BDB3)
	.endif
