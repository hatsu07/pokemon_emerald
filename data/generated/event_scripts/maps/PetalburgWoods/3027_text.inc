	@ data/maps/PetalburgWoods/scripts.inc:436 PetalburgWoods_Text_TryUsingThisItem
	.globl gText_Rom_214A23
gText_Rom_214A23: @ 0x08214A23
	.string "それって カナズミの ジムバッジ!\pあなた トレーナーなのね\nこの どうぐ つかってみたら どうかしら?{EOS}"
	.if (. - gText_Rom_214A23) > 0x35
	.error "gText_Rom_214A23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214A23) < 0x35
	.space 0x35 - (. - gText_Rom_214A23)
	.endif
