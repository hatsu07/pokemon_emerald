	@ data/maps/LilycoveCity_ContestHall/scripts.inc:373 LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy
	.globl gText_Rom_207F6B
gText_Rom_207F6B: @ 0x08207F6B
	.string "やっぱり じょせいと しては\pうつくしさコンテストで かてると\nいつもより ちょっぴり うれしいのよねー！{EOS}"
	.if (. - gText_Rom_207F6B) > 0x36
	.error "gText_Rom_207F6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207F6B) < 0x36
	.space 0x36 - (. - gText_Rom_207F6B)
	.endif
