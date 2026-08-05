	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:55 AbandonedShip_Rooms_1F_Text_ThaliaPostRematch
	.globl gText_Rom_21AB6F
gText_Rom_21AB6F: @ 0x0821AB6F
	.string "あの おじさん ぜったい\nわたしの ことを みているのよ!\lわざとらしすぎるわ!"
	.byte EOS
	.if (. - gText_Rom_21AB6F) > 0x29
	.error "gText_Rom_21AB6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB6F) < 0x29
	.space 0x29 - (. - gText_Rom_21AB6F)
	.endif
