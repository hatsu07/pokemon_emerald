	@ data/maps/MtChimney/scripts.inc:819 MtChimney_Text_ShirleyDefeat (+1 aliases)
	.globl gText_Rom_2159DB
gText_Rom_2159DB: @ 0x082159DB
	.string "うーん ゆざめ しちゃう{EOS}"
	.if (. - gText_Rom_2159DB) > 0xd
	.error "gText_Rom_2159DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2159DB) < 0xd
	.space 0xd - (. - gText_Rom_2159DB)
	.endif
