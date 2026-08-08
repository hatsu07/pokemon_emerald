	@ data/maps/MauvilleCity/scripts.inc:603 MauvilleCity_Text_WattsonThanksTakeTM
	.globl gText_Rom_1DE432
gText_Rom_1DE432: @ 0x081DE432
	.string "テッセン『わっはははは!\pさすがは {PLAYER}{KUN}! おまえさんに\nたのんで せいかい じゃったよ!\pこれは おれいじゃ\n10まんボルトの わざマシン\lえんりょせずに もっていくが いいぞ!$"
	.if (. - gText_Rom_1DE432) > 0x5d
	.error "gText_Rom_1DE432 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE432) < 0x5d
	.space 0x5d - (. - gText_Rom_1DE432)
	.endif
