	@ data/maps/TrainerHill_Entrance/scripts.inc:361 TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead
	.globl gText_Rom_23BEFA
gText_Rom_23BEFA: @ 0x0823BEFA
	.string "どんな くみあわせの トレーナーが\nまっているのか!\pどんな やつがきても\nおれが たおしてみせるぜ!"
	.byte EOS
	.if (. - gText_Rom_23BEFA) > 0x34
	.error "gText_Rom_23BEFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BEFA) < 0x34
	.space 0x34 - (. - gText_Rom_23BEFA)
	.endif
